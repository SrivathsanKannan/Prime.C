#include <stdio.h>

int nprime(int n, int i)
{
    if (i == 1)
    return 1;
    
    else
    {
       if (n % i == 0)
       return 0;
       
       else
       return nprime(n, i - 1);
    }
}

int main()
{
    int n;
    printf("Please enter a number - \n");
    scanf("%d", &n);
    if(nprime(n, n/2))
    printf("\n%d is a prime number", n);
    
    else 
    printf("\n%d is not a prime number", n);

    return 0;
}
