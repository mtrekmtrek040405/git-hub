

#include <iostream>
using namespace std;

class Hitung {
private:
    int har1 = 17000;
    int har2 = 21000;
    int pil, jum1 = 0, jum2 = 0, total = 0;
    char ulang;

public:
    friend istream& operator>>(istream& in, Hitung& g) {
        do {
            cout << "Selamat Datang di Kedai Ayam Lamongan " << endl;
            cout << "SILAHKAN PILIH MENU" << endl;
            cout << "1. Ayam Goreng (Rp. 17.000)" << endl;
            cout << "2. Ayam Bakar (Rp. 21.000)" << endl;
            cout << "Masukkan pilihan: ";
            in >> g.pil;
            switch (g.pil) {
            case 1:
                cout << "Masukkan jumlah porsi: ";
                int jum;
                in >> jum;
                g.jum1 += jum;
                g.total += g.har1 * jum;
                cout << "Total harga ayam goreng " << g.total << endl;
                break;
            case 2:
                cout << "Masukkan jumlah porsi: ";
                in >> jum;
                g.jum2 += jum;
                g.total += g.har2 * jum;
                cout << "Total harga ayam bakar " << g.total << endl;
                break;
            default:
                cout << "Menu tidak tersedia" << endl;
                break;
            }
            cout << "Apakah masih ada pesanan lagi? Tekan (Y/y): ";
            in >> g.ulang;
        } while (g.ulang == 'Y' || g.ulang == 'y');
        if (g.total >= 45000) {
            int pajak = g.total * 10 / 100;
            g.total -= pajak;
            cout << "diskon 10% . Total harga jadi " << g.total << endl;
        }
        return in;
    }

    friend ostream& operator<<(ostream& os, const Hitung& i) {
        os << "Struk Pembelian " << endl;
        os << "Pesanan Anda adalah: " << endl;
        if (i.jum1 > 0) {
            os << "Ayam Goreng " << i.jum1 << " porsi x Rp. 17.000 = Rp. " << i.jum1 * 17000 << endl;
        }
        if (i.jum2 > 0) {
            os << "Ayam Bakar " << i.jum2 << " porsi x Rp. 21.000 = Rp. " << i.jum2 * 21000 << endl;
        }
        os << "Total harga: Rp. " << i.total << endl;
        return os;
    }
};

int main() {
    Hitung h;
    cin >> h;
    cout << h;
    return 0;
}
