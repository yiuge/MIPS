J(00000000000000000000000000)
JR(R1)
BNE(R5,R31,1111111111111111)
BEQ(R3,R27,1010101010101010)
BLTZ(R2,1111000011110000)
BGTZ(R17,1100110011001100)
BLEZ(R21,0000000011111111)
BGEZ(R30,1111111111111111)
SW(R8,1010101010101010,R9)
LW(R11,1111111111110000,R10)
SLL(R23,R24,R25)
SRL(R26,R27,R28)
SRA(R29,R30,R31)
NOP()
ADD(R1,R2,R3)
SUB(R0,R4,R5)
MUL(R6,R7,R8)
AND(R9,R10,R11)
OR(R12,R13,R14)
XOR(R15,R16,R17)
NOR(R18,R19,R20)
SLT(R21,R22,R23)
ADDI(R24,R24,1111111100000000)
ANDI(R27,R28,1111111100000000)
ORI(R30,R31,1111000011110000)
XORI(R1,R2,1111111111111111)
MOVZ(R4,R5,1110001110001110)
BREAK()