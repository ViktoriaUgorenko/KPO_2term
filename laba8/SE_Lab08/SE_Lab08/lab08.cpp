#include <iostream>
using namespace std;


int defaultparm(int a, int b, int c, int d, int e, int f = 6, int g = 7)
{
	return (a + b + c + d + e + f + g) / 7;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	int result1 = defaultparm(5, 7, 1, 2, 4);
	int result2 = defaultparm(6, 1, 2, 10, 9, 3, 8);
	cout << "��������� ������ ������� � 5 �����������: " << result1 << endl;
	cout << "��������� ������ ������� � 7 �����������: " << result2 << endl;
}