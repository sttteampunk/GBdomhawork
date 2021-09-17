
#include <iostream>
using namespace std;

double hhss[8];

void efstahie(int* x, const int v)
{
	for (int z = 0; z < v; z++)
		if (x[z]) x[z] = 0;
		else x[z] = 1;
}

void obzac()
{
	setlocale(LC_ALL, "Rus");
	cout << "\n\n//================================задание================================//\n\n";
}

bool PrintPizdc(double hhss[], int size)
{
	if (hhss == nullptr || size == 0)
		return false;

	for (size_t a = 0; a < size; a++)

		cout << a << " : " << hhss[a] << " ";

	return true;
	cout << endl;
}

void zamena(int* a, const int n)
{
	for (int i = 0; i < n; i++)
		if (a[i]) a[i] = 0; else a[i] = 1;
}

void vivod(int* a, const int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << "\n";
}

void shiftRight(int array[], int size)
{
	int temp = array[0];
	int temp1 = array[size - 1];

	for (int i = 1; i < size; i++)
	{
		array[0] = array[i];
		array[i] = temp;
		temp = array[0];
	}
	array[0] = temp1;
}

bool Checkmother(int* mass, int size) {
	setlocale(LC_ALL, "Rus");
	int sieg;
	int heil;
	for (int i = 0; i < size; i++) {
		sieg = 0;
		heil = 0;
		int m1;

		for (m1 = 0; m1 < i; m1++) {
			sieg += mass[m1];
		}

		for (int m2 = m1; m2 < size; m2++) {
			heil += mass[m2];
		}

		if (sieg == heil) {
			cout << "место найдено" << endl;
			return true;
		}

	}

	cout << "место не найдено" << endl;
	return false;
}

int main()
{
	obzac();
	PrintPizdc(hhss, 8);

	obzac();
	const int n = 10;

	int a[n] = { 1, 0, 1, 0, 1, 0, 1, 1, 0, 1 };

	vivod(a, n);
	zamena(a, n);
	vivod(a, n);

	obzac();
	{
		int array[8];
		array[0] = 1;
		for (int i = 1; i < 8; i++) {
			array[i] = array[i - 1] + 3;
		}
		vivod(array, 8);
	}

	obzac();
	{
		int array[8];
		array[0] = 1;
		for (int i = 1; i < 8; i++) {
			array[i] = array[i - 1] + 3;

		}
		vivod(array, 8);
		shiftRight(array, 8);
		vivod(array, 8);
	}

	obzac();
	{
		int array[8];
		array[0] = 1;
		for (int i = 1; i < 8; i++) {
			array[i] = array[i - 1] + 3;

		}
		vivod(array, 8);
		Checkmother(array, 8);
	}

	return 0;
}