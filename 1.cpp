#include <iostream>
using namespace std;

bool kt(int[], int, int);
void Start(int[], int, int);

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    if (!kt(a, n, x))
        cout << -1;
    else
        Start(a, n, x);
    return 0;
}

bool kt(int a[], int n, int x)
{
    for (int i = 0; i < n; i++)
        if (a[i] == x)
            return true;
    return false;
}

void Start(int a[], int n, int x)
{
    int dem1 = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            cout << i << endl;
            cout << dem1 << endl;
            break;
        }
        dem1++;
    }

    int dem2 = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == x)
        {
            cout << dem2 - 1 << endl;
            cout << dem2;
            break;
        }
        dem2++;
    }
}