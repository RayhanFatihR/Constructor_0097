#include <iostream>
using namespace std;
class buku{
    string judul;

    public:
    buku setJudul(string judul){
        this->judul = judul; 
        return *this;  // chain function
    }
    string getJudul(){
        return this->judul;  
    }
};

int mainn(){
    buku bukunya;
    cout << bukunya.setJudul("Matematika").getJudul(); 
    return 0;
}