#include <iostream>
#include <vector>
#include <iomanip> // Untuk setw()

#include "Shirt.cpp" // Include definisi class Shirt

using namespace std;

int main() {
    int numShirts;
    cout << "Masukkan jumlah data shirt yang ingin dimasukkan: ";
    cin >> numShirts;

    vector<Shirt> shirts; // Simpan semua data shirt di sini
    char input;

    for (int i = 0; i < numShirts; ++i) {
        string color, sleevetype, size, materials, gender;
        int id;
        string name, brand, price;

        // Memasukkan data dari pengguna
        cout << "\nData Shirt ke-" << i+1 << ":" << endl;
        cout << "Masukkan ID: ";
        cin >> id;
        cin.ignore(); // Membersihkan buffer
        cout << "Masukkan Nama: ";
        getline(cin, name);
        cout << "Masukkan Brand: ";
        getline(cin, brand);
        cout << "Masukkan Harga: ";
        getline(cin, price);
        cout << "Masukkan Warna: ";
        getline(cin, color);
        cout << "Masukkan Jenis Lengan: ";
        getline(cin, sleevetype);
        cout << "Masukkan Ukuran: ";
        getline(cin, size);
        cout << "Masukkan Material: ";
        getline(cin, materials);
        cout << "Masukkan Jenis Kelamin: ";
        getline(cin, gender);

        // Membuat objek Shirt
        Shirt newShirt(color, sleevetype);
        newShirt.set_id(id);
        newShirt.set_name(name);
        newShirt.set_brand(brand);
        newShirt.set_price(price);
        newShirt.set_size(size);
        newShirt.set_materials(materials);
        newShirt.set_gender(gender);

        // Menambahkan objek Shirt ke dalam vektor
        shirts.push_back(newShirt);
    }

    // Menampilkan data dalam bentuk tabel
    cout << "\n======================================================================================================================================================\n";
    cout << "|    ID    |          Nama          |     Brand    |    Harga    |    Warna    |   Jenis Lengan   |    Ukuran   |    Material    |   Jenis Kelamin   |\n";
    cout << "======================================================================================================================================================\n";

    for (const auto& shirt : shirts) {
        cout << "|" << setw(10) << shirt.get_id() << "| " << setw(23) << shirt.get_name() << "| " << setw(13) << shirt.get_brand()
             << "| " << setw(12) << shirt.get_price() << "| " << setw(12) << shirt.get_color() << "| " << setw(17) << shirt.get_sleevetype()
             << "| " << setw(12) << shirt.get_size() << "| " << setw(15) << shirt.get_materials() << "| " << setw(18) << shirt.get_gender() << "|\n";
    }
    cout << "======================================================================================================================================================\n";

    return 0;
}