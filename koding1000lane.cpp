#include<iostream>
#include<string>
#include<limits>
using namespace std;

class jne{
    private:
    bool inputValid;
    string ya;
    string user;
    string pw;
    int pil;
    string pwuser[100]={"freefire12","freefire"}; 
    string pwuser1[100]={"freefire12","freefire"};
    string ususer[100]={"farid","udin"};
    string ususer1[100]={"farid","udin"};
    int harganml[100]={
    9000,17000,7000,16000,10000,
    13000,13000,14000,15000,12000};
    int hargafrz[100]={
    13000,21000,11000,19000,13000,
    16000,16000,17000,18000,15000};
    int hargapch[100]={12000,20000,10000,18000,12000,
    15000,15000,16000,17000,14000};
    int hargacrgo[100]={8000,16000,6000,15000,9000,
    12000,12000,13000,14000,11000};
    string wilayah[100]={
    "SEMARANG","SURABAYA","SOLO",
    "MALANG","MADIUN","CILACAP",
    "BREBES","KEDIRI","BANDUNG","JAKARTA"};
    int akunke;
    int jumlahAkun = 2;
    int jmlhalmtkirim =10;
    int alm =0;
    int noseri =0;
    string resi[100];
    string namarim[100];
    long long int norim[100];
    string namapeng[100];
    long long int nopeng[100];
    string des[100];
    string jeniskirim[100];
    int jumlahkirim=0;
    float berat[100];
    string asalkir[100];
    string tujuankir[100];
    int hargakirim[100];
    string status[100];
    string lokasi[100];


    public:
    bool logadmin(string user,string pw);
    void admin();
    void userr();
    void loguser();
    void buataknuser();
    bool loginuser(string user,string pw);
    void datahargakirim();
    void utama();
    void displ();
    void pilpngrm();
    void editprgm();
    void uskirim();
    void indatakirim();
    int hitungresi();
    void tampilresi(int index);
    void cariresi();
    int hitungharga(int jenis,int index, float berat);
    void cekstatus();
    void editstus();
    void dislpysttus(int index);
    void pengaduan();
    void menejakunus();
    void resetpw();
    void cekdat();
    void hapusalamat();
    void bubblesortwila();
    void displaysortwil();
    void pilrim();
    void pilihkirim();
    void statistikPengiriman();
    void riwayatpengiriman();
    void estimasiWaktuPengiriman();
    void cariWilayah();
    void pengingatPengiriman();
    void sortingpengiriman();
    void exportDataPengiriman();
    void importDataPengiriman();
    void sortbyresi();
    void sortbyasal();
    void sortbytujuan();
    void sortbyjeniskirim();
    void cekestbiayakirim();
    void cekestwaktukirim();
    void cekpromopengiriman();
    void simulasitrackingpaket();
    void filterbyasal();
    void filterbytujuan();
    void filterbyjeniskirim();

};


void jne::simulasitrackingpaket() {
    system("cls");
    cout << "================== SIMULASI TRACKING PAKET ==============" << endl;
    string noResi;
    cout << "Masukkan No. Resi Paket: ";
    cin >> noResi;

    bool found = false;
    for (int i = 0; i < jumlahkirim; i++) {
        if (resi[i] == noResi) {
            cout << "Paket dengan No. Resi " << noResi << " ditemukan!" << endl;
            cout << "Status: " << status[i] << endl;
            cout << "Lokasi: " << lokasi[i] << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Paket dengan No. Resi " << noResi << " tidak ditemukan!" << endl;
    }

    system("pause");
    system("cls");
    userr();
}


void jne::cekpromopengiriman() {
    system("cls");
    cout << "================== PROMO PENGIRIMAN ==================" << endl;
    cout << "Saat ini tidak ada promo khusus yang berlaku." << endl;
    cout << "Silakan cek website resmi JNE untuk promo terbaru." << endl;
    cout << "========================================================" << endl;
    system("pause");
    system("cls");
    userr();
}


void jne::cekestbiayakirim(){
    int jenis;
    float berat;
    cout << "Masukkan jenis pengiriman (1: Normal, 2: Freezer, 3: Pecah, 4: Cargo): ";
    cin >> jenis;
    cout << "Masukkan berat barang (kg): ";
    cin >> berat;

    int biaya = hitungharga(jenis, 0, berat); // Asumsi index 0 untuk simulasi
    cout << "======================================================" << endl;
    cout << "          ESTIMASI BIAYA PENGIRIMAN                  " << endl;
    cout << "======================================================" << endl;
    cout << "Jenis Pengiriman: " << (jenis == 1 ? "Normal" : jenis == 2 ? "Freezer" : jenis == 3 ? "Pecah" : "Cargo") << endl;
    cout << "Berat Barang: " << berat << " kg" << endl;
    cout << "Total Biaya: Rp." << biaya << endl;
    cout << "======================================================" << endl;

    system("pause");
    system("cls");
    userr();
}


void jne::cekestwaktukirim(){
    system("cls");
    cout << "================== ESTIMASI WAKTU PENGIRIMAN ==============" << endl;
    cout << "Estimasi waktu pengiriman tergantung pada jarak dan jenis layanan." << endl;
    cout << "Contoh estimasi waktu:" << endl;
    cout << "- Normal: 3-5 hari kerja" << endl;
    cout << "- Freezer: 2-4 hari kerja" << endl;
    cout << "- Pecah belah: 3-6 hari kerja" << endl;
    cout << "- Cargo: 5-10 hari kerja" << endl;
    cout << "==========================================================" << endl;
    system("pause");
    system("cls");
    userr();
}



//void jne::exportDataPengiriman() {
  //  ofstream file("data_pengiriman.txt");
 //   if (!file.is_open()) {
 //       cout << "Gagal membuka file untuk menyimpan data pengiriman!" << endl;
 //       return;
  //  }
  //  file << "================== DATA PENGIRIMAN JNE ==================" << endl;
  //  for (int i = 0; i < jumlahkirim; i++) {
  //      file << "No. Resi        : " << resi[i] << endl;
  //      file << "Asal            : " << asalkir[i] << endl;
  //      file << "Tujuan          : " << tujuankir[i] << endl;
  //      file << "Nama Pengirim   : " << namapeng[i] << endl;
  //      file << "No HP Pengirim  : " << nopeng[i] << endl;
 //       file << "Nama Penerima   : " << namarim[i] << endl;
  //      file << "No HP Penerima  : " << norim[i] << endl;
  //      file << "Jenis Kiriman   : " << jeniskirim[i] << endl;
  //      file << "Deskripsi Barang: " << des[i] << endl;
  //      file << "Berat           : " << berat[i] << " kg" << endl;
  //      file << "Total Harga     : Rp." << hargakirim[i] << endl;
  //      file << "Status          : " << status[i] << endl;
  //      file << "Lokasi Paket    : " << lokasi[i] << endl;
  //      file << "-----------------------------------------" << endl;
  //  }

  //  file.close();
  //  cout << "Data pengiriman berhasil disimpan ke file!" << endl;
//}

//void jne::importDataPengiriman() {
  //  ifstream file("data_pengiriman.txt");
    //if (!file.is_open()) {
   //     cout << "Gagal membuka file untuk membaca data pengiriman!" << endl;
   //     return;
    //}

 //   string line;
 //   while (getline(file, line)) {
  //      cout << line << endl;
  //  }

 //   file.close();
  //  cout << "Data pengiriman berhasil dibaca dari file!" << endl;
//}

void jne::sortbyresi(){
    for(int i=0; i < jumlahkirim - 1; i++) {
        for(int j = 0; j < jumlahkirim - i - 1; j++) {
            if(resi[j] > resi[j + 1]) {
                swap(resi[j], resi[j + 1]);
                swap(asalkir[j], asalkir[j + 1]);
                swap(tujuankir[j], tujuankir[j + 1]);
                swap(namapeng[j], namapeng[j + 1]);
                swap(nopeng[j], nopeng[j + 1]);
                swap(namarim[j], namarim[j + 1]);
                swap(norim[j], norim[j + 1]);
                swap(jeniskirim[j], jeniskirim[j + 1]);
                swap(des[j], des[j + 1]);
                swap(berat[j], berat[j + 1]);
                swap(hargakirim[j], hargakirim[j + 1]);
                swap(status[j], status[j + 1]);
                swap(lokasi[j], lokasi[j + 1]);
            }
        }
    }
    system("pause");
    system("cls");
    sortingpengiriman();
}

void jne::sortbyasal() {
    for(int i=0; i < jumlahkirim - 1; i++) {
        for(int j = 0; j < jumlahkirim - i - 1; j++) {
            if(asalkir[j] > asalkir[j + 1]) {
                swap(resi[j], resi[j + 1]);
                swap(asalkir[j], asalkir[j + 1]);
                swap(tujuankir[j], tujuankir[j + 1]);
                swap(namapeng[j], namapeng[j + 1]);
                swap(nopeng[j], nopeng[j + 1]);
                swap(namarim[j], namarim[j + 1]);
                swap(norim[j], norim[j + 1]);
                swap(jeniskirim[j], jeniskirim[j + 1]);
                swap(des[j], des[j + 1]);
                swap(berat[j], berat[j + 1]);
                swap(hargakirim[j], hargakirim[j + 1]);
                swap(status[j], status[j + 1]);
                swap(lokasi[j], lokasi[j + 1]);
            }
        }
    }
    system("pause");
    system("cls");
    sortingpengiriman();
}


void jne::sortbytujuan() {
    for(int i=0; i < jumlahkirim - 1; i++) {
        for(int j = 0; j < jumlahkirim - i - 1; j++) {
            if(tujuankir[j] > tujuankir[j + 1]) {
                swap(resi[j], resi[j + 1]);
                swap(asalkir[j], asalkir[j + 1]);
                swap(tujuankir[j], tujuankir[j + 1]);
                swap(namapeng[j], namapeng[j + 1]);
                swap(nopeng[j], nopeng[j + 1]);
                swap(namarim[j], namarim[j + 1]);
                swap(norim[j], norim[j + 1]);
                swap(jeniskirim[j], jeniskirim[j + 1]);
                swap(des[j], des[j + 1]);
                swap(berat[j], berat[j + 1]);
                swap(hargakirim[j], hargakirim[j + 1]);
                swap(status[j], status[j + 1]);
                swap(lokasi[j], lokasi[j + 1]);
            }
        }
    }
    system("pause");
    system("cls");
    sortingpengiriman();
}


void jne::sortbyjeniskirim() {
    for(int i=0; i < jumlahkirim - 1; i++) {
        for(int j = 0; j < jumlahkirim - i - 1; j++) {
            if(jeniskirim[j] > jeniskirim[j + 1]) {
                swap(resi[j], resi[j + 1]);
                swap(asalkir[j], asalkir[j + 1]);
                swap(tujuankir[j], tujuankir[j + 1]);
                swap(namapeng[j], namapeng[j + 1]);
                swap(nopeng[j], nopeng[j + 1]);
                swap(namarim[j], namarim[j + 1]);
                swap(norim[j], norim[j + 1]);
                swap(jeniskirim[j], jeniskirim[j + 1]);
                swap(des[j], des[j + 1]);
                swap(berat[j], berat[j + 1]);
                swap(hargakirim[j], hargakirim[j + 1]);
                swap(status[j], status[j + 1]);
                swap(lokasi[j], lokasi[j + 1]);
            }
        }
    }
    system("pause");
    system("cls");
    sortingpengiriman();
}


void jne::sortingpengiriman() {
    system("cls");
    cout << "================== SORTING DATA PENGIRIMAN ==============" << endl;
    cout << "1. Sorting dengan No. Resi" << endl;
    cout << "2. Sorting dengan Asal" << endl;
    cout << "3. Sorting dengan Tujuan" << endl;
    cout << "4. Sorting dengan Jenis Kiriman" << endl;
    cout << "5. Kembali ke Menu Utama" << endl;

    int pilih;
    cout << "Masukkan pilihan Anda: ";
    cin >> pilih;

    switch (pilih) {
        case 1:
            sortbyresi();
            break;
        case 2:
            sortbyasal();
            break;
        case 3:
            sortbytujuan();
            break;
        case 4:
            sortbyjeniskirim();
            break;
        case 5:
            admin();
            return;
        default:
            cout << "Pilihan tidak valid!" << endl;
            break;
    }

    system("pause");
    system("cls");
    admin();
}



void jne::pengingatPengiriman() {
    system("cls");
    cout << "================== PENGINGAT PENGIRIMAN ==================" << endl;
    cout << "Pastikan Anda telah mengisi semua data pengiriman dengan benar." << endl;
    cout << "Jika ada kesalahan, silakan perbaiki sebelum melanjutkan." << endl;
    cout << "==========================================================" << endl;
    system("pause");
    system("cls");
    admin();
}


void jne::cariWilayah() {
    system("cls");
    cout << "================== PENCARIAN WILAYAH ==================" << endl;
    string cariWilayah;
    cout << "Masukkan nama wilayah yang ingin dicari: ";
    cin >> cariWilayah;

    bool found = false;
    for (int i = 0; i < jmlhalmtkirim; i++) {
        if (wilayah[i] == cariWilayah) {
            cout << "Wilayah ditemukan: " << wilayah[i] << endl;
            cout << "Harga Pengiriman Normal: Rp." << harganml[i] << "/kg" << endl;
            cout << "Harga Pengiriman Freezer: Rp." << hargafrz[i] << "/kg" << endl;
            cout << "Harga Pengiriman Pecah Belah: Rp." << hargapch[i] << "/kg" << endl;
            cout << "Harga Pengiriman Cargo: Rp." << hargacrgo[i] << "/kg" << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Wilayah tidak ditemukan!" << endl;
    }

    system("pause");
    system("cls");
    admin();
}


void jne::riwayatpengiriman(){
    system("cls");
    cout << "================== RIWAYAT PENGIRIMAN ==================" << endl;
    for (int i = 0; i < jumlahkirim; i++) {
        cout << "==========================================================" << endl;
        cout << " No. Resi      : " << resi[i] << endl;
        cout << " ASAL          : " << asalkir[i] << endl;
        cout << " TUJUAN        : " << tujuankir[i] << endl;
        cout << " PENGIRIM      : " << namapeng[i] << endl;
        cout << " NO PENGIRIM   : " << nopeng[i] << endl;
        cout << " PENERIMA      : " << namarim[i] << endl;
        cout << " NO PENERIMA   : " << norim[i] << endl;
        cout << " JENIS KIRIMAN : " << jeniskirim[i] << endl;
        cout << " DESKRIPSI     : " << des[i] << endl;
        cout << " BERAT         : " << berat[i] << " kg" << endl;
        cout << " TOTAL HARGA   : Rp." << hargakirim[i] << endl;
        cout << " Status        : "<<status[i]<<endl;
        cout << "Lokasi Paket   : "<<lokasi[i]<<endl;
        cout <<"=========================================================="<<endl<<endl;

    }
    system("pause");
    system("cls");
    admin();
}



void jne::statistikPengiriman() {
    system("cls");
    cout << "================== STATISTIK PENGIRIMAN ==================" << endl;
    cout << "Jumlah Pengiriman: " << jumlahkirim << endl;
    cout << "Jumlah Akun User: " << jumlahAkun << endl;
    cout << "Jumlah Alamat Pengiriman: " << jmlhalmtkirim << endl;
    cout << "==========================================================" << endl;
    system("pause");
    system("cls");
    admin();
}

void jne::estimasiWaktuPengiriman() {
    system("cls");
    cout << "================== ESTIMASI WAKTU PENGIRIMAN ==============" << endl;
    cout << "Estimasi waktu pengiriman tergantung pada jarak dan jenis layanan." << endl;
    cout << "Contoh estimasi waktu:" << endl;
    cout << "- Normal: 3-5 hari kerja" << endl;
    cout << "- Freezer: 2-4 hari kerja" << endl;
    cout << "- Pecah belah: 3-6 hari kerja" << endl;
    cout << "- Cargo: 5-10 hari kerja" << endl;
    cout << "==========================================================" << endl;
    system("pause");
    system("cls");
    admin();
}


//fungsi fitur utama
void jne::utama(){
    int p;
    cout<<"HALO SILAHKAN PILIH MASUK SEBAGAI ADMIN ATAU USER";
    cout<<endl;
    cout<<"1.  ADMIN"<<endl;
    cout<<"2.  USER"<<endl;
    cout<<"0.  Keluar"<<endl;
    do{
        inputValid = true; 
        cout << "Masukkan pilihan Anda : ";
        
        // Cek jika input bukan angka
        if (!(cin >> pil)) {
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            system("cls");
            cout << "Input tidak valid! Harap masukkan angka.\n";
            utama();
            inputValid = false;
            continue;
        }
        switch(pil){
            case 1:
            system("cls");
            cout<<"=================== HALO SELAMAT DATANG ADMIN ==================="<<endl;
            logadmin(user,pw);
            break;
            case 2:
            
            cout<<"============ HALO SELAMAT DATANG PELANGGAN SETIA JNE ============"<<endl;
            loguser();
            break;
            case 0:
            system("cls");
            cout<<"Program selesai"<<endl;
            return;
            
            break;
            default:
            cout<<"Pilihan tidak valid\n"<<endl;
            inputValid = false;
            break;
            
        }

        if (!inputValid) {
            continue;
        }

    }while(pil!=0);

}


//untuk menampilkan fitur fitur admin
void jne::admin(){

    cout<<"\nPILIH YANG ANDA INGIN LAKUKAN "<<endl;
    cout<<"1.  Menampilkan alamat Pengiriman "<<endl;
    cout<<"2.  Edit Data Pengiriman "<<endl;
    cout<<"3.  Edit Status dan Lokasi Pengiriman"<<endl;
    cout<<"4.  Managemen Akun user"<<endl;
    cout<<"5.  Melihat Data Pengiriman"<<endl;
    cout<<"6.  Statistik Pengiriman"<<endl;
    cout<<"7.  Riwayat Pengiriman"<<endl;
    cout<<"8.  Estimasi Waktu Pengiriman"<<endl;
    cout<<"9. Cari Wilayah Pengiriman"<<endl;
    cout<<"10. Pengingat Pengiriman"<<endl;
    cout<<"11. Sorting Data Pengiriman"<<endl;
    cout<<"12. Export Data Pengiriman ke File"<<endl;
    cout<<"13. Import Data Pengiriman dari File"<<endl;
    cout<<"14.  Kembali Ke Halaman Utama"<<endl;
    cout<<"0.  Keluar"<<endl;

    int pil;
    bool inputValid;
    do{
        inputValid = true; 
        cout << "Masukkan pilihan Anda : ";
        
        // Cek jika input bukan angka
        if (!(cin >> pil)) {
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Buang input salah
            cout << "Input tidak valid! Harap masukkan angka.\n";
            userr();
            inputValid = false;
            continue;
        }
    
        switch(pil){
            case 1:
            system("cls");
            displ();
            system("pause");
            system("cls");
            admin();
            break;
    
            case 2:
            system("cls");
            pilpngrm();
            break;
    
            case 3:
            system("cls");
            editstus();
            break;
    
            case 4:
            system("cls");
            menejakunus();
            break;
    
            case 5:
            system("cls");
            cekdat();
            break;

            case 6:
            system("cls");
            statistikPengiriman();
            break;

            case 7:
            system("cls");
            riwayatpengiriman();
            break;

            case 8:
            system("cls");
            estimasiWaktuPengiriman();
            break;

            case 9:
            system("cls");
            cariWilayah();
            break;

            case 10:
            system("cls");
            pengingatPengiriman();
            break;

            case 11:
            system("cls");
            sortingpengiriman();
            break;

            case 12:
            system("cls");
       //     exportDataPengiriman();
            break;

            case 13:
            system("cls");
        //    importDataPengiriman();
            break;

            case 14:
            system("cls");
            utama();
            break;

            case 0:
            system("cls");
            cout<<"Program selesai "<<endl;
            exit(0);
    
            default:
            cout<<"Inputan salah mohon input ulang"<<endl;
            inputValid = false;
            break;
    
        }
        if (!inputValid) {
            continue;
        }

    }while(pil!=0);
   

}


//menampilkan fitur  user
void jne::userr() {
    cout << "\nHALO PELANGGAN SETIA JNE PILIH YANG ANDA INGIN LAKUKAN " << endl;
    cout << "1. Melakukan Pengiriman " << endl;
    cout << "2. Melihat Status Pengiriman " << endl;
    cout << "3. Melihat Resi Pengiriman" << endl;
    cout << "4. Info Pengaduan" << endl; 
    cout <<"5. Cek Estimasi Biaya Pengiriman"<<endl;
    cout<<"6. Cek Estimasi Waktu Pengiriman"<<endl;
    cout<<"7. Cek Promo Pengiriman"<<endl;
    cout<<"8. Simuasi Tracking Pengiriman"<<endl;
    cout << "9. Kembali ke Halaman Utama" << endl;
    cout << "0. Keluar" << endl;
    
    int pil;
    
    
    do {
        inputValid = true; // Asumsikan input valid
        cout << "Masukkan pilihan Anda : ";
        
        // Cek jika input bukan angka
        if (!(cin >> pil)) {
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Input tidak valid! Harap masukkan angka.\n";
            userr();
            inputValid = false;
            continue;
        }
    
        switch(pil) {
            case 1:
                system("cls");
                uskirim();
                break;
            case 2:
                system("cls");
                cekstatus();
                break;
            case 3:
                system("cls");
                cariresi();
                break;
            case 4:
                pengaduan();
                break;
            case 5:
                system("cls");
                utama();
                break;
            case 0:
                system("cls");
                cout << "Program selesai " << endl;
                return;
            default:
                cout << "Pilihan tidak valid! Silakan coba lagi.\n";
                inputValid = false;
                break;
        }
        
        
        if (!inputValid) {
            continue;
        }
        
    } while (pil != 0);
}


//input login admin
bool jne::logadmin(string user, string pw){

    string inputUser;
    string inputPw;
    cout<<"=========================================================="<<endl;
    cout<<"                       SILAHKAN LOGIN                     "<<endl;
    cout<<"=========================================================="<<endl;
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"Mohon Masukkan Username Anda :";
    cin>> inputUser;
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"Masukkan Password Anda       :";
    cin>> inputPw;
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"=========================================================="<<endl;

    if((inputUser == "Admin" || inputUser == "admin" || inputUser == "ADMIN") && 
       (inputPw == "237" || inputPw == "203")) {

        cout<<"ANDA TELAH BERHASIL MASUK"<<endl;
        system("pause");
        system("cls"); 
        admin();
        return true;

    } 
    else {
        cout<<"Username atau Password anda salah\n"<<endl;
        system("pause");
        system("cls");
        return logadmin(user,pw);
       
    }

}


//fungsi pilih edit data
void jne::pilpngrm() {
    while(true) {
        system("cls");
        cout << "\n\nEDIT APA YANG INGIN DI LAKUKAN" << endl;
        cout << "1. Menambah Alamat Pengiriman" << endl;
        cout << "2. Mengganti data Yang Sudah Ada" << endl;
        cout << "3. Hapus Alamat" << endl;
        cout << "0. Kembali" << endl;

        cout << "Masukkan pilihan Anda: ";
        if (!(cin >> pil)) {
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Input tidak valid! Harap masukkan angka.\n";
            continue;
        }

        switch(pil) {
            case 1:
                system("cls");
                datahargakirim();
                return;  
                
            case 2:
                system("cls");
                editprgm();
                return;  
                
            case 3:
                system("cls");
                hapusalamat();
                return; 
                
            case 0:
                system("cls");
                admin();
                //pilpngrm();
                return; 
                
            default:
                cout << "Pilihan tidak valid! Silakan coba lagi.\n";
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                break;
        }
    }
}


//fungsi menambah alamat pengiriman oleh admin
void jne::datahargakirim(){

    string ya;
    cout<<"=========================================================="<<endl;
    cout<<"======= PENAMBAHAN DATA HARGA DAN ALAMAT PENGIRIMAN ======"<<endl;;
    cout<<"=========================================================="<<endl;
    
    cout<<"!!! ALAMAT AWAL ADALAH KOTA YOGYAKARTA "<<endl;
    do{
       
        cout<<"\nMasukkan Alamat Tujuan ke- "<<jmlhalmtkirim+1<<" : ";
        cin>>wilayah[jmlhalmtkirim];
        while(true){
            cout<<"Masukkan Harga Pengiriman Barang normal/KG : ";
            if (!(cin >> harganml[jmlhalmtkirim])) {
                cin.clear(); 
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                cout << "Input tidak valid! Harap masukkan angka.\n";
                continue;  // Tidak perlu rekursi, cukup continue
            }else{
                break;
            }
        }
       
        while(true){
            cout<<"Masukkan Harga Pengiriman Pecah belah/KG : ";
            if (!(cin >> hargapch[jmlhalmtkirim])) {
                cin.clear(); 
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                cout << "Input tidak valid! Harap masukkan angka.\n";
                continue;  // Tidak perlu rekursi, cukup continue
            }else{
                break;
            }
        }
        
        while(true){
            cout<<"Masukkan Harga Pengiriman Makanan Freezer/KG : ";
            if (!(cin >> hargafrz[jmlhalmtkirim])) {
                cin.clear(); 
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                cout << "Input tidak valid! Harap masukkan angka.\n";
                continue;  // Tidak perlu rekursi, cukup continue
            }else{
                break;
            }
        }

        while(true){
            cout<<"Masukkan Harga Pengiriman Barang Cargo/KG : ";
            if (!(cin >> hargacrgo[jmlhalmtkirim])) {
                cin.clear(); 
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                cout << "Input tidak valid! Harap masukkan angka.\n";
                continue;  // Tidak perlu rekursi, cukup continue
            }else{
                break;
            }
        }
       
        while(true){
            cout<<"Apakah Ingin Mengedit Data Yang Lain (ya/tidak) : ";cin>>ya;
        if(ya=="ya"|| ya=="YA"){
            cout<<"";
            jmlhalmtkirim++;
        }else if(ya=="tidak"||ya=="tidak"){
            system("cls");
            cout<<"\nPenambahan alamat berhasil"<<endl;
            jmlhalmtkirim++;
            displ();
            system("pause");
            system("cls");
            pilpngrm();
            break;
        }else{
            system("cls");
            cout<<"Inputan tidak valid "<<endl;
            break;
        }

        }
       
        
    } while(true);

}


//menampilkan semua alamat pengirim dari jogja ke wilayah lainya
void jne::displ(){
    cout<<"ALAMAT PENGIRIMAN YANG TERSEDIA  "<<endl;

    for(int i=0;i<jmlhalmtkirim;i++){
        cout<<"\n=========================================================="<<endl;
        cout<<i+1<<". Dari Yogyakarta - "<<wilayah[i]<<endl;
        cout<<" Jenis Pengiriman :"<<endl;
        cout<<" - Pengiriman Normal : Rp."<<harganml[i]<<"/kg"<<endl;
        cout<<" - Pengiriman Freezer : Rp."<<hargafrz[i]<<"/kg"<<endl;
        cout<<" - Pengiriman Barang pecah : Rp."<<hargapch[i]<<"/kg"<<endl;
        cout<<" - Pengiriman Cargo : Rp."<<hargacrgo[i]<<"/kg"<<endl;
        cout<<"----------------------------------------------------------"<<endl;

    }
}


//fungsi edit data pengiriman oleh admin
void jne::editprgm(){

    cout<<"Apakah anda benar ingin mengedit? (ya/tidak): ";
    cin>>ya;

    if(ya=="tidak" || ya=="Tidak"){
        pilpngrm();
    }else if(ya=="ya"||ya=="YA"){
        //pilpngrm();
    }else{
        cout<<"Inputan tidak valid"<<endl;
        editprgm();
    }

   //pemilihan pengiriman yang akan di edit
   displ();
    do{
        
        cout<<"0. Kembali"<<endl;
        cout<<"Pilih Yang Akan di Edit :";
        cin>>pil;

        if(pil-1 <pil && pil !=0){
            cout<<"\n\nAWAL :"<<endl;
            cout<<"_______________________________________________"<<endl;
            cout<<pil<<". Dari Yogyakarta - "<<wilayah[pil-1]<<endl;
            cout<<" Jenis Pengiriman :"<<endl;
            cout<<" - Pengiriman Normal : Rp."<<harganml[pil-1]<<"/kg"<<endl;
            cout<<" - Pengiriman Freezer : Rp."<<hargafrz[pil-1]<<"/kg"<<endl;
            cout<<" - Pengiriman Barang pecah : Rp."<<hargapch[pil-1]<<"/kg"<<endl;
            cout<<" - Pengiriman Cargo : Rp."<<hargacrgo[pil-1]<<"/kg"<<endl;
            cout<<"_______________________________________________"<<endl;
            cout<<"\nEDIT"<<endl;
            cout<<"_______________________________________________"<<endl;
            cout<<"Edit pengiriman nomor "<<pil<<". Dari Yogyakarta - ";
            cin>>wilayah[pil-1];
            cout<<" Jenis Pengiriman :"<<endl;
            cout<<" - Edit Pengiriman Normal : Rp.";
            cin>>harganml[pil-1];
            cout<<" - Edit Pengiriman Freezer : Rp.";
            cin>>hargafrz[pil-1];
            cout<<" - Edit Pengiriman Barang pecah : Rp.";
            cin>>hargapch[pil-1];
            cout<<" - Edit Pengiriman Cargo : Rp.";
            cin>>hargacrgo[pil-1];
            cout<<"_______________________________________________"<<endl;
            
            cout<<"DATA BERHASIL DI UBAH "<<endl;
            while(true){
                cout<<"Apakah Ingin Mengedit Data Yang Lain (ya/tidak) : ";cin>>ya;
                if(ya=="ya"|| ya=="YA"){
                    system("cls");
                    cout<<endl;
                }else if(ya=="tidak"||ya=="tidak"){
                    system("cls");
                    pilpngrm();
                }else{
                    cout<<"Inputan tidak valid "<<endl;
                    break;
                }

            }
            
            
        }else if(pil==0){
            cout<<"Program Edit Selesai"<<endl;
            system("cls");
            //admin();
            pilpngrm();
        }

    }while(true);
   
}


//fungsi untuk menghapus alamat pengiriman oleh admin
void jne::hapusalamat(){

    displaysortwil();
    cout<<"0. Keluar"<<endl;
    while(true){
        cout<<"Pilih Alamat yang mau di hapus :";
        if (!(cin >> pil)) {
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Input tidak valid! Harap masukkan angka.\n";
            continue;  
            break;
        }
    }
    

    if(pil==0){
        system("cls");
        pilpngrm();
    }

    for(int i=pil-1;i<=jmlhalmtkirim;i++){
        wilayah[i]=wilayah[i+1];
        harganml[i]=harganml[i+1];
        hargafrz[i]=hargafrz[i+1];
        hargacrgo[i]=hargacrgo[i+1];
        hargapch[i]=hargapch[i+1];
    }
    jmlhalmtkirim--;

    cout<<endl;
    displaysortwil();
    system("pause");
    system("cls");
    pilpngrm();
    
}


//fungsi edit status oleh admin
void jne::editstus(){
    system("cls");
    
    bool si=false;

    cout<<"Apakah anda Benar Ingin Mengedit? (ya/tidak) :";
    cin >>ya;

    if(ya=="tidak" ||ya=="Tidak"){
        system("cls");
        admin();
    }

    system("cls");
    string cari;
    cout<<"====== MENGEDIT STATUS PENGIRIMAN======"<<endl;
    cout<<"Masukkan Resi Anda : ";
    cin>>cari;

    for(int i=0;i<jumlahkirim;i++){
        if(resi[i]==cari){
            si=true;
            system("cls");
            dislpysttus(i);
            cout<<"----------------------------------------------------"<<endl;
            cout<<"\n------------- EDIT STATUS USER -------------"<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cin.ignore();
            cout<<"Status            : | ";getline(cin,status[i]);
            cout<<"----------------------------------------------------"<<endl;
            cout<<"Lokasi Paket Anda : | ";getline(cin,lokasi[i]);
            cout<<"----------------------------------------------------"<<endl;
            system("cls");
            dislpysttus(i);
            break;
        }

    }

    if(!si){
        cout<<"Nomor Resi tidak di temukan!"<<endl;
    }
    system("pause");
    system("cls");
    admin();

}


//fungsi menampilkan status pengiriman
void jne::dislpysttus(int index){
    cout<<"----------------------------------------------------"<<endl;
    cout<<"\n-------------STATUS PAKET USER SEKARANG-------------"<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"\nStatus  :         | "<<status[index]<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"Lokasi Paket Anda : | "<<lokasi[index]<<endl;
    cout<<"----------------------------------------------------"<<endl;
    
}


//manajemen akun user
void jne::menejakunus(){

    system("cls");
    do{
    cout<<"============ MANAGEMEN AKUN USER ============"<<endl;
    cout<<"1.  Lihat Daftar Akun"<<endl;
    cout<<"2.  Hapus Akun"<<endl;
    cout<<"3.  Kembali"<<endl;
    cout<<"Pilih Opsi di Atas : ";
    cin>>pil;

    if(pil ==1){
        cout<<"\nDaftar Akun User:"<<endl;
        for(int i=0;i<jumlahAkun;i++){
            cout<<i+1<<". "<<ususer[i]<<endl;
        }
        system("pause");
        system("cls");

    }else if(pil ==2){
        int akun;
        cout<<"\nDaftar Akun User:"<<endl;
        for(int i=0;i<jumlahAkun;i++){
            cout<<i+1<<". "<<ususer[i]<<endl;
        }
        cout<<"Masukkan nomor Akun yang Ingin dihapus : ";
        cin>>akun;

        if(akun>0 && akun <=jumlahAkun){
            for(int i=akun -1;i<jumlahAkun;i++){
                ususer[i]= ususer[i+1];
                pwuser[i]=pwuser[i+1];
            }
            jumlahAkun--;
            cout<<"\n============ AKUN TERSEDIA SETELAH DIHAPUS ============"<<endl;
            for(int i=0;i<jumlahAkun;i++){
                cout<<i+1<<". "<<ususer[i]<<endl;
            }
            cout<<"Akun berhasil di hapus!"<<endl;

        }else{
            cout<<"Nomor akun tidak valid"<<endl;
        }
        system("pause");
        system("cls");
        
    }else{
        system("pause");
        system("cls");
        admin();
    }

    }while(pil!=3);
    
}

//untuk mengecek data user oleh admin 
void jne::cekdat(){
    system("cls");
    cout << "======================================================" << endl;
    cout <<"=================== Data Pengirim ===================="<<endl;
    for(int i=0;i<jumlahkirim;i++){
     
    cout << "======================================================" << endl;
    cout << " No. Resi      : " << resi[i] << endl;
    cout << "------------------------------------------------------" << endl;
    cout << " ASAL          : " << asalkir[i] << endl;
    cout << " TUJUAN        : " << tujuankir[i] << endl;
    cout << "------------------------------------------------------" << endl;
    cout << " PENGIRIM      : " << namapeng[i] << endl;
    cout << " NO PENGIRIM   : " << nopeng[i] << endl;
    cout << " PENERIMA      : " << namarim[i] << endl;
    cout << " NO PENERIMA   : " << norim[i] << endl;
    cout << "------------------------------------------------------" << endl;
    cout << " JENIS KIRIMAN : " << jeniskirim[i] << endl;
    cout << " DESKRIPSI     : " << des[i] << endl;
    cout << " BERAT         : " << berat[i] << " kg" << endl;
    cout << "------------------------------------------------------" << endl;
    cout << " Status        : "<<status[i]<<endl;
    cout << "Lokasi Paket   : "<<lokasi[i]<<endl;
    cout << "------------------------------------------------------" << endl;
    cout << "======================================================\n\n" << endl;
    }

    system("pause");
    system("cls");
    admin();
}

//===============================================================================
//==============================BATAS FITUR ADMIN================================
//===============================================================================

//fungsi buat akun user
void jne::buataknuser(){
    cout<<"=========================================================="<<endl;
    cout<<"                        REGISTER AKUN                     "<<endl;
    cout<<"=========================================================="<<endl;
    
    do{
        cout<<"----------------------------------------------------------"<<endl;
        cout<<"Username anda (MAX 12 Karakter): |";
        cin>>ususer[jumlahAkun]; 
        cout<<"----------------------------------------------------------"<<endl;
        cout<<"Password anda (MAX 8 Karakter) : |";
        cin>>pwuser[jumlahAkun]; 
        cout<<"----------------------------------------------------------"<<endl;
        cout<<"Konvirmasi Password            : |";
        cin>>pwuser1[jumlahAkun]; 
        cout<<"----------------------------------------------------------"<<endl;
        cout<<"=========================================================="<<endl;
        if(pwuser[jumlahAkun]!=pwuser1[jumlahAkun]){

            cout<<"Sandi Anda Berbeda dengan Yang Sebelumnya"<<endl;
        }
        else {

            cout<<"\n\nPendaftaran akun anda berhasil"<<endl;
            jumlahAkun++;
            system("cls");
            loginuser(user,pw);
            
            
            break;
        }
        system("pause");
            system("cls");
    } while(true);

}

//pengondisian input login
void jne::loguser(){

    string akn;
    cout<<"Apakah Anda Sudah Memiliki Akun? (belum/sudah): ";
    cin>>akn;
    system("cls");

    if(akn=="belum"||akn=="Belum"){
        system("cls");
        buataknuser();
        
    } else if(akn=="sudah"&&akn=="sudah"){
        system("cls");
        loginuser(user,pw);
    } else{
        cout<<"Yang anda inputkan salah"<<endl;
        loguser();
    }
}


//fungsi login akun user
bool jne::loginuser(string user,string pw){

    cout<<"=========================================================="<<endl;
    cout<<"                       LOGIN USER                         "<<endl;
    cout<<"=========================================================="<<endl;
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"Masukkan Username : ";
    cin>>user;
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"Masukkan Password : ";
    cin>>pw;
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"=========================================================="<<endl;

    for(int k=0;k<jumlahAkun;k++){
        if(user == ususer[k] && pw == pwuser[k]){
            cout<<"ANDA TELAH BEERHASIL MASUK"<<endl;
            system("pause");
            system("cls");
            userr();
            
            return true;
        }
    }
   
    // Periksa semua akun
    for(int i = 0; i < jumlahAkun; i++) { 
        if( pw != pwuser[i]){
            cout<<"Password Anda Salah "<<endl;
            cout<<"Apakah anda Ingin Riset Password dan atau tidak? (ya/tidak) : ";
            cin>>ya;
    
            if(ya=="ya" || ya=="YA"){
                system("cls");
                resetpw();
            }else if(ya=="tidak" ||ya=="TIDAK"){
                system("cls");
                return loginuser(user,pw);
            }else{
                cout<<"Inputan tidak Valid"<<endl;
                loginuser(user,pw);
            }
        }
    }
    cout<<"Username Atau Password Anda tidak Terdaftar"<<endl;
    cout<<"1. Kembali "<<endl;
    cout<<"2. Lanjut"<<endl;
    cout<<"Masukkan pilihan : ";cin>>pil;

    switch(pil){
        case 1:
        system("cls");
        utama();
        break;
        case 2:
        system("cls");
        loginuser(user,pw);
        break;
        default:
        cout<<"Pilihan tidak valid!!"<<endl;
        break;
    }
    return loginuser(user,pw);
    

}

//fungsi mereset password user
void jne::resetpw(){

    system("cls");
    string cekus;
    cout<<"==========================================================="<<endl;
    cout<<"                      RESET PASSWORD                       "<<endl;
    cout<<"==========================================================="<<endl;

    cout<<"Masukkan Username Anda Sebelumnya :";
    cin>>cekus;

    for(int i=0;i<jumlahAkun;i++){
        if(cekus == ususer[i]){
            do{
                cout<<"\nMasukkan Password Baru Anda :";
            cin>>pwuser[i];
            cout<<"Konfirmasi Password Baru Anda :";
            cin>>pwuser1[i];
            
            if(pwuser[i]!=pwuser1[i]){

                cout<<"Password Anda Berbeda dengan Yang Sebelumnya"<<endl;
            }else{
                cout<<"========================================="<<endl;
                cout<<"       RESET PASWORD ANDA BERHASIL       "<<endl;
                cout<<"========================================="<<endl;
                system("pause");
                system("cls");
                loginuser(user,pw);
            }
            
            }while(true);

        }
    }       
}

//user melakukan perngiriman
void jne::uskirim(){

    string ya;
     cout<<"HALO COSTUMER SELAMAT DATANG "<<endl;
     cout<<"Apakah Anda Benar Ingin Melakukan Pengiriman ? (ya/tidak) : ";
     cin>>ya;

    if(ya =="tidak" || ya =="Tidak"){
        userr();
    }else if(ya=="ya"||ya=="YA"){
        system("cls");
        cout<<" BAIK LAH COSTUMER"<<endl; 
        
    }else{
        cout<<"Inputan anda tidak valid"<<endl;
        uskirim();
    }

    do{
        pilihkirim();
       
        return;

    }while(true);   
        
}

//fungsi menampilkan bublle sort wilayah
void jne::displaysortwil(){
    system("cls");
    cout<<"=========================================================="<<endl;
    cout<<"              ALAMAT PENGIRIMAN YANG TERSEDIA             "<<endl;
    cout<<"=========================================================="<<endl;
    for(int i=0; i<jmlhalmtkirim; i++) {
        cout<<i+1<<". "<<wilayah[i]<<endl;
    }
}

//fungsi buuble sort untuk urut wilayah
void jne::bubblesortwila(){
    
    for(int i=0;i<jmlhalmtkirim-1;i++){
        for(int j=0;j<jmlhalmtkirim-i-1;j++){
            if(wilayah[j]>wilayah[j+1]){
                string tempwil=wilayah[j];
                wilayah[j]=wilayah[j+1];
                wilayah[j+1]=tempwil;

                int tempharnml=harganml[j];
                harganml[j]=harganml[j+1];
                harganml[j+1]=tempharnml;

                int tempharfrz=hargafrz[j];
                hargafrz[j]=hargafrz[j+1];
                hargafrz[j+1]=tempharfrz;

                int tempharpch=hargapch[j];
                hargapch[j]=hargapch[j+1];
                hargapch[j+1]=tempharpch;

                int tempharcrg=hargacrgo[j];
                hargacrgo[j]=hargacrgo[j+1];
                hargacrgo[j+1]=tempharcrg;


            }
        }
    }
    displaysortwil();
}


//pilih  alamat pengiriman
void jne::pilihkirim() {
    while(true) {
        bubblesortwila();
        cout << "0. Kembali ke Halaman Sebelumnya" << endl;
        cout << "\nMasukkan Alamat Tujuan (no): ";
        
        // Input validation
        if (!(cin >> alm)) {
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Input tidak valid! Harap masukkan angka.\n";
            continue;  // Tidak perlu rekursi, cukup continue
        }

        // Handle kembali ke menu sebelumnya
        if (alm == 0) {
            system("cls");
            userr();
            return;
        }

        if (alm < 1 || alm > jmlhalmtkirim) {
            cout << "Pilihan tidak valid! Harap masukkan angka antara 1 dan " << jmlhalmtkirim << endl;
            continue;
        }

        pilrim();
        system("cls");
        indatakirim();
        break;  
    }
}



//pilih jenis pengiriman
void jne::pilrim() {
    cout << "\n\n" << ". Dari Yogyakarta - " << wilayah[alm-1] << endl;
    cout << " Jenis Pengiriman :" << endl;
    cout << "1. Pengiriman Normal : Rp." << harganml[alm-1] << "/kg" << endl;
    cout << "2. Pengiriman Freezer : Rp." << hargafrz[alm-1] << "/kg" << endl;
    cout << "3. Pengiriman Barang pecah : Rp." << hargapch[alm-1] << "/kg" << endl;
    cout << "4. Pengiriman Cargo : Rp." << hargacrgo[alm-1] << "/kg" << endl;
    
    while (true) {
        cout << "Masukkan pilihan Anda (1-4, 0 untuk keluar): ";
        
        // Cek jika input bukan angka
        if (!(cin >> pil)) {
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Input tidak valid! Harap masukkan angka.\n";
            continue;
        }

        if (pil == 0) {
            system("cls");
            cout << "Program selesai" << endl;
            userr();
            
        }

        if (pil < 1 || pil > 4) {
            cout << "Pilihan tidak valid!" << endl;
            continue;
        }

        switch(pil) {
            case 1:
                jeniskirim[jumlahkirim] = "Pengiriman normal";
                break;
            case 2:
                jeniskirim[jumlahkirim] = "Pengiriman freezer";  
                break;
            case 3:
                jeniskirim[jumlahkirim] = "Pengiriman Barang anti pecah";
                break;
            case 4:
                jeniskirim[jumlahkirim] = "Pengiriman Cargo";
                break;
        }
        
        
        break;
    }
}


//fungsi input data pengiriman
void jne::indatakirim(){
    system("cls");
    cout<<"=========================================="<<endl;
    cout<<"===INPUT DATA PENGIRIMAN==="<<endl;
    cout<<"=========================================="<<endl;

    asalkir[jumlahkirim]="Yogyakarta";
    tujuankir[jumlahkirim]= wilayah[alm-1];


    cin.ignore();
    cout<<"------------------------------------------"<<endl;
    cout<<"============= Data Pengirim =============="<<endl;
    cout<<"------------------------------------------"<<endl;
    cout<<"Nama Pengirim : "; 
    getline(cin,namapeng[jumlahkirim]);
    while(true){
        cout<<"No HP Pengirim : ";
        if (!(cin >> nopeng[jumlahkirim])) {
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Input tidak valid! Harap masukkan angka.\n";
            continue;  // Tidak perlu rekursi, cukup continue
        }else{
            break;
        }
    }
    
   
    cin.ignore();
    cout<<"------------------------------------------"<<endl;
    cout<<"============= Data Penerima =============="<<endl;
    cout<<"------------------------------------------"<<endl;
    cout<<"Nama Penerima : "; 
    getline(cin,namarim[jumlahkirim]);
    while(true){
        cout<<"No HP Penerima : ";
        if (!(cin >> norim[jumlahkirim])) {
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Input tidak valid! Harap masukkan angka.\n";
            continue;  // Tidak perlu rekursi, cukup continue
        }else{
            break;
        }
    }
   
   
    cin.ignore();
    cout<<"------------------------------------------"<<endl;
    cout<<"============== Data Barang ==============="<<endl;
    cout<<"------------------------------------------"<<endl;
    cout<<"Deskripsi Barang : ";
    getline(cin,des[jumlahkirim]);
    while(true){
        cout<<"Berat barang : ";
        if (!(cin >> berat[jumlahkirim])) {
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Input tidak valid! Harap masukkan angka.\n";
            continue;  // Tidak perlu rekursi, cukup continue
        }else{
            break;
        }
    }
   
    hargakirim[jumlahkirim] = hitungharga(pil,alm-1,berat[jumlahkirim]);

    string konresi= to_string(hitungresi());
    resi[jumlahkirim] = konresi;

    status[jumlahkirim]="On Proses";

    lokasi[jumlahkirim]="Pesanan di proses di lokasi sortir Yogyakarta DC";

    system("cls");
    tampilresi(jumlahkirim);

    jumlahkirim++;
    system("pause");
    system("cls");
    userr();

}


//Fungsi untuk menampilkan data No resi
int jne::hitungresi(){
    srand(time(0));
    int temp = 1000000000 + rand() % 9000000000; 
    cout<<"Debug  "<< temp<<endl;
    return temp;
}

//fungsi untuk menghitung harga barang perliko
int jne::hitungharga(int jenis, int index, float berat){
    int hargaperkg =0;

    switch(jenis){
        case 1:
        hargaperkg = harganml[index];
        break;
        case 2:
        hargaperkg = hargafrz[index];
        break;
        case 3:
        hargaperkg = hargapch[index];
        break;
        case 4:
        hargaperkg = hargacrgo[index];
        break;
    }
    return hargaperkg * berat;

}

//fungsi cek status pengiriman
void jne::cekstatus(){
    system("cls");
    string cari;
    bool si=false;
    cout<<"====== MENGECEK STATUS PENGIRIMAN======"<<endl;
    cout<<"Masukkan Resi Anda : ";
    cin>>cari;

    for(int i=0;i<jumlahkirim;i++){
        if(resi[i]==cari){
            si=true;
            system("cls");
            cout<<"===================================================="<<endl;
            cout<<"-------------STATUS PAKET ANDA SEKARANG-------------"<<endl;
            cout<<"===================================================="<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"Status  :         | "<<status[i]<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"Lokasi Paket Anda : | "<<lokasi[i]<<endl;
            cout<<"----------------------------------------------------"<<endl;
            break;
        }

    }

    if(!si){
        cout<<"Nomor Resi tidak di temukan!"<<endl;
    }
    system("pause");
    system("cls");
    userr();
    
}


//fungsi cek resi memakai konsep searching linear
void jne::cariresi(){
    system("cls");
    string cari;
    bool res=false;
    cout<<"==== CEK RESI PENGIRIMAN ===="<<endl;
    cout<<"Masukkan Nomor Resi : ";
    cin>>cari;

    for(int i=0;i<jumlahkirim;i++){
        if(resi[i]==cari){
            res= true;
            system("cls");
            tampilresi(i);
            system("pause");
            userr();
            break;
        }
    }

    if(!res){
        cout<<"Nomor Resi tidak di temukan!"<<endl;
        system("pause");
    system("cls");
    userr();
    return;
    }
}


//fungsi untuk menampilkan resi pengiriman
void jne::tampilresi(int index){

    cout << "\n======================================================" << endl;
    cout << "                   RESI PENGIRIMAN JNE                 " << endl;
    cout << "======================================================" << endl;
    cout << " No. Resi      : " << resi[index] << endl;
    cout << "------------------------------------------------------" << endl;
    cout << " ASAL          : " << asalkir[index] << endl;
    cout << " TUJUAN        : " << tujuankir[index] << endl;
    cout << "------------------------------------------------------" << endl;
    cout << " PENGIRIM      : " << namapeng[index] << endl;
    cout << " NO PENGIRIM   : " << nopeng[index] << endl;
    cout << " PENERIMA      : " << namarim[index] << endl;
    cout << " NO PENERIMA   : " << norim[index] << endl;
    cout << "------------------------------------------------------" << endl;
    cout << " JENIS KIRIMAN : " << jeniskirim[index] << endl;
    cout << " DESKRIPSI     : " << des[index] << endl;
    cout << " BERAT         : " << berat[index] << " kg" << endl;
    cout << "------------------------------------------------------" << endl;
    cout << " TOTAL HARGA   : Rp." << hargakirim[index] << endl;
    cout << "======================================================" << endl;
    cout << "         Terima kasih telah menggunakan JNE           " << endl;
    cout << "======================================================" << endl;

}

//fungsi info pengaduan
void jne::pengaduan(){

    string ya;
    system("cls");
    cout<<"==============================================="<<endl;
    cout<<"                INFO PENGADUAN                 "<<endl;
    cout<<"==============================================="<<endl;
    cout<<endl;

    cout<<"-----------------------------------------------"<<endl;
    cout<<"Nomor Telepon  :  +62-856-0972-7086"<<endl;
    cout<<"-----------------------------------------------"<<endl;
    cout<<"Email  :  2400018237@webmail.uad.ac.id"<<endl;
    cout<<"Email  :  2400018203@webmail.uad.ac.id"<<endl;
    cout<<"-----------------------------------------------"<<endl;
    cout<<"Instagram  :  Bayo_Ang1n"<<endl;
    cout<<"Instagram  :  mhfttri"<<endl;
    cout<<"-----------------------------------------------"<<endl;
    cout<<"Twitter  :  @faridhar-12"<<endl;
    cout<<"-----------------------------------------------"<<endl;
    cout<<"==============================================="<<endl;

    cout<<"Ketik ya Jika Sudah : ";
    cin>>ya;

    if(ya=="ya"||ya=="Ya"){
        cout<<"Baiklah Terimakasih"<<endl;
        system("pause");
        system("cls");
        userr();
    }else{
        pengaduan();
    }
}




int main(){
    
    string user;
    string pw;
    jne x;
    x.utama();
   
    return 0;
}