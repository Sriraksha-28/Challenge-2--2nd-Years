#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{

    int a1 = 2, a2 = 7, a3 = 10, a4 = 11, a5 = 13, a6 = 4, a7 = 5;

    int arr[7] = {a1, a2, a3, a4, a5, a6, a7};

    int finalCount = 0;

    for (int i = 0; i < 7; i++)
    {
        int v = arr[i];
        int state = 0;

        if (v % 2 == 0)
            state = 1;
        else if (isPrime(v))
            state = 3;
        else
            state = 0;

        if (state == 3)
            finalCount++;
    }

    cout << finalCount;

    return 0;
}