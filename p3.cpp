/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

#include <iostream>
using namespace std;

int main()
{
    ulong num = 600851475143;
    ulong p = 2;
    while(num != 1)
    {
        if(num % p == 0)
        {
            num/=p;
        }
        else
             p++;
    }
    cout<<p<<endl;
    return 0;
}