#include <iostream>
#include <string>
using namespace std;

void BinarySearch(string[], int, string);

int main()
{
    int n;
    cin >> n;
    string a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    string x;
    cin >> x;
    BinarySearch(a, n, x);
    return 0;
}

void BinarySearch(string a[], int n, string x)
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