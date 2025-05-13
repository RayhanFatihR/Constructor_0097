#include <iostream>
using namespace std;

class mahasiswa{
public:
mahasiswa(); // Constructor
};

mahasiswa::mahasiswa(){
cout << "Constructor Terpanggil" << endl; //Definisi constructor
};

int main(){
mahasiswa mhs; // Pembuatan objek

return 0;
}