// tugas 2 : program beberapa jenis perhitungan
// program yang menghitung beberapa jenis operasi

#include<iostream>
using namespace std;

// mendeklarasikan fungsi pangkat yang akan dipakai nanti
double pangkat(double k, int l) {
    double c = 1;
    if (l != 0) {
        for (int j = 0; j < l; j++) {
            c = c * k; // perkalian dengan k yang berulang
        }
        return c;
    }
    else {
        return 1;
    }
}

// fungsi untuk mengeluarkan menu
void menu() {
    cout << "Kalkulator Tugas 2, Menu: \n";
    cout << "1. Penjumlahan \n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Perpangkatan\n6. Integral Tentu\n\n";
    cout << "Masukkan angka sesuai dengan fungsi yang diinginkan : ";
}

int main() {
    // mendeklarasikan variabel yang akan dipakai pada program
    int choice, x;
    double a, b, atas, bawah, div, i, koef, sum, sumint;

    // memunculkan menu
    menu();

    // mengambil input untuk operasi kalkulator yang diinginkan
    cin >> choice;
    cout << endl;

    // switch untuk kasus kasus yang mungkin
    switch (choice) {
        case 1: // penjumlahan
        cout << "===Penjumlahan (a+b)===\n";
        cout << "Masukkan nilai a: ";
        cin >> a;
        cout << "Masukkan nilai b: ";
        cin >> b;
        cout << "a + b = " << a+b;
        break;

        case 2: // pengurangan
        cout << "===Pengurangan (a-b)===\n";
        cout << "Masukkan nilai a: ";
        cin >> a;
        cout << "Masukkan nilai b: ";
        cin >> b;
        cout << "a - b = " << a-b;
        break;

        case 3: // perkalian
        cout << "===Perkalian (a*b)===\n";
        cout << "Masukkan nilai a: ";
        cin >> a;
        cout << "Masukkan nilai b: ";
        cin >> b;
        cout << "a * b = " << a*b;
        break;

        case 4: // pembagian
        cout << "===Pembagian (a/b)===\n";
        cout << "Masukkan nilai a: ";
        cin >> a;
        cout << "Masukkan nilai b: ";
        cin >> b;
        cout << "a / b = " << a/b;
        break;

        case 5: // operasi pangkat
        cout << "===Perpangkatan (a^(b))===\n";
        cout << "Masukkan nilai a: ";
        cin >> a;
        cout << "Masukkan nilai b: ";
        cin >> b;
        cout << "a^(b) = " << pangkat(a,b); // menggunakan fungsi pangkat yang sudah didefinisikan di awal
        break;

        // integral tentu
        case 6: {
        cout << "===Integral Tentu dari fungsi (ax^n + bx^(n-1) + ... + konstanta)===\n";
        cout << "berapa pangkat tertinggi dari fungsi yang ingin di integralkan : "; // meminta input pangkat tertinggi sebagai acuan input lainnya
        cin >> x;
        double integral[x+1]; // mendeklarasikan array integral
        for (int i = 0; i < x+1; i++) {
            cout << "masukkan koefisien suku dengan pangkat " << i << " : ";
            cin >> koef;
            integral[i] = (koef); // mengisi array integral dengan koefisien dari tiap suku
        }
        // meminta input batas bawah dan batas atas integral
        cout << "Masukkan batas bawah dari integral : ";
        cin >> bawah;
        cout << "Masukkan batas atas dari integral : ";
        cin >> atas;
        div = 0.01;
        sum = 0;
        a = bawah;
        b = bawah + div;
        // menghitung luas daerah dengan metode trapesium (jumlah sisi sejajar * tinggi * 0.5)
        while (b <= atas) {
            sumint = 0;
            for (int i = 0; i < x+1; i++) {
                sumint = sumint + integral[i]*(pangkat(a,i)+pangkat(b,i)); // menghitung jumlah sisi sejajar tiap partisi
            }
            sum = sum + sumint*div*(0.5); // menghitung luas dan menambahkannya tiap partisi
            a = a + div;
            b = b + div;   
        }
        cout << "Hasil integralnya adalah "<< sum;
        break;
        }

        default:
        cout << "Tidak ada opsi " << choice;
    }
    return 0;
}
