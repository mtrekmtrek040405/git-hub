#include<iostream>
using namespace std;



int main(){
	
	string nama, ttl,kelamin,alm,desa,kec,agama,status,pekerjaan,kewar,berlaku;
	char gol;
	long long int nik;
	int rt,rw;
	cout<<"masukan nik :";
	cin>>nik;
	cout<<"masukkan Nama :";
	cin>>nama;
	cout<<"masukkan tempat lahir :";
	cin>>ttl;
	cout<<"jenis kelamin :";
	cin>>kelamin;
	cout<<"masukan alamat :";
	cin>>alm;
	cout<<"masukkan golong darah :";
	cin>>gol;
	cout<<"masukkan rt :";
	cin>>rt;
	cout<<"masukkan rw :";
	cin>>rw;
	cout<<"masukkan desa:";
	cin>>desa;
	cout<<"masukkan kecamatan:";
	cin>>kec;
	cout<<"masukkan agama:";
	cin>>agama;
	cout<<"masukkan status kawin:";
	cin>>status;
	cout<<"masukkan pekerjaan:";
	cin>>pekerjaan;
	cout<<"masukkan kewarganegaraan:";
	cin>>kewar;
	cout<<"masukkan berlaku hingga:";
	cin>>berlaku;
	system("pause");
	system("cls");
	
	cout<<"========================================="<<endl;
	cout<<"|                        KTP             |"<<endl;
	cout<<"========================================="<<endl;
	cout<<"NIK               :"<<nik<<endl;
	cout<<""<<"					|"<<endl;
	cout<<"Nama              :"<<nama<<endl;
	cout<<"Tempat/Tgl lahi   :"<<ttl<<endl;
	cout<<"Jenis kelamin     :"<<kelamin<<endl;
	cout<<"Alamat            :"<<alm<<endl;
	cout<<"Gol               :"<<gol<<endl;
	cout<<"\tRT/RW     :"<<rt<<"/"<<rw<<endl;
	cout<<"\tKel/ Desa :"<<desa<<endl;
	cout<<"\tKecamatan :"<<kec<<endl;
	cout<<"Agama             :"<<agama<<endl;
	cout<<"Status perkawina  :"<<status<<endl;
	cout<<"Pekerjaan         :"<<pekerjaan<<endl;
	cout<<"Kewarganegaraan   :"<<kewar<<endl;
	cout<<"Berlaku Hingga    :"<<berlaku<<endl;
	cout<<"========================================="<<endl;


	

	
}
