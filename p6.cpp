// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
//(absolute difference)

#include <iostream>

using namespace std;

int main()
{
    char n = 100;
    ulong sumsq =  n * (n+1) * (2*n + 1) / 6;
    ulong sqsum = (n*(n+1) / 2) * (n*(n+1) / 2);

    cout<< sqsum-sumsq << endl;
    return 0;
}