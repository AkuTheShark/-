#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");

    
    int s_point = 1;
    int e_point = 30;
    int res;
    
    for (int i = s_point; i <= e_point; i++) 
    {
        if (i % 2 == 0)
        {
            cout << "Четные числа от 1 до 30: " << endl;
            cout << i << endl;
        }

        /*else 
        {
            cout << "Нечетные числа от 1 до 30: " << endl;
            cout << i << endl;
        }*/
    }

    for (int i = s_point; i <= e_point; i++)
    {
        if (i % 2 != 0)
        {
            cout << "Нечетные числа от 1 до 30: " << endl;
            cout << i << endl;
        }

    }

    return 0;
}
