#include <iostream>
using namespace std;

struct LinearSort
{
    int Index;
    int Count;
};
typedef struct LinearSort SORT;

SORT Linear_Start(int a[], int n, int x);
// int Linear_StartCount(int a[], int n, int x);
SORT Linear_End(int a[], int n, int x);
// int Linear_EndCount(int a[], int n, int x);

int main()
{
    int n;
    cin >> n;
    int a[1000];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int x;
    cin >> x;

    SORT temp1 = Linear_Start(a, n, x);
    SORT temp2 = Linear_End(a, n, x);
    if (temp1.Count == n)
        cout << -1;
    else
        cout << temp1.Index << endl
             << temp1.Count << endl
             << temp2.Index << endl
             << temp2.Count << endl;
    return 0;
}

SORT Linear_Start(int a[], int n, int x)
{
    SORT temp;
    temp.Count = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            temp.Index = i;
            return temp;
        }
        temp.Count++;
    }
    return temp;
}

SORT Linear_End(int a[], int n, int x)
{
    SORT temp;
    temp.Count = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == x)
        {
            temp.Index = i;
            return temp;
        }
        temp.Count++;
    }
    return temp;
}

/*int Linear_EndCount(int a[], int n, int x)
{
    int dem = 1;
    for (int i = n - 1; i >= 0; i++)
    {
        if (a[i] == x)
            return dem;
        dem++;
    }
    return -1;
}

int Linear_StartCount(int a[], int n, int x)
{
    int dem = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
            return dem;
        dem++;
    }
    return -1;
}*/