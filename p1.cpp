#include <iostream>
using namespace std;

float luas, panjang, lebar;

void InputData(){
    cout << "Masukkan panjangnya";
    cin >> panjang;

    cout << "Masukkan lebarnya";
    cin >> lebar;

}

void ProsedurLuas(){
    luas = panjang * lebar;
}

void tampilkanLuas(){
    cout << "Luas persegi panjang" << luas << endl;
}

int main()
{
    InputData();
    ProsedurLuas();
    tampilkanLuas();
}