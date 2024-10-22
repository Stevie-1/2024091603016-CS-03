#include <stdio.h> 

int main() 
{
    int m,n;
start:
    printf("Enter two integers: "); 
    scanf("%d %d", &m, &n); 
    if (m <= 0 || m >= 2147483648 || n <= 0 || n >= 2147483648)
    {
        goto start;
    }
    while (m != 0 && n != 0)
    {
     if (m >= n)
     {
        m = m-n;
     }
     else
     {
        n = n-m;
     }
    }
    if (m == 0)
    {
        printf("Greatest common divisor: %d", n);
    }
    else if (n == 0)
    {
        printf("Greatest common divisor: %d", m);
    }
}