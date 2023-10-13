#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");

    cout << "Введите число: \n";
    int u_num1;
    cin >> u_num1;

    for (int i = 1; i < u_num1; i++) 
    {
        if (u_num1 % i == 0) 
        {
            cout << i << endl;
        }
    }

    return 0;
}
