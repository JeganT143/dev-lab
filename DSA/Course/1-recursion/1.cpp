#include <iostream>
using namespace std;

void fun(int n)
{
    if (n == 0)
    {
        cout << endl;
    }

    if (n > 0)
    {
        cout << n << " ";
        fun(n - 1);
        cout << n << " ";
    }
}

int main()
{
    int n = 5;
    fun(n);
    return 0;
}