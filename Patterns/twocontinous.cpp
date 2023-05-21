/* 
N = 4

01 02 03 04 17 18 19 20 

    05 06 07 14 15 16 

         08 09 12 13 

              10 11
              */
#include<stdio.h>
void displayPattern(int);
int main()
{
 int N ;
 scanf("%d" , &N);
 displayPattern(N);
 return 0;
}
void displayPattern(int N)
{
 int r , c , val, val1;
 val = val1 = 1;
 for(r = N ; r >= 1 ; r-- , printf("\n"))
 {
 for(c = N ; c > r ; c--)
 printf(" ");
 for( ; c >= 1 ; c--)
 printf("%02d " , val++);
 for(c = 1; c <= r ; c++)
 printf("%02d " , (r*r)+val1++);
 }
}
