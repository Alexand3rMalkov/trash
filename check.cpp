#include <iostream>
#include <vector>
using namespace std;
const int N = 5;
const int M = 6;

void fill_and_print(vector<vector<int>>& C) {
    // заполняем первую строку и первый столбец
    for (int i = 0; i < N; i++) {
        C[i][0] = 1;
    }
    for (int j = 0; j < M; j++) {
        C[0][j] = 1;
    }
    // заполняем остальные элементы согласно правилду
    for (int i = 1; i < N; i++) {
        for (int j = 1; j < M; j++) {
            C[i][j] = C[i - 1][j] + C[i][j - 1];
        }
    }
    // вывод
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> C(N, vector<int>(M));
    fill_and_print(C);
    return 0;
}
