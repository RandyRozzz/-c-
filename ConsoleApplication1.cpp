#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");

	double a;
	double b;
	int op;

	cout << "Введите первое число: ";
	cin >> a;

	cout << "Введите первое число: ";
	cin >> b;

	cout << "Выберите операцию с этими числами (Сложение - 1, Вычитание - 2, Умножение - 3, Деление - 4): ";
	cin >> op;
	cout << "\n";

	switch (op)
	{

	case 1:
		cout << "Результат операции: " << a + b << endl;
		break;

	case 2:
		cout << "Результат операции: " << a - b << endl;
		break;

	case 3:
		cout << "Результат операции: " << a * b << endl;
		break;

	case 4:
		cout << "Результат операции: " << a / b << endl;
		break;

	default:
		cout << "Че это, бля пиши нормально" << endl;
		break;

	}


}


