#include <iostream>
using namespace std;

class BangunDatar;
class PersegiPanjang{
    public:
        void inputData(BangunDatar &bd);
        void outputData(BangunDatar &bd);
};

class BangunDatar{
    private:
        float panjang;
        float lebar;
        float hitungLuas(){
            return panjang * lebar;
        };
        float hitungKeliling(){
            return 2 * (panjang + lebar);
        };

        public:
        friend void PersegiPanjang::inputData(BangunDatar &bd);
        friend void PersegiPanjang::outputData(BangunDatar &bd);
};

void PersegiPanjang::inputData(BangunDatar &bd){
    cout << "Masukkan panjang: ";
    cin >> bd.panjang;
    cout << "Masukkan lebar: ";
    cin >> bd.lebar;
}

void PersegiPanjang::outputData(BangunDatar &bd){
    cout << "Luas: " << bd.hitungLuas() << " cm^2" << endl;
    cout << "Keliling: " << bd.hitungKeliling() << " cm" << endl;
};

int main(){
    BangunDatar bd;
    PersegiPanjang pp;
    pp.inputData(bd);
    pp.outputData(bd);
    
}