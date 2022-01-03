#include <stdlib.h>
#include<cstdio> 

//함수
//Factorial

int factorial(int a)
{
    int iValue = 1;

    for(int j =0; j < a-1; j++)
    {
        iValue *= (j+2);
    }
    
    return iValue;
}

//재귀함수
//가독성, 구현의 용이
//단점, 속도가 느리다
//재귀 함수를 잘못쓰면 스택 오버플로우 발생
//반드시 탈출 조건이 있어야 한다


int main()
{
    int iValue = factorial(7);

    return 0;
}