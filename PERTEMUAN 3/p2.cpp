#include <iostream>
using namespace std;

float panjang, lebar; //var global

void inputData(){
    cout << "masukan panjangnya:";
    cin >> panjang;

    cout << "masukan lebarnya:";
    cin >> lebar;
}

float fungsiLuas(){
    return panjang * lebar;
}

float hitungLuasBerparameter(float a, float b){
    return a * b;
}

void tampilkanFungsiLuas(){
    cout << "luas persegi panjang (fungsi tidak berparameter): " << fungsiLuas()<< endl;
}

void tampilkanLuasBerparameter(){
    cout << "luas persegi panjang (fungsi berparameter): " << hitungLuasBerparameter(panjang, lebar);
}

int main(){
    inputData();
    tampilkanFungsiLuas();
    tampilkanLuasBerparameter();