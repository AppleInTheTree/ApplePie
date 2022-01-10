%include "io64.inc"

section .text
global CMAIN
CMAIN:
    mov rbp, rsp; for correct debugging
    ;write your code here
    ;메모를 남길 수 있는 기능 = 주석
    
    ;10진수(0 1 2 3 4 5 6 7 8 9)
    ;10 11 12 ... 19 20
    
    ;2진수(0 1)
    ;0 1 10 11 20
    ;0b0 0b1 0b11 0b100(=4)
    
    ;16진수(0 1 2 3 4 5 6 7 8 9 A B C D E F)
    ;0 1 2 3 4 5 6 7 8 9 A B C D E F 10
    ;0x00
    
    ;0b 1001(9) 0101(5) = 0x95 (이진수를 4개씩 끊어서 읽는다)
    
    PRINT_STRING msg
    
    xor rax, rax
    ret
    
    
section.data
    msg db 'Hello World', 0x00