#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


typedef long long LL;
typedef string Str;
typedef char Ch;

class date {
private:
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

public:
    void inputData();
    void displayData();
    void editMenu();
    void editData(int choice);
    void inputkelamin();
    void inputagama();
    void inputwni();
};

void date::inputkelamin(){
    int p;
    cout<<"1. Laki laki"<<endl;
    cout<<"2. Perempuan"<<endl;
    cout<<"pilih kelamin anda :";
    cin>>p;
    switch(p){
        case 1:
        kel="laki laki";
        break;
        case 2:
        kel="Perempuan";
        break;
        default:
        if(p>2 || p<1){
            return inputkelamin();
        }
    }

}

void date::inputagama(){
    int p;
    cout<<"1. Islam"<<endl;
    cout<<"2. Kriten"<<endl;
    cout<<"3. Hindu"<<endl;
    cout<<"4. Buddha"<<endl;
    cout<<"5. Katholik"<<endl;
    cout<<"pilih Agama anda :";
    cin>>p;
    switch(p){
        case 1:
        agm="Islam";
        break;
        case 2:
        agm="Kristen";
        break;
        case 3:
        agm="Hindu";
        break;
        case 4:
        agm="Budha";
        break;
        case 5:
        agm="Katholik";
        break;
        default:
        if(p>5 || p<1){
            return inputagama();
        }
    }


}

void date::inputwni(){
    int p;
    cout<<"1. Indonesia"<<endl;
    cout<<"2. Malaysia"<<endl;
    cout<<"3. Uruguay"<<endl;
    cout<<"4. Amerika serikat"<<endl;
    cout<<"5. Polandia"<<endl;
    cout<<"pilih kewarganegaraan anda :";
    cin>>p;
    switch(p){
        case 1:
        wni="Indonesia";
        break;
        case 2:
        wni="Malaysia";
        break;
        case 3:
        wni="Uruguay";
        break;
        case 4:
        wni="Amerika Serikat";
        break;
        case 5:
        wni="Polandia";
        break;
        default:
        if(p>5 || p<1){
            return inputwni();
        }
    }

}

void date::inputData() {
    cout << "Masukkan NIK: ";
    cin >> nik;
    cin.ignore();
    cout << "Masukkan Nama: ";
    getline(cin, nama);
    cout << "Masukkan Tempat/Tgl Lahir: ";
    getline(cin, ttl);
    cout << "Masukkan Golongan Darah (A/B/AB/O): ";
    cin >> gol;
    cin.ignore();
    cout << "Masukkan Alamat: ";
    getline(cin, almt);
    cout << "Masukkan RT/RW: ";
    getline(cin, rt_rw);
    cout << "Masukkan Kelurahan/Desa: ";
    getline(cin, kel);
    cout << "Masukkan Kecamatan: ";
    getline(cin, kec);
    cout << "Masukkan Status Perkawinan: ";
    getline(cin, status);
    cout << "Masukkan Pekerjaan: ";
    getline(cin, kerja);
    cout << "Masukkan Berlaku Hingga: ";
    getline(cin, berlaku);
}

void date::displayData() {
    const int lebar = 60;
    cout << "\n" << setw((lebar + 18) / 2) << "KARTU TANDA PENDUDUK (KTP)" << endl;
    cout << "NIK               : " << nik << endl;
    cout << "Nama              : " << nama << endl;
    cout << "Tempat/Tgl Lahir  : " << ttl << endl;
    cout << "Jenis Kelamin     : " << jk << "    Gol Darah: " << gol << endl;
    cout << "Alamat            : " << almt << endl;
    cout << "RT/RW             : " << rt_rw << endl;
    cout << "Kel/Desa          : " << kel << endl;
    cout << "Kecamatan         : " << kec << endl;
    cout << "Agama             : " << agm << endl;
    cout << "Status Perkawinan : " << status << endl;
    cout << "Pekerjaan         : " << kerja << endl;
    cout << "Kewarganegaraan   : " << wni << endl;
    cout << "Berlaku Hingga    : " << berlaku << endl;
}

void date::editData(int pilihan) {
    switch (pilihan) {
        case 1:
            cout << "NIK baru: ";
            cin >> nik;
            cin.ignore();
            break;
        case 2:
            cout << "Nama baru: ";
            getline(cin, nama);
            break;
        case 3:
            cout << "Tempat/Tgl Lahir baru: ";
            getline(cin, ttl);
            break;
        case 4:
            cout << "Jenis Kelamin baru: ";
            getline(cin, jk);
            break;
        case 5:
            cout << "Golongan Darah baru: ";
            cin >> gol;
            cin.ignore();
            break;
        case 6:
            cout << "Alamat baru: ";
            getline(cin, almt);
            break;
        case 7:
            cout << "RT/RW baru: ";
            getline(cin, rt_rw);
            break;
        case 8:
            cout << "Kelurahan/Desa baru: ";
            getline(cin, kel);
            break;
        case 9:
            cout << "Kecamatan baru: ";
            getline(cin, kec);
            break;
        case 10:
            cout << "Agama baru: ";
            getline(cin, agm);
            break;
        case 11:
            cout << "Status Perkawinan baru: ";
            getline(cin, status);
            break;
        case 12:
            cout << "Pekerjaan baru: ";
            getline(cin, kerja);
            break;
        case 13:
            cout << "Kewarganegaraan baru: ";
            getline(cin, wni);
            break;
        case 14:
            cout << "Berlaku Hingga baru: ";
            getline(cin, berlaku);
            break;
        case 0:
            cout << "Kembali ke menu utama.\n";
            return;
        default:
            cout << "Pilihan tidak valid!\n";
    }
    
    displayData();
    
    editMenu();
}

void date::editMenu() {
    int pilihan;
    cout << "\n== MENU EDIT DATA KTP ==\n";
    cout << "1. NIK\n";
    cout << "2. Nama\n";
    cout << "3. Tempat/Tgl Lahir\n";
    cout << "4. Jenis Kelamin\n";
    cout << "5. Golongan Darah\n";
    cout << "6. Alamat\n";
    cout << "7. RT/RW\n";
    cout << "8. Kelurahan/Desa\n";
    cout << "9. Kecamatan\n";
    cout << "10. Agama\n";
    cout << "11. Status Perkawinan\n";
    cout << "12. Pekerjaan\n";
    cout << "13. Kewarganegaraan\n";
    cout << "14. Berlaku Hingga\n";
    cout << "0. Selesai Edit\n";
    cout << "Pilihan Anda: ";
    cin >> pilihan;
    cin.ignore();
    
    
    editData(pilihan);
}

int main() {
    date dt;
    cout << "Input Data KTP\n";
    dt.inputkelamin();
    dt.inputwni();
    dt.inputagama();
    dt.inputData();

    cout << endl;
    dt.displayData();

    char edit;
    cout << "\nApakah Anda ingin mengedit data? (y/n): ";
    cin >> edit;
    cin.ignore();

    if (edit == 'y' || edit == 'Y') {
        
        dt.editMenu();
    }

    cout << "\nData KTP akhir:\n";
    dt.displayData();

    return 0;
}