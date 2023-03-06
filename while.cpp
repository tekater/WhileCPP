#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	//cout << "Задание 1\n";
	//cout << "Введите цвет системы:\n1: Светло-Голубой\n2: Светло-Красный\n3: Светло-Жёлтый";
	/*int a;
	cin >> a;
	switch (a)
	{
	case 1:
	system("color B5");
	break;

	case 2:
	system("color C2");
	break;

	case 3:
	system("color E9");
	break;

	default:
	system("color F0");
	break;*/

	system("color B5");

	cout << "Задание 2\n";
	int step = 1;
	double num = 0;
	cout << "Введите число:\n";
	cin >> num;
	cout << "Введите степень числа:\n";
	cin >> step;
	int i = 1;
	switch (step)
	{
	case 0:
		num = 1;
		cout << "Результат: " << num;
		break;
	case 1:
		num = num;
		cout << "Результат: " << num;
		break;
	case 2:
		/*while (i <= step) {
			num = num * num;
			i++;
		}*/
		num = num * num;
		cout << "Результат: " << num;
		break;
	case 3:
		num = num * num * num;
		cout << "Результат: " << num;
		break;
	case 4:
		num = num * num * num * num;
		cout << "Результат: " << num;
		break;
	case 5:
		num = num * num * num * num * num;
		cout << "Результат: " << num;
		break;
	case 6:
		num = num * num * num * num * num * num;
		cout << "Результат: " << num;
		break;
	case 7:
		num = num * num * num * num * num * num * num;
		cout << "Результат: " << num;
		break;
	default:
		cout << "\nПроизошла ошибка";
		break;
	}
	// Часть 2

	cout << "\n\nЗадание 1\n";
	int r = 0;
	int s;
	cout << "Введите число:\n";
	cin >> s;
	while (r <= s) {
		cout << r << " ";
		r++;
	}
	
	cout << "\n\nЗадание 2\n";
	int g1, g2;
	cout << "Введите первую границу (от):\n";
	cin >> g1;
	cout << "Введите вторую границу (до):\n";
	cin >> g2;
	int a2;
	cout << "Введите вариант:\n1-Вывести всё чётные числа из диапозона\n2-Вывести все нечётные числа из диапозона\n3-Вывести все числа кратные семи\n";
	cin >> a2;
	switch (a2)
	{
	case 1:
		while (g1 <= g2) {
			if ((g1 % 2) == 0) {
				cout << g1;
			}
			else {
				cout << " ";
			}
			g1++;
		}
		break;
	case 2:
		while (g1 <= g2) {
			if ((g1 % 2) == 1) {
				cout << g1;
			}
			else {
				cout << " ";
			}
			g1++;
		}
		break;
	case 3:
		while (g1 <= g2) {
			if ((g1 % 7) == 0) {
				cout << g1 << " ";
			}
			else {
				cout << "";
			}
			g1++;
		}
		break;
	default:
		cout << "Произошла ошибка.";
	}

	cout << "\n\nЗадание 3\n";
	int g3, g4;
	cout << "Введите первую границу (от):\n";
	cin >> g3;
	cout << "Введите вторую границу (до):\n";
	cin >> g4;
	int G = g3;
	while (g3 <= g4) {
		cout << g3 << " ";
		g3++;
		G++;
	}
	cout << "\nВ итоге: " << G;
}
