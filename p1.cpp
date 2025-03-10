#include <iostream>
using namespace std;

float luas, panjang, lebar; //var global

void inputData(){
    cout << "masukan panjangnya:";
    cin >> panjang;

    cout << "masukan lebarnya:";
    cin >> lebar;
}

void prosedurLuas(){
    luas = panjang * lebar;
}


void tampilkanLuas(){
    cout << "luas persegi panjang:" << luas << endl;
}
int main(){
    inputData();
    prosedurLuas();
    tampilkanLuas();
}