#include <iostream>
using namespace std;

int main()
{
    long long res = 1;

    for (int i = 1; i <= 20; i++)
    {
        res *= i;
    }
    cout <<  res;

}