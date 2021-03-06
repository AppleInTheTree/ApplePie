#include <iostream>
#define HUNGRY 0x01 //2의 승수로 올라간다
#define THIRSTY 0x02
#define TIRED 0x04 //0x가 16진수 표현방법
#define COLD 0x08 //보통 16진수를 이용해 표현하는데 2배씩 커진다  
#define FIRE 0x10
#define POISON 0x20

//Define쓰는 이유가독성
//유지보수
using namespace std;
//"cwd": "c:/Users/W24501/ApplePie",
//"miDebuggerPath": "C:/MinGW/bin/gdb.exe",
int global = 4;//전역변수
//함수

int Add (int a, int b)
{
        return a + b;

}

int main()
{
    //자료형 (크기 단위, byte) Data Type
    //정수형 : char(1), short(2), int(4), long(4), long long(8)
    //실수형 : float(4), double(8)

    int i = 0;
    unsigned char c = 0; // 양수만 선언하고 싶을때, 일반적으로 char이렇게 표현했을때는
                         // 음수도 포함하는 바이트이다
    c =256 ; //1 0000 0000 으로 공간을 초과했기 때문에 0으로 대입
    c = -1; // 1111 1111 -> 255로 인식

    char c1 = 0; // 음수 2진법 표현 예졔 5 + (-5) = 0 5와 더해서 0을 만드는 수가 -5이다 
                 // 0 111 1111 (127) 1 000 0001(-127) 앞에 한자리는 음수 so, 양수을 뒤집어서 +1
    c1 = 255; // -1로 인식 1 111 1111              
              // 중요 : 메모리안에 있는 데이터의 값은 똑같지만 보는 관점에 따라 -1 or 255로 인식
              // 2의 보수법 : ex) 0000 0001 + 1111 1111 == 0 양수 반전 후 1 더하기


    //정수와 실수는 메모리를 처리하고 표현하는 방법이 아애 다르다
    //부동소수점으로 실수를 메모리에 2진법으로 저장
    //실수 표현방식은 숫자의 정밀도에 의존하기 때문에 double이 float보다 더 정확하게 표현 가능

    //두 표현방식의 피 연산자가 연산될 경우 명시적으로 변환하자

    float f = 10.2415f + (float)20; // 실수를 상수로 선언 할때 뒤에 f를 붙이면 float타입
                                    //f을 붙이지 않으면 double로 인식한다. ex) 10.2f 10.2 


    // 연산자
    // 산술 연산자 (+ - * / %(%와 /는 피연산자가 모두 정수여야 한다))

    int data = (int)(10.f / 2.f);


    //구문 
    //if, else 

    //비트 연산자
    //비트 곱(&), 합(|), xor(^) 반전(~)
    //비트 단위로 연산을 진행
    //& 둘다 1인 경우 1
    //| 둘중 하나라도 1 이면 1
    //^ 같으면 0 다르면 1
    //~ 1은 0으로 0은 1로 
    
    unsigned int iStatus = 0; //32개의 비트 각 비트에 대응하는 상태를 넣어줄 수 있다.
    //비트 연산자를 이용한 상태를 잘 활용하면 int일 경우 32가지를 내포 할 수 있다.
    //상태 추가
    iStatus |= HUNGRY;
    iStatus |= THIRSTY;
    
    //상태 확인
    if(iStatus & HUNGRY)
    {
        ;
    }    

    //특정 자리 비트 제가
    iStatus &= ~THIRSTY;//공식으로 외우자!
                        // 그 비트를 반전시키고 원래 비트랑 곱연산 해준다

    //변수
    //1. 지역 변수 : {}안에 묶인 변수
    //2. 전역 변수 : {}밖에
    //3. 정적 변수
    //4. 외부 변수


    //함수(기능)(모듈화가 중요 ! 잘 쪼개고 잘 구분하자)
    data = Add(10,20);
    

    return 0;
}