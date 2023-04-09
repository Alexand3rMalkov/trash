#pragma once
#include <string>
using namespace std;

class Student {
public:
    int course = 1;
    int age = 18;
    int year = 2022;
    string name = "Vadim";
};

class Mathematic : public Student {
public:
    int math = 5;
    int phys = 4;
    int analitic_geom = 4;
    int high_math = 4;

    double check() {
    }

    double average_value() {
    }

};

class Mathematic_prog : public Mathematic {
public:
    int ch_age() {
        int ch = age + rand() % 21;
        return ch;
    }
    int choose_mark() {
    }

protected:
    double average_value() {
    }
};
