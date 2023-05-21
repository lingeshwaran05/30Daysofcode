/*
N = 5

01

02 06

03 07 10

04 08 11 13

05 09 12 14 15
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
 int r , c , val , start;
 for(r = 1 ; r <= N ; r++ , printf("\n"))
 {
 val = r ;
 start = N-1;
 for(c = 1 ; c <= r ; c++ , val+=start , start--)
 printf("%02d " , val);
 }
}
