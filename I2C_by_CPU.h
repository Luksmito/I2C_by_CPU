/* 
 * File:   I2C_by_CPU.h
 * Author: lucas
 *
 * Created on 9 de Janeiro de 2024, 20:58
 */

#ifndef I2C_BY_CPU_H
#define	I2C_BY_CPU_H

#ifndef SDA
#define SDA TRISAbits.TRISA0 // Data pin(SDA)
#endif

#ifndef SCL
#define SCL TRISAbits.TRISA1 // Clock Pin (SCL)
#endif

#ifndef PERIOD
#define PERIOD 100
#endif

#ifndef WPUSDA
#define WPUSDA WPUAbits.WPUA0
#endif
    
#ifndef WPUSCL
#define WPUSCL WPUAbits.WPUA1
#endif 

void I2C_Init();

void I2C_Start();

void I2C_Stop();

void I2C_Write(uint8_t data);

uint8_t I2C_Read();

void I2C_ACK();

void I2C_NACK();

#endif	

