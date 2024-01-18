#include "I2C_by_CPU.h"

void I2C_Init() {
    SDA = 1; 
    SCL = 1; 
    WPUSDA = 1;
    WPUSCL = 1;
}

void I2C_Start() {
    SDA = 1;
    SCL = 1;
    __delay_us(PERIOD);
    SDA = 0; 
    __delay_us(PERIOD);
    SCL = 0;
}

void I2C_Stop() {
    SDA = 0;
    SCL = 1;
    __delay_us(PERIOD);
    SDA = 1; // Stop bit
    __delay_us(PERIOD);
}

void I2C_Write(uint8_t data) {
    for (uint8_t i = 0; i < 8; i++) {
        SDA = (data & 0x80) >> 7; 
        data <<= 1;
        __delay_us(PERIOD/10);
        SCL = 1;
        __delay_us(PERIOD);
        SCL = 0;
    }
    SDA = 1; 
    __delay_us(PERIOD/10);
    SCL = 1;
    __delay_us(PERIOD);
    SCL = 0;
    SDA = 0;
}

uint8_t I2C_Read() {
    uint8_t data = 0;
    SDA = 1;
    for (uint8_t i = 0; i < 8; i++) {
        SCL = 1;
        __delay_us(PERIOD);
        data <<= 1;
        data |= SDA; 
        SCL = 0;
        __delay_us(PERIOD);
    }
    return data;
}

void I2C_ACK() {
    SDA = 0;
    SCL = 1;
    __delay_us(PERIOD);
    SCL = 0;
    __delay_us(PERIOD);
}

void I2C_NACK() {
    SDA = 1;
    SCL = 1;
    __delay_us(PERIOD);
    SCL = 0;
    __delay_us(PERIOD);
}