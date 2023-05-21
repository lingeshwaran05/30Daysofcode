/*
N=4

01 

02 03 

06 05 04 

07 08 09 10
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
 int r , c , start;
 for( r = 1 ; r <= N ; r++ , printf("\n"))
 {
 if( r % 2)
 {
 start = (r *(r+1))/2 ;
 for(c = 1 ; c <= r ; c++)
 	printf("%02d " , start--);
 }
 else
 {
 start = (r *(r-1))/2 +1 ;
 for(c = 1 ; c <= r ; c++)
	 printf("%02d " , start++);
 }
 }
}
