#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

class Student {
public:
	int course = 1;
	int age = 18;
	int year = 2022;
	string name = "Vadim";
};

class Mathematic: public Student {
public:
	double average_value(int math, int phys, int analitic_geom, int high_math) {
		double av_value = (math + analitic_geom + phys + high_math) / 4;
		return av_value;
	}
protected:
	int math = 5;
	int phys = 4;
	int analitic_geom = 4;
	int high_math = 4;
	double check(int math, int phys, int analitic_geom, int high_math) {
		if (average_value(math, phys, analitic_geom, high_math) < 3) cout << "Здравствуй небо в облаках, здравствуй юность в сапогах..." << endl;
		else cout << "Ура, я умный!" << endl;
	}
};

class Mathematic_prog : protected Mathematic {
private:
	int choose_mark(int math, int phys, int analitic_geom, int high_math) {
		cout << "Введите оценки по предметам: "
	}
};

 int main() {
	 system("chcp 1251>NULL");

 }
