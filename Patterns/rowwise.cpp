/* 
N=4

1 2 3 4 

2 3 4 5 

3 4 5 6 

4 5 6 7
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
 start = r;
 for(c = 1 ; c <= N ; c++)
 printf("%d " , start++);
 }
}
