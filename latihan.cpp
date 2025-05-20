// Buatlah program C++ dengan class barang yang memiliki atribut : namaBarang,
// kodeBarang
// program memiliki constructor berprameter
// untuk mengisi nilai namaBarang dan kodeBarang
// serta memilki fungsi untuk menampilkan informasi barang  

#include <iostream>
using namespace std;

class Barang {
public:
    string namaBarang;
    int kodeBarang;

    public:
    Barang(string nama, int kode) {
        namaBarang = nama;
        kodeBarang = kode;
    }

    void output() {
        cout << "Nama Barang: " << namaBarang << endl;
        cout << "Kode Barang: " << kodeBarang << endl;
    }
};

int main(){
    Barang * a = new Barang("Laptop", 12345);
    a->output();

    return 0;
}


