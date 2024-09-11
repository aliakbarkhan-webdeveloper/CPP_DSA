#include <iostream>
using namespace std;

// Combination with recursion --> O(n)
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return fact(n - 1) * n;
}

int ncr(int n, int r)
{
    int t1, t2, t3;
    t1 = fact(n);
    t2 = fact(r);
    t3 = fact(n - r);
    return t1 / (t2 * t3);
}

// we can also solve this by using Pascal triangle
// int ncr(int n, int r)
// {
//     if (r == 0 || n == r)
//     {
//         return 1;
//     }
//     else
//     {
//         return ncr(n - 1, r - 1) + ncr(n - 1, r);
//     }
// }

int main()
{
    cout << ncr(5, 3);
    return 0;
}
