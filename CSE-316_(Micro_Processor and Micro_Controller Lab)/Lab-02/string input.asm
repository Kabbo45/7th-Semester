.MODEL SMALL
.STACK 100H
.DATA  
MSG DB "ENTER A FIRST NUMBER: $"  
MSG2 DB "ENTER A SECOND NUMBER : "   
MS DB "OUTPUT: $"
A DW ?

.CODE
MAIN PROC   
    MOV AX, @DATA
    MOV DS,AX
    ;MOV A,12      ; AMRA JE DATA-WORD TA NICHI SEITA EIKHANE AMNEI RAKHTESI
       
     
    MOV AH,9       ; FOR STRING OUTPUT
    LEA DX,MSG     ; LOAD EFFECTIVE ADDRESS  & SAVE THIS REGISTER ADDRESS
    INT 21H  
    
    
    MOV AH,1       ; FOR INPUT STRING
    INT 21H        ; INTURREPTED
    MOV BL,AL      ; VALUE PRINT ER JONNO AMRA OUTPUT SECTION E NITECHI
         
              
    MOV AH,2      ; NEW LINE ER CURSOR NICHE NEWAR JONNO
    MOV DL, 0DH   ; EIKHANE AMRA NEW LINE E OUTPUT DEKHABE
    INT 21H
    MOV DL, 0AH   ; EIKHANE AMRA DEKHTESI JE OUTPUT PRINT KORBE SEITA KE AMADER NICHE NEWAR JONNO
    INT 21H       ; BADHA DILAM AMRA
    
    
    MOV AH,2       ; OUTPUT PRINT KORTESI AMRA
    MOV DL, BL
    INT 21H 

    
    MAIN ENDP
END MAIN