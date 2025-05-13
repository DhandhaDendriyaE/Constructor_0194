#include <iostream>
using namespace std;

class mahasiswa{
public:
mahasiswa();//constructor
};

mahasiswa::mahasiswa(){
    cout<<"Contructor Terpanggil"<<endl; //definisi Constructor
}

int main(){
    mahasiswa mhs; //Pembuatan Object

    return 0;
}
