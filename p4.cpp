// Find the largest palindromic number that is a product of two 3-digit numbers

#include <iostream>

using namespace std;

bool productChecker (uint num)
{
    for(int i = 999; i>=100; i--)
        {
            for(int j = 999; j>=100; j--)
            {           
                if(i*j == num)
                {
                    cout<<i<<" * "<<j<<endl;
                    return true;
                }
             }
        }
    return false;
}

int main()
{
    ushort i = 997;
    uint num;
    while (i>100)
    {
        ushort j = i/100 + (i%100)-(i%10) + (i%10)*100;
        num = i*1000 + j;
        cout<<num<<endl;
        if (productChecker(num))
            break;
        i--;
    }
    cout<<"KONEC \n"<<num<<endl;
    return 0;
}
