compilereinstellungen

-g -o=

see 
 C:\tools\ide\sloeber-workspace\DEBUG_AVR\README.dir

USE korrect 8/16MHZ freg of mcu at comiple time (otherwise hangs in avr8-stub-uart comfig)


 debug as ...
 
 Debugger tab
 C:\tools\ide\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gdb.exe
 -no remote target
 
 startup tab
 no halt no dely
 
 set serial baud 1152005V)  or 57600(3,3,V)
 target remote com5