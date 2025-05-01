#include <iostream>
using namespace std;
float luas(float a,float b){
    return a*b/2;
}
float keliling(float d,float e, float f){
    return d+e+f;
}

int main(){
    float Alas,Tinggi,sisi1,sisi2,sisi3;
    int pilihan;
    do{
    cout << "======= MENU =======" << endl;
    cout  << "1. Hitung Luas Segitiga" << endl;
    cout << "2. Hitung Keliling Segitiga" << endl;
    cout << "3. Keluar" << endl;
    cout << "Masukan Pilihan :" ;
    cin >> pilihan;  
    switch (pilihan){
        case 1:
        cout << "Menghitung Luas Segitiga" << endl;
        cout << "Masukan Alas =";
        cin >> Alas;
        cout << "Masukan Tinggi=";
        cin >> Tinggi;
        cout << "Luas Segitiga =" << luas(Alas,Tinggi) << endl;
        break;

        case 2:
        cout << "Menghitung Keliling Segitiga" << endl;
        cout << "Masukkan panjang sisi pertama: ";
        cin >> sisi1;
        cout << "Masukkan panjang sisi kedua: ";
        cin >> sisi2;
        cout << "Masukkan panjang sisi ketiga: ";
        cin >> sisi3;
        cout << "keliling segitiga=" << keliling(sisi1,sisi2,sisi3) << endl;
        break;

        case 3:
        cout << "Program Telah berhenti" << endl;
        return 0;

    }
    }while(pilihan);
}
