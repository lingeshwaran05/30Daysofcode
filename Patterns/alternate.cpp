/*
N = 5

1 2 3 4 5
2 3 4 5 1
3 4 5 1 2
4 5 1 2 3
5 1 2 3 4*/


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
 for(c = 1 ; r+c <= N+1 ; c++)
 printf("%d " , start++);
 for( ; c <= N ; c++)
 printf("%d " , (start++)%N);
 }
}

