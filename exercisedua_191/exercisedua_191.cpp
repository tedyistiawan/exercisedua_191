#include <iostream>
using namespace std;
#include <vector>
class Pengarang;

class Penerbit {

public:
    string nama;
    vector<Pengarang*> daftar_pengarang;
    Penerbit(string pNama) :nama (pNama) {
        cout << "penerbit \"" << nama << "\" ada\n";
    }
    ~Penerbit() {
        cout << "penerbit \"" << nama << "\" tidak ada\n";
    }
    void tambahpengarang(Pengarang*);
    void cetakpengarang();
};


class Pengarang {
public:
    string nama;
    vector<Penerbit*> daftar_Penerbit;

    Pengarang(string pNama) :nama(pNama) {
        cout << "pengarang \"" << nama << "\" ada\n";
    }
    ~Pengarang() {
        cout << "pengarang \"" << nama << "\" tidak ada\n";
    }

    void tambahPengarang(Pengarang*);
    void cetakPenerbit();
};

void Penerbit::tambahPenerbit(Pengarang* pPengarang) {
    daftar_penerbit.push_back(pPengarang);
    pPengarang->tambahPengarang(this);
}
void Penerbit::cetakpengarang() {
    cout << "Daftar Pengarang yang bekerja sama dengan penerbit \"" << this->nama << "\":\n";

    for (auto& a : daftar_pengarang) {
        cout << a->nama << "\n";
    }
    cout << endl;
}


