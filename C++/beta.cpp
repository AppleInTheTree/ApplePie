#include <stdlib.h>
#include <cstdio>
int Add(int a, int b)
{
    return a + b;
}

int main() // 가장 먼저 실행되는 함수 
{
    
    int iData =Add(100,200);

    /*
    반복문
    for()
    for(/반복자 초기화, 한번만 실행*/;/*조건 체크*/;/*반복자 변경/)
    {

    }
    */
    
    
    for (int i = 0; i < 10; i++)
    {
        if(i/2 != 0)
        {
            continue ;// 그 다음 반복체크로 넘어간다    
        }
        
        printf("hi\n");
        //break ;// 루프 탈출
    }
    //while()
    int i = 0;
    while(i < 2)
    {
        printf("hello\n");

        i++;
    
        break ; // 루프 탈출
    }

    return 0;
}