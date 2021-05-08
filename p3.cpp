/*
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
*/

#include <iostream>
using namespace std;
int main()
{
    unsigned long long num = 600851475143;
    unsigned long p = 2;
    while(num % p == 0)
        num>>=1; //Primes are not even numbers - divide by 2 as long as you can; Gets rids of multiples of 2 as factors;
    p++; //what's left are odd factors, so start with 3 and do the same thing.
    while(num != 1)
    {
        if(num % p == 0)
        {
            num/=p;
        }
        else
             p+=2;
    } //The remaining factor is hence the biggest prime number
    cout<<"Prime: "<<p<<endl;
    return 0;
}
