#include <iostream>
#include <string>
using namespace std;

class Mahasiswa
{
private:
    int nim;
    string nama;
public:
    Mahasiswa();
    Mahasiswa(int);
    Mahasiswa(string);
    Mahasiswa(int iNim, string iNama);
    void cetak();
};

Mahasiswa::Mahasiswa()
{
}

Mahasiswa::Mahasiswa(int iNim)
{
    nim = iNim;
}

Mahasiswa::Mahasiswa(int iNama)
{
    nama = iNama;
}

Mahasiswa::Mahasiswa(int iNim, string iNama)
{
    nim = iNim;
    nama = iNama;
}

void Mahasiswa::cetak(){
    cout << endl << "Nim = " << nim << endl;
    cout << "Nama = " << nama << endl;
}