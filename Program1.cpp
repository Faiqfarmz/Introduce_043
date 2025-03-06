#include <iostream>
using namespace std;

float luas, panjang, lebar; //var global

void inputdata(){
    cout << "masukkan lebarnya:";
    cin >> lebar;

    cout <<"masukkan lebarnya:";
    cin >> lebar;
}

float hitunglah(){
    luas = panjang * lebar;
    return luas;
}

float hitunglahluasBerapameter(float a, float b){
    luas = a * b;
    return luas;
}

void tampilkanLuas()
{
    cout << "luas persehgi panjang" << luas << endl;
}

int main()
{
    inputdata();
    // hitungluas();
    hitungLuasBerapameter(panjang,lebar);
    tampilkanLuas();
}