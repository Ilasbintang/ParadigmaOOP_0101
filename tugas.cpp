#include <iostream>
using namespace std;

// Membuat class Barang
class Barang {
public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    // Method untuk menampilkan data barang
    void tampilkanData() {
        cout << "Nama Barang       : " << nama << endl;
        cout << "Jumlah            : " << jumlah << endl;
        cout << "Kategori          : " << kategori << endl;
        cout << "Tanggal Produksi  : " << tanggalProduksi << endl;
        cout << "-----------------------------" << endl;
    }
};

