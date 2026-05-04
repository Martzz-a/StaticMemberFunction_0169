#include <iostream>
using namespace std;

class Mahasiswa {

public:
    static int nim;
    int id;
    string nama;

    void setID();
    void printALL();

    Mahasiswa(string pnama) :nama(pnama){
        setID();
    }
};

int Mahasiswa::nim = 10;

// implementasi prosedur-prosedur di luar class
void Mahasiswa::setID() {
    id = ++nim;
};

void Mahasiswa::printALL() {
    cout << "ID: " << id << endl;
    cout << "Nama: " << nama << endl;
    cout << endl;
}