 AREA PROGRAM, CODE, READONLY
 ENTRY
MAIN
 LDR R0,=FACTORIAL
 MOV R1, #4
 MOV R1, R1, LSL#2
 ADD R0, R0, R1
 LDR R3, [R0]
 
 AREA FACTORIAL, READONLY
 DCD 1
 DCD 1
 DCD 2
 DCD 6
 DCD 24
 DCD 120
 DCD 720
 END