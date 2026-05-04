#include <iostream>
using namespace std;

class angka
{
private:
    int *arr;
    int panjang;

public:
    angka(int); // Constructor
    ~angka();   // Destructor
    void cetakData();
    void isiData();
};

angka::angka(int i)
{ // Constructor
    panjang = i;
    arr = new int[panjang];
    isiData();
}

angka::~angka()
{ // Destructor
    cout << endl;
    cetakData();
    delete[] arr;
    cout << "Alamat Array Sudah Dilepaskan " << endl;
}

void angka::cetakData()
{
    for (int i = 1; i <= panjang; i++)
    {
        cout << i << " = " << arr[i] << endl;
    }
}

void angka::isiData()
{
    for (int i = 1; i <= panjang; i++)
    {
        cout << i << " = ";
        cin >> arr[i];
    }
    cout << endl;
}

int main()
{
    // Constructor Dipanggil
    angka belajarcpp(3);

    // Constructor Dipanggil untuk pointer
    angka *ptrBelajarcpp = new angka(5);

    // Destructor Dipanggil saat delete
    delete ptrBelajarcpp;

    return 0;
}