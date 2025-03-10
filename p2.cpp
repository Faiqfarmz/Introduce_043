#include <iostream>
using namespace std;

float panjang, lebar; //var global

void inputdata(){
    cout << "masukkan panjangnya:";
    cin >> panjang;

    cout << "panjang lebarnya";
    cin >> lebar;
}

float fungsiluas(){
    return panjang * lebar;
}

float hitungluasBerparameter(float a, float b){
    return a * b;
}

void tampilkanFungsiLuas(){
    cout << "Luas persegi panjang (fungsi tidak berparameter): " << fungsiluas()<< endl; 
}

void tampilkanLuasBerprameter(){
    cout << "Luas persegi panjang (fungsi berparameter): " << hitungluasBerparameter(panjang, lebar);
}

int main()
{
    inputdata();
    tampilkanFungsiLuas();
    tampilkanLuasBerparameter();
}