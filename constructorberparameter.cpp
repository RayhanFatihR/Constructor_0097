#include <iostream>
using namespace std;

class mahasiswa{
public:
    mahasiswa(int nim, string nama); 
};

// Definisi constructor dengan parameter
mahasiswa::mahasiswa(int nim, string nama){
    cout << "Constructor dengan parameter Terpanggil" << endl;
    cout << "NIM   : " << nim << endl;
    cout << "Nama  : " << nama << endl;
}

int main(){
    mahasiswa mhs (12345, "Pascal"); // Memanggil constructor dengan parameter
    return 0;
}