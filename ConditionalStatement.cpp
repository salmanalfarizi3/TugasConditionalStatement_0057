#include <iostream>
#include <string>
using namespace std;

// 1. Prosedur untuk masukan data (menggunakan pass-by-reference)
void inputData(float &berat, float &tinggi) {
    cout << "Masukkan berat badan (kg): ";
    cin >> berat;
    cout << "Masukkan tinggi badan (meter): ";
    cin >> tinggi;
}
