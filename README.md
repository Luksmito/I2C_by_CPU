# Library Configuration Definitions
## 1. SDA (Serial Data Pin)
### Description:

The SDA (Serial Data) pin is used for data communication in the I2C protocol.
Configuration:

If the user has not explicitly defined SDA, it is set to the default value of TRISAbits.TRISA0.
## 2. SCL (Serial Clock Pin)
### Description:

The SCL (Serial Clock) pin provides clock synchronization for devices communicating via I2C.
### Configuration:

If the user has not explicitly defined SCL, it is set to the default value of TRISAbits.TRISA1.
## 3. PERIOD (Default Period Value)
### Description:

The PERIOD definition sets the default value for the clock period, which may be utilized by the library, this library use
the __delay_us function that is available in MPLABXIDE but you can change this for the delay function of your IDE.
### Configuration:

If the user has not explicitly defined PERIOD, the default value is set to 100.
## 4. WPUSDA (Weak Pull-Up Configuration for SDA)
### Description:

WPUSDA configures the weak pull-up setting for the SDA pin.
### Configuration:

If the user has not explicitly defined WPUSDA, it is set to the default value of WPUAbits.WPUA0.
## 5. WPUSCL (Weak Pull-Up Configuration for SCL)
### Description:

WPUSCL configures the weak pull-up setting for the SCL pin.
### Configuration:
If the user has not explicitly defined WPUSCL, it is set to the default value of WPUAbits.WPUA1.


If the user has not explicitly defined WPUSCL, it is set to the default value of WPUAbits.WPUA1.
