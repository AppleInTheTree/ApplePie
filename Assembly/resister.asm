%include "io64.inc"

section .text
global CMAIN
CMAIN:
    mov rbp, rsp; for correct debugging

    ;8bit = 1 byte
    ;16bit = 2byte = 1word 
    ;32bit = 2word = 1dword
    ;64bit = 4word = 1qword
    ;write your code here
    xor rax, rax
    ret
    
    ;메모리 <->레지스터
    ;메모리에는 구분할 수 있도록 주소(번지수)가 있다
    mov rax , a
    
    ;초기화 된 데이터
    ;[변수이름] [크기] [초기값]
    ;[크기]는 정해진 값을 이용 db(1) dw(2) dd(4) dq(8)
section .data    
    a db 0x11   ;[0x11](16진수 두개가 1바이트)
    b dw 0x2222
    c dd 0x33333333
    d dq 0x4444444444444444
    
    
    ;초기화 되지 않은 데이터
    ;[변수이름] [크기] [개수]
    ;[크기] resb(1) resw(2) resd(4) resq(8)
section .bss;(실행파일의 크기가 줄어든다)
    e resb 10