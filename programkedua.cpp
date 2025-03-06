#include <iostream>
using namespace std;

float luas, panjang, lebar; //var global

void inputdata () {
     //display "masukan panjangnya;"
   cout << "masukan panjangnya :";
   //accept panjang
   cin >> panjang ;
   cout << "masukan lebarnya:";
   //accept lebar
   cin >> lebar;

   //compute luas = panjang *lebar
   luas = panjang * lebar;

   //display 'luas persegi panjang', luas
   cout <<"luas persegi panjang;" << luas << endl;
}

float hitungluas () {
    luas = panjang * lebar;
    return luas;
}
//parameter
float hitungLuasberparameter(float a, float b){
   luas = panjang * lebar;
   return luas;
}
//prosedur
void tampilkanluas(){
    cout << "luas persegi panjang" << luas << endl;
}

int main ()
{ 
    inputdata();
    hitungluas();
    tampilkanluas();

}
