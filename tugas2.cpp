// tugas 2 : program beberapa jenis perhitungan

#include<iostream>
using namespace std;

double pangkat(double k, int l) {
    double c = 1;
    if (l != 0) {
        for (int j = 0; j < l; j++) {
            c = c * k;
        }
        return c;
    }
    else {
        return 1;
    }
}

void menu() {
    cout << "Kalkulator Tugas 2, Menu: \n";
    cout << "1. Penjumlahan \n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Perpangkatan\n6. Integral Tentu\n\n";
    cout << "Masukkan angka sesuai dengan fungsi yang diinginkan : ";
}

int main() {
    int choice, x;
    double a, b, atas, bawah, div, i, koef, sum, sumint;
    menu();
    cin >> choice;
    cout << endl;
    switch (choice) {
        case 1:
        cout << "===Penjumlahan (a+b)===\n";
        cout << "Masukkan nilai a: ";
        cin >> a;
        cout << "Masukkan nilai b: ";
        cin >> b;
        cout << "a + b = " << a+b;
        break;

        case 2:
        cout << "===Pengurangan (a-b)===\n";
        cout << "Masukkan nilai a: ";
        cin >> a;
        cout << "Masukkan nilai b: ";
        cin >> b;
        cout << "a - b = " << a-b;
        break;

        case 3:
        cout << "===Pembagian (a*b)===\n";
        cout << "Masukkan nilai a: ";
        cin >> a;
        cout << "Masukkan nilai b: ";
        cin >> b;
        cout << "a * b = " << a*b;
        break;

        case 4:
        cout << "===Pembagian (a/b)===\n";
        cout << "Masukkan nilai a: ";
        cin >> a;
        cout << "Masukkan nilai b: ";
        cin >> b;
        cout << "a / b = " << a/b;
        break;

        case 5:
        cout << "===Perpangkatan (a^(b))===\n";
        cout << "Masukkan nilai a: ";
        cin >> a;
        cout << "Masukkan nilai b: ";
        cin >> b;
        cout << "a^(b) = " << pangkat(a,b);
        break;

        case 6:
        cout << "===Integral Tentu dari fungsi (ax^n + bx^(n-1) + ... + konstanta)===\n";
        cout << "berapa suku tertinggi dari fungsi yang ingin di integralkan : ";
        cin >> x;
        double integral[x+1];
        for (int i = 0; i < x+1; i++) {
            cout << "masukkan koefisien suku dengan pangkat " << i << " : ";
            cin >> koef;
            integral[i] = (koef);
        }
        cout << "Masukkan batas bawah dari integral : ";
        cin >> bawah;
        cout << "Masukkan batas atas dari integral : ";
        cin >> atas;
        div = 0.01;
        sum = 0;
        a = bawah;
        b = bawah + div;
        while (b <= atas) {
            sumint = 0;
            for (int i = 0; i < x+1; i++) {
                sumint = sumint + integral[i]*(pow(a,i)+pow(b,i));
            }
            sum = sum + sumint*div*(0.5);
            a = a + div;
            b = b + div;   
        }
        cout << sum;
        break;
    }
    return 0;
}
