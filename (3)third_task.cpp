#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");

    long res = 0;

    for (int i = 1; i <= 200; i++) 
    {
        res += i;
     
    }
    cout << res << endl;

    return 0;
}
