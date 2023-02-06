#include <stdio.h>
#include <math.h>

int is_prime(long num)
{
    int k = 1, a = 0, b = 0;
    long sr;
    switch(num)
        {
        case 1: return 0;
        case 2: return 1;
        case 3: return 1;
        case 4: return 0;
        case 5: return 1;
        case 6: return 0;
        case 7: return 1;
    }
    if (num % 2 == 0) return 0;
    if (num % 3 == 0) return 0;
    sr = (int) sqrt(num);
    while (b < sr) {
        a = (6 * k) - 1;
        b = (6 * k) + 1;
        if (num % a == 0)
            return 0;
        if (num % b == 0)
            return 0;
        k += 1;
    }
    return 1;
}

int main()
{
    int j,a,b;
	printf("Enter the range");
	scanf("%d %d",&a,&b);
    for (j = a; j<b; j++){
        if (is_prime(j))
            printf("%d is a prime\n", j);
    }
}

