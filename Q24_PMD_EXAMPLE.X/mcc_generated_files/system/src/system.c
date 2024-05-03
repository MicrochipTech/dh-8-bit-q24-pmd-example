/**
 * System Driver Source File
 * 
 * @file system.c
 * 
 * @ingroup systemdriver
 * 
 * @brief This file contains the API implementation for the System driver.
 *
 * @version Driver Version 1.0.1
*/

/*
© [2024] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

 /**
   Section: Included Files
 */
#include "../system.h"

/**
  Section: Driver APIs
*/

void PMD_Initialize(void);

void SYSTEM_Initialize(void)
{
    CLOCK_Initialize();
    PIN_MANAGER_Initialize();
    PMD_Initialize();
    VDDIO2_Initialize();
    INTERRUPT_Initialize();
}

void PMD_Initialize(void)
{
    //IOCMD IOC enabled; CLKRMD CLKR enabled; SCANMD SCANNER enabled; CRCMD CRC enabled; FVRMD FVR enabled; SYSCMD SYSCLK enabled; HLVDMD HLVD enabled; 
    PMD0 = 0x0;
    //TMR0MD TMR0 enabled; TMR1MD TMR1 enabled; TMR2MD TMR2 enabled; TMR3MD TMR3 enabled; TMR4MD TMR4 enabled; TMR6MD TMR6 enabled; CM1MD CM1 enabled; ZCD1MD ZCD1 enabled; 
    PMD1 = 0x0;
    //ADCMD ADC enabled; DAC1MD DAC1 enabled; CWG1MD CWG1 enabled; CM2MD CM2 enabled; ACTMD ACT enabled; NCO1MD NCO1 enabled; CCP1MD CCP1 enabled; CCP2MD CCP2 enabled; 
    PMD2 = 0x0;
    //SPI2MD SPI2 enabled; SPI1MD SPI1 enabled; I2C1MD I2C1 enabled; PWM1MD PWM1 enabled; PWM2MD PWM2 enabled; PWM3MD PWM3 enabled; U1MD UART1 enabled; U2MD UART2 enabled; 
    PMD3 = 0x0;
    //CLC1MD CLC1 enabled; CLC2MD CLC2 enabled; CLC3MD CLC3 enabled; CLC4MD CLC4 enabled; DMA1MD DMA1 enabled; DMA2MD DMA2 enabled; DMA3MD DMA3 enabled; I2C2MD I2C2 enabled; 
    PMD4 = 0x0;
    //DMA4MD DMA4 enabled; CLC5MD CLC5 enabled; CLC6MD CLC6 enabled; CLC7MD CLC7 enabled; CLC8MD CLC8 enabled; ZCD2MD ZCD2 enabled; TU16BMD UT16B enabled; TU16AMD UT16A enabled; 
    PMD5 = 0x0;
    //PORTWMD PORTW enabled; 
    PMD6 = 0x0;
}


