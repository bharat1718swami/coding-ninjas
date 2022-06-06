#include <iostream>

using namespace std;

bool check(int a[], int n)
{
    if (n == 0 || n == 1)
        return true;

    if (a[0] > a[1])
        return false;

    return check(a + 1, n - 1);
}
int main()
{
    int n;
    int *a = new int[n];

    cout << "enter size of array\n";
    cin >> n;

    cout << "enter number\n";

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << check(a, n);

    delete []a;

    return 0;
}