#include <iostream>

using namespace std;

void Nhap(int a[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << "a[" << i << "] : ";
		cin >> a[i];
	}
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
}


void Cap_Phat(int *&p, int n_cu, int n_moi)
{
	int* temp = p;
	p = new int[n_moi];

	if (n_cu <= n_moi)
	{
		for (int i = 0; i < n_cu; ++i)
		{
			p[i] = temp[i];
		}
	}
	delete[]temp;
}

void Them(int*& p, int& n, int x)
{
	Cap_Phat(p, n, n + 1);
	p[n] = x;
	++n;
}

int main()
{
	//int n;
	//int a[50];
	int n = 0;
	cout << "Nhap n : ";
	cin >> n;
	int* a = new int[n];
	Nhap(a, n);
	Xuat(a, n);
	Them(a, n, 100);
	cout << endl;
	Xuat(a, n);

	return 0;
}