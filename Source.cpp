#include <iostream>
#include <cmath>
#include <stdio.h>;
using namespace std;

class Triangle {
private:
	int a, b, c; //поля для длин сторон
public:
	//конструктор с заданными длинами сторон
	Triangle(int a, int b, int c) {
		this->a = a;
		this->b = b;
		this->c = c;
	}
	//методы ля вывода длин сторон
	void printA() {
		cout << "a = " << a << endl;
	}
	void printB() {
		cout << "b = " << b << endl;
	}
	void printC() {
		cout << "c = " << c << endl;
	}

	int perimeter() {
		return a + b + c;
	}
	//метод для расчета площади треугольника по формуле Герона
	double area() {
		double p = (a + b + c) / 2.0; //
		return sqrt(p * (p - a) * (p - b) * (p - c)); //формула Герона
	}
	//свойства для получения/установки длин сторон треугольника
	int getA() {
		return a;
	}
	void setA(int value) {
		a = value;
	}

	int getB() {
		return b;
	}
	void setB(int value) {
		b = value;
	}

	int getC() {
		return c;
	}
	void setC(int value) {
		c = value;
	}

	//свойство для проверки существования треугольника
	bool valid() const {
		return (a + b > c && a + c > b && b + c > a);
	}

	// индексатор для обращения к полям по индексу
	int& operator[](int index) {
		switch (index) {
		case 0:
			return a;
			break;
		case 1:
			return b;
			break;
		case 2:
			return c;
			break;
		}
	}

	// перегрузка операции ++ (префиксная и постфиксная)
	Triangle& operator++() { // префиксная форма
		++a;
		++b;
		++c;
		return *this;
	}
	Triangle operator++(int) {
		Triangle temp(*this);
		++(*this);
		return temp;
	}

	// перегрузка операции -- (префиксная и постфиксная)
	Triangle& operator--() {
		--a;
		--b;
		--c;
		return *this;
	}
	Triangle operator--(int) {
		Triangle temp(*this);
		--(*this);
		return temp;
	}
	// перегрузка констант true и false
	operator bool() const {
		return valid();
	}

	// перегрузка операции *
	Triangle operator*(int scalar) {
		return Triangle(a * scalar, b * scalar, c * scalar);
	}
};
int main() {
	system("chcp 1251>NULL");
	int a, b, c;
	cout << "Введите длины сторон: " << endl;
	cout << "Сторона a: ";
	cin >> a;
	cout << "Сторона b: ";
	cin >> b;
	cout << "Сторона c: ";
	cin >> c;
	Triangle t(a, b, c); //треугольник с длинами сторон, созданный пользователем
	//выводим длины на экран
	t.printA();
	t.printB();
	t.printC();

	cout << "Периметр = " << t.perimeter() << endl;
	cout << "Площадь = " << t.area() << endl;

	//проверяем на существование треугольника
	if (t) {
		cout << "Треугольник существует." << endl;
	}
	else { cout << "Треугольник не существует." << endl; }

	//обращаемся к полям по индексу
	cout << "t[0] = " << t[0] << endl;
	cout << "t[1] = " << t[1] << endl;
	cout << "t[2] = " << t[2] << endl;
	++t;
	cout << "Новые значения " << endl;
	t.printA();
	t.printB();
	t.printC();
	--t;
	cout << "Новые значения " << endl;
	t.printA();
	t.printB();
	t.printC();
	Triangle z = t * 2;
	cout << "Новые значения " << endl;
	z.printA();
	z.printB();
	z.printC();
}
