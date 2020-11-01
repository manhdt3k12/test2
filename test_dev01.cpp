#include <iostream>

using namespace std;

void nhap(int a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << "a[" << i << "] : ";
        cin >> a[i];
    }
}

void xuat(int a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
}

int main()
{

    return 0;
}