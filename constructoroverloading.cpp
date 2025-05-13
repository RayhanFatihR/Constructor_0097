#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
    private:
        int nim;
        string nama;
    public:
        mahasiswa(); 
        mahasiswa(int);
        mahasiswa(string);
        mahasiswa(int iNim, string iNama);
        void cetak();
};

mahasiswa :: mahasiswa(int iNim){
    nim = iNim; // definisi hanya Nim
}

mahasiswa :: mahasiswa(string iNama){
    nama = iNama; // definisi hanya Nama
}

mahasiswa :: mahasiswa(int iNim, string iNama){
    nim = iNim; // definisi Nim dan Nama
    nama = iNama;
}

void mahasiswa :: cetak(){
    cout << endl << "NIM   : " << nim << endl;
    cout << "Nama  : " << nama << endl;
}
