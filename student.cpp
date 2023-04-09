#include <iostream>
#include <stdio.h>
#include <string>
#include "Student.h"

using namespace std;

int course = 1;
int age = 18;
int year = 2022;
string name = "Vadim";

double average_value(int math, int analitic_geom, int phys, int high_math) {
    double av_value = (math + analitic_geom + phys + high_math) / 4;
    return av_value;
}

double check(int math, int analitic_geom, int phys, int high_math) {
    if (average_value(math, analitic_geom, phys, high_math) < 3) cout << "Здравствуй небо в облаках, здравствуй юность в сапогах..." << endl;
    else cout << "Ура, я умный!" << endl;
    return average_value(math, analitic_geom, phys, high_math);
}

int ch_age(int age) {
    int ch = age + rand() % 21;
    return ch;
}

int choose_mark(int math, int analitic_geom, int phys, int high_math) {
    cout << "Введите новые оценки по предметам: " << endl;
    int mark1;
    int mark2;
    int mark3;
    int mark4;

    cin >> mark1 >> mark2 >> mark3 >> mark4;

    math = mark1;
    phys = mark2;
    analitic_geom = mark3;
    high_math = mark4;
    return 0;
}
