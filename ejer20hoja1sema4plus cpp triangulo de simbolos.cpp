/*
ejercciios 1 de la hoja 3 repetitivas
*/
#include<iostream>
#include<stdlib.h>
#include<math.h>
#include <conio.h>
using namespace std;

int ingresenumero()
{
	int n;
	cout << "ingrese numero"; cin >> n;
	while (n <= 0 || n >= 10)
	{
		cout << "ingrese numero"; cin >> n;
	}
	return n;
}
void figura(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 40 - i * 3; j >= 1; j--)
			cout << " ";
		for (int k = 1; k <= i; k++)
			cout << " " << k << " ";
		for (int l = i - 1; l >= 1; l--)
			cout << " " << l << " ";
		cout << endl;
	}
}

int main()
{

	int m = ingresenumero();
	figura(m);
	_getch();
}
