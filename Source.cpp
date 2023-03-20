#include <iostream>
#include <cmath>
using namespace std;

class Triangle {
private:
	int a, b, c; //���� ��� ���� ������
public:
	//����������� � ��������� ������� ������
	Triangle(int a, int b, int c) {
		this->a = a;
		this->b = b;
		this->c = c;
	}
	//������ �� ������ ���� ������
	void printSides() {
		cout << "����� ������ ������������" << a << ", " << b << ", " << c << endl;
	}
	int Perimeter() {
		return a + b + c;
	}
	//����� ��� ������� ������� ������������ �� ������� ������
	double Area() {
		double p = (a + b + c) / 2.0; //
		return sqrt(p * (p - a) * (p - b) * (p - c)); //������� ������
	}
	//�������� ��� ���������/��������� ���� ������ ������������
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

	//�������� ��� �������� ������������� ������������
	bool valid() {
		return (a + b > c && a + c > b && b + c > a);
	}

	// ���������� ��� ��������� � ����� �� �������
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

	// ���������� �������� ++ (���������� � �����������)
	Triangle& operator++() { // ���������� �����
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

	// ���������� �������� -- (���������� � �����������)
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
	// ���������� �������� true � false
	operator bool() const {
		return valid();
	}

	// ���������� �������� *
	Triangle operator*(int scalar) {
		return Triangle(a * scalar, b * scalar, c * scalar);
	}
};