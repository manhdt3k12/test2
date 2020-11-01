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

void cap_phat(int* &p, int n_cu, int n_moi)
{
	int* temp = p;

	p = new int[n_moi];

	for (int i = 0; i < n_cu; ++i)
	{
		p[i] = temp[i];
	}

	delete[]temp;
}

void them(int* &p, int &n, int vt, int x)
{
	cap_phat(p, n, n + 1);

	for (int i = n; i > vt; --i)
	{
		p[i] = p[i - 1];
	}
	p[vt] = x;
	++n;
}

void xoa(int* &p, int &n, int vt)
{
	do
	{
		cout << "Nhap vi tri muon xoa : ";
		cin >> vt;
	} while (vt < 0 || vt >= n);

	for (int i = vt; i < n - 1; ++i)
	{
		p[i] = p[i + 1];
	}
	--n;
	cap_phat(p, n, n);
}

void menu()
{

	int n = 0;
	int* a = new int[n];

	int lua_chon;
	do
	{
		system("cls");

		cout << "1. Nhap mang." << endl;
		cout << "2. Xuat mang." << endl;
		cout << "3. Them phan tu." << endl;
		cout << "4. Xoa phan tu trong mang." << endl;
		cout << "0. Thoat." << endl;	
		cout << "Lua chon cua ban la : ";
		cin >> lua_chon;
		switch (lua_chon)
		{
		case 1 :
		{
			int sl;
			cout << "Nhap so luong phan tu : ";
			cin >> sl;
			for (int i = 0; i < sl; ++i)
			{
				int x;
				cout << "Nhap gia tri thu " << i << " : ";
				cin >> x;
				them(a, n, n, x);
			}
			
			break;
		}
		case 2 :
		{
			xuat(a, n);
			system("pause");
			break;
		}
		case 3:
		{
			//them()
			break;
		}
		case 4:
		{
			nhap(a, n);
			break;
		}
		case 0:
		{
			break;
		}
		default :
		{
			cout << "Lua chon khong hop le" << endl;
			system("pause");
		}
		}
	} while (lua_chon != 0);
}

int main()
{
	menu();
	return 0;
}