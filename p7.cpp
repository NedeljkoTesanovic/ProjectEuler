#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#define TARGET 10001
bool isPrime(unsigned long long n)
{
    unsigned long lim = sqrt(n);
    for(unsigned long i = 2; i<=lim; i++)
        if(n % i == 0)
            return false;
    return true;
}

int main()
{
    int x = 3;
    unsigned long long p = 5;
    for(;;)
    {
        p+=2; //7
        if(isPrime(p))
        {
            x++;
            if(x == TARGET)
                break;
        }
        p+=2; //9
        if(isPrime(p))
        {
            x++;
            if(x == TARGET)
                break;
        }
        p+=2; //11
        if(isPrime(p))
        {
            x++;
            if(x == TARGET)
                break;
        }
        p+=2; //13
        if(isPrime(p))
        {
            x++;
            if(x == TARGET)
                break;
        }
        p+=2; //15
    }

    printf("%d th prime is %llu \n", TARGET, p);
    return 0;
}
