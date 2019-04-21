#include <iostream>
#include <fstream>
using namespace std;
int main(){
	
	int pilih,jumlah;
	char data[30][30],namafile[30];
	cout<<"input nama file = ";cin>>namafile;
	do
	{
	
	cout<<"menu"<<endl;
	cout<<"1. INPUT "<<endl;
	cout<<"2. OUTPUT "<<endl;
	cout<<"\npilih = ";
	cin>>pilih;
	if (pilih==1)
	{
	cout<<"Masukkan jumlah data = ";cin>>jumlah;
	ofstream masuk;
	masuk.open(namafile,ios::app);
	for (int i = 0; i < jumlah; i++){
	cout<<"masukkan nama = ";cin>>data[i];
	masuk<<data[i]<<endl;
	}
	masuk.close();
	}
	else
	{
	ifstream keluar;
	keluar.open(namafile);
	int i = 0;
	while (keluar>>data[i])
	{
	cout<<" nama = ";
	cout<<data[i]<<endl;
	i++;
	
	}
	keluar.close();
	}
	} while (true);
	
	
}
