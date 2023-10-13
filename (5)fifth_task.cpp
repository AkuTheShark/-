#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");

    long res = 0;

    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0 || i % 3 == 0)
        {
            res += i;
        }

    }
    cout << res << endl;

    return 0;
}