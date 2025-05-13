#include <iostream>
using namespace std;

class bangunDatar {
public:
    int panjang;
    int lebar;

public:
    bangunDatar(float p, float l) : panjang(p), lebar(l) {}

    float hitungLuas() {
        return panjang * lebar;
    }

    float hitungKeliling() {
        return 2 * (panjang + lebar);
    }
};

class persegiPanjang : public bangunDatar {
public:
    persegiPanjang(float p, float l) : bangunDatar(p, l) {}

    friend void cetakHasil(persegiPanjang * p);
};

void cetakHasil(persegiPanjang * p) {
    cout << "Luas: " << p->hitungLuas() << "cm^2" << endl;
    cout << "Keliling: " << p->hitungKeliling() << "cm" << endl;
}

int main() {
    float panjang, lebar;
    cout << "Masukkan panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar: ";
    cin >> lebar;

    persegiPanjang * objek = new persegiPanjang(panjang, lebar);
    cetakHasil(objek);

    delete objek;
    return 0;
}