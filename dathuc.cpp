#include <stdio.h>
#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>;
#include<iostream>

typedef struct dathuc DT;
struct dathuc
{
	int bac;
	double *heso;
};
std::istream& operator >> (std::istream &is, DT *x)
{
	do
	{
		std::cout << "\nNhap so bac cua da thuc: ";
		is >> x->bac;
		if (x->bac < 1)
			std::cout << "\nSo bac cua da thuc khong hop le.\n";
	} while (x->bac < 1);
	std::cout << "\nNhap cac he so (a0 -> an):\n";
	x->heso = new double[x->bac + 1];
	for (int i = 0; i <= x->bac; ++i)
	{
		std::cout << "\nHe so a" << i << ": ";
		is >> x->heso[i];
	}
	return is;
}
std::ostream& operator << (std::ostream &os, DT *x)
{
	int count = 0;
	os << x->heso[0];
	x->heso[1] < 0 ? os << " - " << x->heso[1] * -1 << " * x" : os << " + " << x->heso[1] << " * x";
	for (int i = 2; i <= x->bac; ++i, ++count)
	{
		x->heso[i] < 0 ? os << " - " << x->heso[i] * -1 << " * x^" << i : os << " + " << x->heso[i] << " * x^" << i;
	}
	os << std::endl;
	return os;
}
DT* Tong2DaThuc(DT *x, DT *y)
{
	int Max = x->bac > y->bac ? x->bac : y->bac;
	int Min = x->bac < y->bac ? x->bac : y->bac;
	DT *kq = new DT;
	kq->bac = Max;
	kq->heso = new double[kq->bac + 1];
	for (int i = 0; i <= Min; ++i)
	{
		kq->heso[i] = x->heso[i] + y->heso[i];
	}
	if (Max == x->bac)
	{
		for (int i = Min + 1; i <= Max; ++i)
		{
			kq->heso[i] = x->heso[i];
		}
	}
	else
	{
		for (int i = Min + 1; i <= Max; ++i)
		{
			kq->heso[i] = y->heso[i];
		}
	}
	return kq;
}
DT* Hieu2DaThuc(DT *x, DT *y)
{
	int Max = x->bac > y->bac ? x->bac : y->bac;
	int Min = x->bac < y->bac ? x->bac : y->bac;
	DT *kq = new DT;
	kq->bac = Max;
	kq->heso = new double[kq->bac + 1];
	for (int i = 0; i <= Min; ++i)
	{
		kq->heso[i] = x->heso[i] - y->heso[i];
	}
	if (Max == x->bac)
	{
		for (int i = Min + 1; i <= Max; ++i)
		{
			kq->heso[i] = x->heso[i];
		}
	}
	else
	{
		for (int i = Min + 1; i <= Max; ++i)
		{
			kq->heso[i] = 0 - y->heso[i];
		}
	}
	return kq;
}
int main()
{
	DT *x = new DT;
	std::cout << "\n\t------------ NHAP DA THUC 1 ------------\t\n";
	std::cin >> x;
	std::cout << x;
	DT *y = new DT;
	std::cout << "\n\t------------ NHAP DA THUC 2 ------------\t\n";
	std::cin >> y;
	std::cout << y;
	std::cout << "\n\t----------------------------------------\t\n";
	std::cout << "\nTong 2 da thuc tren: " << Tong2DaThuc(x, y) << std::endl;
	std::cout << "\nHieu 2 da thuc tren: " << Hieu2DaThuc(x, y) << std::endl;
	delete x;
	delete y;
	system("pause");
	return 0;
}
