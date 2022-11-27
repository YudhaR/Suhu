#include <iostream>

using namespace std;

int main()
{

/*
    Program Konversi Suhu
    Ket : Program Untuk Mengkonversi Suhu Dari Celcius, Reamur, Fahrenheit dan Kelvin
    By  : Yudha Rizqia Grafer
    Tgl : 28 September 2022

*/

    //Kamus
    float celcius, reamur, fahrenheit, kelvin;

    //Algoritma

    cout <<"*************************"<<endl;
    cout <<"* Program Konversi Suhu *"<<endl;
    cout <<"*************************"<<endl;

    cout << "Masukan Suhu Celcius : ";
    cin >> celcius;
    cout << "*************************" <<endl;

    reamur = celcius * 4 / 5 ;
    fahrenheit =  (celcius * 9 / 5) + 32 ;
    kelvin = celcius + 273;

    cout << "Suhu Reamur     : " << reamur << endl;
    cout << "Suhu Fahrenheit : " << fahrenheit << endl;
    cout << "Suhu Kelvin     : " << kelvin << endl;

    return 0;
}
