#include <iostream>
using namespace std;

class buku
{
    string judul;

public:
    buku &setJudul(string judul)
    {
        this->judul = judul;
        return *this; // chain function
    }

    string getJudul()
    {
        return this->judul;
    }
};

int main()
{
    buku bukunya;
    // bukunya.setJudul("IPA");
    // cout << bukunya.getJudul();

    // Chain function calls
    cout << bukunya.setJudul("Matematika").getJudul();
    return 0;
}