/*
N = 4

1 

2 1 

1 2 3 

4 3 2 1
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
 int r , c ;
 for(r = 1 ; r <= N ; r++ , printf("\n"))
 {
 if(r % 2)
 {
 for( c = 1 ; c <= r ; c++)
 printf("%d " , c);
 }
 else
 {
 for(c = r ; c >= 1 ; c--)
 printf("%d " , c);
 }
 }
}
