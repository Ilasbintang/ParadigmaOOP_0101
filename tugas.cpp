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

int main() {
    // Membuat object elektronik
    Barang elektronik;
    elektronik.nama = "Laptop";
    elektronik.jumlah = 10;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "2024-01-10";

    // Membuat object nonElektronik
    Barang nonElektronik;
    nonElektronik.nama = "Meja";
    nonElektronik.jumlah = 5;
    nonElektronik.kategori = "Non Elektronik";
    nonElektronik.tanggalProduksi = "2023-12-01";

    // Menampilkan data
    cout << "Data Barang Elektronik:" << endl;
    elektronik.tampilkanData();

    cout << "Data Barang Non Elektronik:" << endl;
    nonElektronik.tampilkanData();

    return 0;
}