//Smallest positive number divisible by all numbers from 1 to 20;

#include <iostream>
using namespace std;

int main()
{
    uint num = 40;
    do
    {
        bool u = true;
        for(int i = 11; i<=20; i++)
        {
            if(num % i != 0)
            {
                u = false;
                break;
            }
        }
        if(u)
        {
            cout << num << endl;
            return 0;
        }
        num+=20;
    } while (true);
    return 1;
}