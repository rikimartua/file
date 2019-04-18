#include <iostream>
#include <fstream>
using namespace std;
int main(){
	
	int pilih,jumlah;
	string data;
	char namafile[10];
	cout<<"input nama file = ";cin>>namafile;
	do
	{
	
	cout<<"menu"<<endl;
	cout<<"1. INPUT "<<endl;
	cout<<"2. OUTPUT "<<endl;
	cout<<"3. EXIT "<<endl;
	cout<<"\npilih = ";
	cin>>pilih;
	if (pilih==1)
	{
	ofstream masuk;
	masuk.open(namafile,ios::app);
	cout<<"Masukkan jumlah data = ";
	cin>>jumlah;
	for (int i = 0; i < jumlah; i++)
	{
	cout<<"masukkan nama = ";
	cin>>data;
	masuk<<data<<endl;
	}
	masuk.close();
	}
	else
	if(pilih==2){
	ifstream keluar;
	keluar.open(namafile);
	for (int j = 0; j < jumlah; j++)
	{
	if(keluar>>data){
	
	cout<<" nama = ";
	cout<<data<<endl;
	}
	}
	keluar.close();
	}
	else
	return 0;
	
	
	} while (true);
	
}
