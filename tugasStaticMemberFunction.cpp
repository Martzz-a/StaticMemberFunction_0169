#include <iostream>
#include <string>
using namespace std;

class Kendaraan
{
private:
    int idKendaraan;
    string namaKendaraan;

public:
    Kendaraan();
    Kendaraan(int);
    Kendaraan(string);
    Kendaraan(int, string);
    void tampil();
};

Kendaraan::Kendaraan()
{
    idKendaraan = 0;
    namaKendaraan = "Belum Ada";
}

Kendaraan::Kendaraan(int id)
{
    idKendaraan = id;
    namaKendaraan = "Belum Ada";
}

Kendaraan::Kendaraan(string nama)
{
    idKendaraan = 0;
    namaKendaraan = nama;
}

Kendaraan::Kendaraan(int id, string nama)
{
    idKendaraan = id;
    namaKendaraan = nama;
}

void Kendaraan::tampil()
{
    cout << "ID Kendaraan   : " << idKendaraan << endl;
    cout << "Nama Kendaraan : " << namaKendaraan << endl;
    cout << endl;
}

int main()
{
    Kendaraan k1;
    Kendaraan k2(111);
    Kendaraan k3("Motor");
    Kendaraan k4(222, "Mobil");

    cout << "Kendaraan 1:" << endl;
    k1.tampil();

    cout << "Kendaraan 2:" << endl;
    k2.tampil();

    cout << "Kendaraan 3:" << endl;
    k3.tampil();

    cout << "Kendaraan 4:" << endl;
    k4.tampil();

    return 0;
}