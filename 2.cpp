#include <iostream>
using namespace std;

bool kt(int[], int, int);
void Search(int[], int, int);

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
        cout << 0;
    else
        Search(a, n, x);
    return 0;
}

bool kt(int a[], int n, int x)
{
    for (int i = 0; i < n; i++)
        if (a[i] == x)
            return true;
    return false;
}

void Search(int a[], int n, int x)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
        if (a[i] == x)
            dem++;
    cout << dem << endl;
    int loop = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            cout << i << " ";
            cout << loop << endl;
        }
        loop++;
    }
}