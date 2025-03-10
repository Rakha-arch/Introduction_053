#include <iostream>
using namespace std;

float hitungRerata(int x, int y){
    return (x+y)/2;
}

string statusKelulusan(float a){
    if (a >= 75)
        return "lulus";
    else
        return "gagal";
}
int main(){ //begin
    //numeric nilai1, nilai2, rerata;
    int nilai1, nilai2;
    float rerata;
    // character status
    string status;
    // display "masukan nilai pertama: "
    cout << "masukan nilai pertama: ";
    // accept nilai1
    cin >> nilai1;
    // display "masukan nilai kedua: "
    cout << "masukan nilai kedua: ";
    // accept nilai2
    cin >> nilai2;
    // rerata = (nilai1+nilai2)/2;
    // if (rerata >= 75)
    //     status = "lulus"
    // else
    //     status = "gagal"
    // display "status kelulusan =" + status
    cout << "status kelulusan: " << statusKelulusan(hitungRerata(nilai1, nilai2))
;}
