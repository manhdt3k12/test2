#include <iostream>

using namespace std;

class NODE
{
public:
	int data;
	NODE* pnext;
	NODE(int data)
	{
		this->data = data;
		pnext = NULL;
	}
};

class LIST
{
public:
	NODE* phead = NULL;
	//NODE* ptail = NULL;

	void Xuat()
	{
		for (NODE* k = phead; k != NULL; k = k->pnext)
		{
			cout << k->data << " ";
		}
	}

	void Them_Cuoi()
	{
		int data;
		cout << "Nhap data : ";
		cin >> data;
		NODE* p = new NODE(data);

		if (phead == NULL)
		{
			phead = p;
		}
		else
		{
			for (NODE* k = phead; k != NULL; k = k->pnext)
			{
				if (k->pnext == NULL)
				{
					k->pnext = p;
					p->pnext = NULL;
				}
			}
		}
	}

	//void Them_Dau()
	//{
	//	int data;
	//	cout << "Nhap data : ";
	//	cin >> data;
	//	NODE* p = new NODE(data);

	//	if (phead == NULL)
	//	{
	//		phead = ptail = p;
	//	}
	//	else
	//	{
	//		p->pnext = phead;
	//		phead = p;
	//	}
	//}
};

int main()
{
	LIST l;
	for (int i = 0; i < 5; ++i)
	{
		l.Them_Cuoi();
	}

	l.Xuat();

	return 0;
}