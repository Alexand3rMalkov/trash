#include <iostream>
#include <cmath>
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
	void printSides() {
		cout << "Длины сторон треугольника" << a << ", " << b << ", " << c << endl;
	}
	int Perimeter() {
		return a + b + c;
	}
	//метод для расчета площади треугольника по формуле Герона
	double Area() {
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
	bool valid() {
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