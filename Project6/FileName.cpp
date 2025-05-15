//ПРАКТИЧЕСКАЯ РАБОТА № 4 Базовые алгоритмические структуры. Цикл. Задание 1: программу нахождения значений функций y=sin(x) и y=cos(x) в диапазоне [Xнач...Хкон] с шагом step.
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	float xn, xk, step;
	double y;
	system("chcp 1251");
	system("cls");
	cout << "Введите начало диапазона xn = ";
	cin >> xn;
	cout << "Введите конец диапазона xk = ";
	cin >> xk;
	cout << "Введите шаг изменения step = ";
	cin >> step;
	while (xn <= xk) {
		y = sin(xn);
		xn += step;
		cout << "x = " << xn << " y = " << y << endl;
	}
	return 0;
}