#include <iostream>
using namespace std;

int main ()
{ //begin
   //numeric luas, panjang, lebar
   double luas;
   double panjang;
   double lebar; //declare var local

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