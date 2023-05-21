/*
N = 4

01*02*03*04 

09*10*11*12 

13*14*15*16 

05*06*07*08
*/
#include<stdio.h>
void displayPattern(int);
int main()
{
 int N ;
 scanf("%d" , &N);
 displayPattern(N);
 return 0 ;
}
void displayPattern(int N)
{
 int r, c , gap , start , fhalf;
 gap = 0;
 fhalf = (N-1) / 2 + 1;
 for(r = 1 ; r <= fhalf ; r++ , printf("\n" , gap+=2))
 {
 start = gap*N+1;
 for(c = 1 ; c < N ; c++)
 printf("%02d*" , start++ );
 printf("%02d" , start++);
 }
 gap -= 2;
 (N % 2 ? gap-- : gap++);
 for(r = 1 ; r <= N - fhalf ; r++ , printf("\n", gap-=2))
 {
 start = gap*N+1;
 for(c = 1 ; c < N ; c++)
 printf("%02d*" , start++ );
 printf("%02d" , start++);
 }
}

