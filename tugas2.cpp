#include<iostream>
#include<cmath>
using namespace std;

void menu() {
    cout << "Kalkulator Tugas 2, Menu: \n";
    cout << "1. Penjumlahan \n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Perpangkatan\n6. Integral Tentu\n\n";
    cout << "Masukkan angka sesuai dengan fungsi yang diinginkan : ";
}

int main() {
    int choice;
    double a, b;
    menu();
    cin >> choice;
    cout << endl;
    switch (choice) {
        case 1:
        cout << "#Penjumlahan (a+b)#\n";
        cout << "Masukkan nilai a: ";
        cin >> a;
        cout << "Masukkan nilai b: ";
        cin >> b;
        cout << "a + b = " << a+b;
        break;
        case 2:
        cout << "#Pengurangan (a-b)#\n";
        cout << "Masukkan nilai a: ";
        cin >> a;
        cout << "Masukkan nilai b: ";
        cin >> b;
        cout << "a - b = " << a-b;
        break;
        case 3:
        cout << "#Pembagian (a*b)#\n";
        cout << "Masukkan nilai a: ";
        cin >> a;
        cout << "Masukkan nilai b: ";
        cin >> b;
        cout << "a * b = " << a*b;
        break;
        case 4:
        cout << "#Pembagian (a/b)#\n";
        cout << "Masukkan nilai a: ";
        cin >> a;
        cout << "Masukkan nilai b: ";
        cin >> b;
        cout << "a / b = " << a/b;
        break;
        case 5:
        cout << "#Perpangkatan (a^(b))#\n";
        cout << "Masukkan nilai a: ";
        cin >> a;
        cout << "Masukkan nilai b: ";
        cin >> b;
        cout << "a^(b) = " << pow(a,b);
        break;       
    }
    return 0;
}
