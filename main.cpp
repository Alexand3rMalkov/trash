#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

int main() {
    system("chcp 1251>NULL");
    Mathematic_prog student;
    cout << "Студент " << student.name << ", " << student.course << " курс" << endl;
    cout << "Возраст студента: " << student.age << endl;
    cout << "Год поступления: " << student.year << endl;
    cout << "Оценки студента по математике, физике, аналитической геометрии и высшей математике соответственно: ";
    cout << student.math << ", " << student.phys << ", " << student.analitic_geom << ", " << student.high_math << endl;

    // Вызов функций
    int new_age = student.ch_age();
    cout << "Новый возраст студента: " << new_age << endl;

}
