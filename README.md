# LCD-7Segment-KeyPad
Use KeyPad to write on LCD (16x2) and 7 Segment - AVR Atmega32 -

## This a small project , allow user to play with Keypad to display the number on both LCD and Keypad 

### Drivers 

#### 1- Keypad 

##### A) KeyPad_Init(); // For init the Keypad driver

##### B) KeyPad(); // To get the pressed number 

#### 2- LCD 

##### A) LCD_EN(); // For enabling the EN LCD driver 

##### B) Toggle_Curcor_Pos(); // Toggle the curcor position automatically to write on both lines 

##### C) LCD_init(); // to init the LCD driver

##### D) LCD_Write_CMD; // to send command to LCD 

##### E) LCD_Write_Data ; // to send Data 'Char' to LCD 

##### F) LCD_Write_String; // to send Data 'Char * String' to LCD

##### G) LCD_GoTo ; // to go to specific location (1,1 / ........... / 2,16)

