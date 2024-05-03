 /*
 * MAIN Generated Driver File
 * 
 * @file main.c
 * 
 * @defgroup main MAIN
 * 
 * @brief This is the generated driver implementation file for the MAIN driver.
 *
 * @version MAIN Driver Version 1.0.0
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
#include "mcc_generated_files/system/system.h"
#define LED_TOGGLE
/*
    Main application
*/

int main(void)
{
    SYSTEM_Initialize();

    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts 
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global Interrupts 
    // Use the following macros to: 

    // Enable the Global Interrupts 
    //INTERRUPT_GlobalInterruptEnable(); 

    // Disable the Global Interrupts 
    //INTERRUPT_GlobalInterruptDisable(); 


    LED_SetHigh();
    
    while(1)
    {
        //No peripherals disabled through PMD
        PMD0 = 0x0;
        PMD1 = 0x0;
        PMD2 = 0x0;
        PMD3 = 0x0;
        PMD4 = 0x0;
        PMD5 = 0x0;
        PMD6 = 0x0;
        
        //Blink three times before switching to PMD disabling all peripherals if LED_TOGGLE is defined
        for(uint8_t i = 0; i < 3; i++)
        {
            __delay_ms(300);
#ifdef LED_TOGGLE
            LED_SetLow();
#endif
            
            __delay_ms(300);
#ifdef LED_TOGGLE
            LED_SetHigh();
#endif        
        }

        __delay_ms(2000);

        //All peripherals disabled through PMD
        PMD0 = 0xfb;
        PMD1 = 0xff;
        PMD2 = 0xff;
        PMD3 = 0xff;
        PMD4 = 0xff;
        PMD5 = 0xff;
        PMD6 = 0x1;    
        
        //Blink twice before switching to PMD not disabling any peripherals if LED_TOGGLE is defined
        for(uint8_t i = 0; i < 2; i++)
        {
            __delay_ms(300);
#ifdef LED_TOGGLE
            LED_SetLow();
#endif
            
            __delay_ms(300);
#ifdef LED_TOGGLE
            LED_SetHigh();
#endif        
        }        

        __delay_ms(2000);
    }    
}