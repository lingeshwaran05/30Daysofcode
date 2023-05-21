/* 
N=4

01 02 03 04 

08 07 06 05 

09 10 11 12 

16 15 14 13
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
 int r , c , start , gap , gap1;
 gap = 0;
 gap1 = 2;
 for(r = 1 ; r <= N ; r++ , printf("\n"))
 {
 if(r % 2 )
 {
 start = gap * N + 1;
 for(c = 1 ; c <= N ; c++)
 	printf("%02d " , start++);
 gap += 2;
 }
 else
 {
 start = gap1 * N ;
 for(c = 1 ; c <= N ; c++)
 	printf("%02d " , start--);
 gap1 += 2;
 }
 }
}
