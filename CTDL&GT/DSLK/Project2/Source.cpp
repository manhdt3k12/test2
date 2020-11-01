#include <iostream>

using namespace std;

class node
{
public:
	int data;
	node* pnext;

	node(int data)
	{
		this->data = data;
		this->pnext = NULL;
	}
};

class list
{
public:
	node* phead = NULL;
	node* ptail = NULL;

	void xuat()
	{
		for (node* k = phead; k != NULL; k = k->pnext)
		{
			cout << k->data << " ";
		}
	}

	void them_cuoi()
	{
		int data;
		cout << "Nhap data : ";
		cin >> data;
		node* p = new node(data);

		if (phead == NULL)
		{
			phead = ptail = p;
		}
		else
		{
			ptail->pnext = p;
			ptail = p;
		}
	}
	void them_dau()
	{
		int data;
		cout << "Nhap data : ";
		cin >> data;
		node* p = new node(data);

		if (phead == NULL)
		{
			phead = ptail = p;
		}
		else
		{
			p->pnext = phead;
			phead = p;
		}
	}
};

int main()
{
	list l;
	for (int i = 0; i < 5; ++i)
	{
		l.them_dau();
	}

	l.xuat();

	return 0;
}