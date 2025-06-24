
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class datamahasiswa{
    private:
    int nim[100];
    string nama[100];
    string jurusan[100];
    int no[100];
    int jumlahData;
    
    public:
    datamahasiswa() {
        jumlahData = 0;
    }
    
    void inputdata();
    void tampildata();
    void pengurutandataberdasarkannim();
    void searchMahasiswa();
    void menu();
    
    // Helper functions for sorting
    void swapData(int i, int j);
};

void datamahasiswa::inputdata() {
    if (jumlahData >= 100) {
        cout << "Data sudah penuh!" << endl;
        return;
    }
    
    cout << "\n=== INPUT DATA MAHASISWA ===" << endl;
    cout << "NIM: ";
    cin >> nim[jumlahData];
    cin.ignore();
    cout << "Nama: ";
    getline(cin, nama[jumlahData]);
    cout << "Jurusan: ";
    getline(cin, jurusan[jumlahData]);
    cout << "No HP: ";
    cin >> no[jumlahData];
    
    jumlahData++;
    cout << "Data berhasil ditambahkan!" << endl;
}

void datamahasiswa::tampildata() {
    if (jumlahData == 0) {
        cout << "Tidak ada data mahasiswa!" << endl;
        return;
    }
    
    cout << "\n=== DATA MAHASISWA ===" << endl;
    cout << "============================================================================" << endl;
    cout << "No | NIM      | Nama                | Jurusan            | No HP" << endl;
    cout << "============================================================================" << endl;
    
    for (int i = 0; i < jumlahData; i++) {
        cout << i+1 << "  | " << nim[i] << " | " << nama[i] 
             << string(20-nama[i].length(), ' ') << "| " << jurusan[i] 
             << string(19-jurusan[i].length(), ' ') << "| " << no[i] << endl;
    }
    cout << "============================================================================" << endl;
}

void datamahasiswa::swapData(int i, int j) {
    swap(nim[i], nim[j]);
    swap(nama[i], nama[j]);
    swap(jurusan[i], jurusan[j]);
    swap(no[i], no[j]);
}



void datamahasiswa::pengurutandataberdasarkannim() {
    if (jumlahData == 0) {
        cout << "Tidak ada data untuk diurutkan!" << endl;
        return;
    }
    
    int pilihan;
    cout << "\n=== PENGURUTAN DATA BERDASARKAN NIM ===" << endl;
    cout << "1. Urutkan NIM (Ascending)" << endl;
    cout << "2. Urutkan NIM (Descending)" << endl;
    cout << "Pilih jenis pengurutan: ";
    cin >> pilihan;
    
    if (pilihan == 1) {
        // Bubble sort ascending
        for (int i = 0; i < jumlahData - 1; i++) {
            for (int j = 0; j < jumlahData - i - 1; j++) {
                if (nim[j] > nim[j + 1]) {
                    swapData(j, j + 1);
                }
            }
        }
        cout << "Data berhasil diurutkan berdasarkan NIM (Ascending)!" << endl;
    } 
    else if (pilihan == 2) {
        // Bubble sort descending
        for (int i = 0; i < jumlahData - 1; i++) {
            for (int j = 0; j < jumlahData - i - 1; j++) {
                if (nim[j] < nim[j + 1]) {
                    swapData(j, j + 1);
                }
            }
        }
        cout << "Data berhasil diurutkan berdasarkan NIM (Descending)!" << endl;
    }
    else {
        cout << "Pilihan tidak valid!" << endl;
    }
}

void datamahasiswa::searchMahasiswa() {
    if (jumlahData == 0) {
        cout << "Tidak ada data mahasiswa!" << endl;
        return;
    }
    
    int pilihan;
    cout << "\n=== PENCARIAN MAHASISWA ===" << endl;
    cout << "1. Cari berdasarkan NIM" << endl;
    cout << "2. Cari berdasarkan Nama" << endl;
    cout << "Pilih metode pencarian: ";
    cin >> pilihan;
    
    bool found = false;
    
    if (pilihan == 1) {
        int cariNim;
        cout << "Masukkan NIM yang dicari: ";
        cin >> cariNim;
        
        cout << "\n=== HASIL PENCARIAN ===" << endl;
        for (int i = 0; i < jumlahData; i++) {
            if (nim[i] == cariNim) {
                cout << "Data ditemukan!" << endl;
                cout << "NIM: " << nim[i] << endl;
                cout << "Nama: " << nama[i] << endl;
                cout << "Jurusan: " << jurusan[i] << endl;
                cout << "No HP: " << no[i] << endl;
                found = true;
                break;
            }
        }
    } 
    else if (pilihan == 2) {
        string cariNama;
        cin.ignore();
        cout << "Masukkan Nama yang dicari: ";
        getline(cin, cariNama);
        
        cout << "\n=== HASIL PENCARIAN ===" << endl;
        for (int i = 0; i < jumlahData; i++) {
            if (nama[i].find(cariNama) != string::npos) {
                cout << "Data ditemukan!" << endl;
                cout << "NIM: " << nim[i] << endl;
                cout << "Nama: " << nama[i] << endl;
                cout << "Jurusan: " << jurusan[i] << endl;
                cout << "No HP: " << no[i] << endl;
                found = true;
            }
        }
    }
    else {
        cout << "Pilihan tidak valid!" << endl;
        return;
    }
    
    if (!found) {
        cout << "Data tidak ditemukan!" << endl;
    }
}

void datamahasiswa::menu() {
    int pilihan;
    
    do {
        cout << "\n========================================" << endl;
        cout << "    SISTEM MANAJEMEN DATA MAHASISWA    " << endl;
        cout << "========================================" << endl;
        cout << "1. Input Data Mahasiswa" << endl;
        cout << "2. Tampilkan Data Mahasiswa" << endl;
        cout << "3. Urutkan Data" << endl;
        cout << "4. Cari Mahasiswa" << endl;
        cout << "5. Keluar" << endl;
        cout << "========================================" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;
        
        switch(pilihan) {
            case 1:
                inputdata();
                break;
            case 2:
                tampildata();
                break;
            case 3:
                pengurutandataberdasarkannim();
                break;
            case 4:
                searchMahasiswa();
                break;
            case 5:
                cout << "Terima kasih!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }
    } while(pilihan != 5);
}

int main() {
    datamahasiswa dm;
    dm.menu();
    return 0;
}

