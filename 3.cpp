#include <iostream>
using namespace std;

void BinarySearch(int[], int, int);

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int x;
    cin >> x;
    BinarySearch(a, n, x);
    return 0;
}

void BinarySearch(int a[], int n, int x)
{
    int left = 0;
    int right = n - 1;
    int mid;

    int count = 1;
    int flag = 1;

    while (left <= right)
    {
        mid = (right + left) / 2;
        if (a[mid] == x)
        {
            cout << mid << endl;
            cout << count;
            flag = 0;
            break;
        }
        count++;
        if (a[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }
    if (flag == 1)
        cout << -1;
}