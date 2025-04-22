#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;

typedef long long LL;
typedef string Str;
typedef char Ch;

struct DP {
    LL nik;
    Str nama;
    Str ttl;
    Str jk;
    Ch gol[3];
    Str almt;
    Str rt_rw;
    Str kel;
    Str kec;
    Str agm;
    Str status;
    Str kerja;
    Str wni;
    Str berlaku;
};

DP inputData() {
    DP dt;
    cout << "Masukkan NIK: ";
    cin >> dt.nik;
    cin.ignore();
    cout << "Masukkan Nama: ";
    getline(cin, dt.nama);
    cout << "Masukkan Tempat/Tgl Lahir: ";
    getline(cin, dt.ttl);
    cout << "Masukkan Jenis Kelamin: ";
    getline(cin, dt.jk);
    cout << "Masukkan Golongan Darah (A/B/AB/O): ";
    cin >> dt.gol;
    cin.ignore();
    cout << "Masukkan Alamat: ";
    getline(cin, dt.almt);
    cout << "Masukkan RT/RW: ";
    getline(cin, dt.rt_rw);
    cout << "Masukkan Kelurahan/Desa: ";
    getline(cin, dt.kel);
    cout << "Masukkan Kecamatan: ";
    getline(cin, dt.kec);
    cout << "Masukkan Agama: ";
    getline(cin, dt.agm);
    cout << "Masukkan Status Perkawinan: ";
    getline(cin, dt.status);
    cout << "Masukkan Pekerjaan: ";
    getline(cin, dt.kerja);
    cout << "Masukkan Kewarganegaraan: ";
    getline(cin, dt.wni);
    cout << "Masukkan Berlaku Hingga: ";
    getline(cin, dt.berlaku);
    return dt;
}

Str display(const DP &dt) {
    stringstream ss;
    const int lebar = 60;
    ss << setw((lebar + 18) / 2) << "KARTU TANDA PENDUDUK (KTP)" << endl;
    ss << "NIK               : " << dt.nik << endl;
    ss << "Nama              : " << dt.nama << endl;
    ss << "Tempat/Tgl Lahir  : " << dt.ttl << endl;
    ss << "Jenis Kelamin     : " << dt.jk << "    Gol Darah: " << dt.gol << endl;
    ss << "Alamat            : " << dt.almt << endl;
    ss << "RT/RW             : " << dt.rt_rw << endl;
    ss << "Kel/Desa          : " << dt.kel << endl;
    ss << "Kecamatan         : " << dt.kec << endl;
    ss << "Agama             : " << dt.agm << endl;
    ss << "Status Perkawinan : " << dt.status << endl;
    ss << "Pekerjaan         : " << dt.kerja << endl;
    ss << "Kewarganegaraan   : " << dt.wni << endl;
    ss << "Berlaku Hingga    : " << dt.berlaku << endl;
    return ss.str();
}

DP edit(DP dt) {
    int pilihan;
    do {
        cout << endl;
        cout << "== MENU EDIT DATA KTP ==" << endl;
        cout << "1. Nama" << endl;
        cout << "2. Tempat/Tgl Lahir" << endl;
        cout << "3. Jenis Kelamin" << endl;
        cout << "4. Golongan Darah" << endl;
        cout << "5. Alamat" << endl;
        cout << "6. RT/RW" << endl;
        cout << "7. Kelurahan/Desa" << endl;
        cout << "8. Kecamatan" << endl;
        cout << "9. Agama" << endl;
        cout << "10. Status Perkawinan" << endl;
        cout << "11. Pekerjaan" << endl;
        cout << "12. Kewarganegaraan" << endl;
        cout << "13. Berlaku Hingga" << endl;
        cout << "0. Selesai Edit" << endl;
        cout << "Pilihan Anda: ";
        cin >> pilihan;
        cin.ignore();

        switch (pilihan) {
            case 1: cout << "Nama baru: "; getline(cin, dt.nama); break;
            case 2: cout << "Tempat/Tgl Lahir baru: "; getline(cin, dt.ttl); break;
            case 3: cout << "Jenis Kelamin baru: "; getline(cin, dt.jk); break;
            case 4: cout << "Golongan Darah baru: "; cin >> dt.gol; cin.ignore(); break;
            case 5: cout << "Alamat baru: "; getline(cin, dt.almt); break;
            case 6: cout << "RT/RW baru: "; getline(cin, dt.rt_rw); break;
            case 7: cout << "Kelurahan/Desa baru: "; getline(cin, dt.kel); break;
            case 8: cout << "Kecamatan baru: "; getline(cin, dt.kec); break;
            case 9: cout << "Agama baru: "; getline(cin, dt.agm); break;
            case 10: cout << "Status Perkawinan baru: "; getline(cin, dt.status); break;
            case 11: cout << "Pekerjaan baru: "; getline(cin, dt.kerja); break;
            case 12: cout << "Kewarganegaraan baru: "; getline(cin, dt.wni); break;
            case 13: cout << "Berlaku Hingga baru: "; getline(cin, dt.berlaku); break;
            case 0: cout << "Selesai mengedit data." << endl; break;
            default: cout << "Pilihan tidak valid." << endl; break;
        }
    } while (pilihan != 0);

    return dt;
}

int main() {
    DP dt = inputData(); 
    cout << endl << display(dt);

    char edt;
    cout << endl << "Apakah Anda ingin mengedit data? (y/n): ";
    cin >> edt;
    cin.ignore();

    if (edt == 'y' || edt == 'Y') {
        dt = edit(dt); 
        cout << endl << "Data setelah diedit:" << endl;
        cout << display(dt);
    }

    return 0;
}
