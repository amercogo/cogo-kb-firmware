#ifndef CONFIG_H
#define CONFIG_H
//Header Guard 
/*Prvents double inclusion*/

//Matrix size
//Constant values for the number of rows and columns in the matrix
#define MATRIX_ROWS 6
#define MATRIX_COLS 18

//Pin mapping
//Defines the pin numbers for the rows and columns of the matrix
#define ROW_PINS {PB0, PB1, PB2, PB3, PB4, PB5} 
// NAPOMENA: Na ATmega32U4 ćeš morati koristiti Port D, Port E i Port F.
#define COL_PINS { \
    PD0, PD1, PD2, PD3, PD4, PD7, \
    PE6, \
    PF0, PF1, PF4, PF5, PF6, PF7, \
    PC6, PC7, \
    PB6, PB7, PD5 \
}

//Waiting time
//Mechanical contacts oscillate for a few milliseconds, this "slows them down"
#define DEBOUNCE_MS 5 // milliseconds

//USB Settings
//These values inform the computer about the keyboard manufacturer
#define VENDOR_ID 0x1234
#define PRODUCT_ID 0x0001
#define DEVICE_VER 0x0001

//Device Description
#define MANUFACTURER "Amer Cogo"
#define PRODUCT "Cogo-KB FUllsize"

#endif //End of CONFIG_H