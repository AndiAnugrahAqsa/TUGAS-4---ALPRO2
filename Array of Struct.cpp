#include<iostream>
using namespace std;

struct mhs {
	char nama [20];
	int stb;
	float nilai;
};

int main (){
	mhs data_mahasiswa[2];
	for (int i=0;i<2;i++){
	cout<<"Data Mahasiswa "<<i+1;
	cout<<"\nNama : "; cin>>data_mahasiswa[i].nama;
		cout<<"Stambuk : "; cin>>data_mahasiswa[i].stb;
	cout<<"Nilai : "; cin>>data_mahasiswa[i].nilai;
}
	cout<<endl;
	for (int j=0; j<2; j++){
	cout<<"Data Mahasiswa"<<j+1;
	cout<<"\nNama : "<<data_mahasiswa[j].nama<<endl;
	cout<<"Stambuk : "<<data_mahasiswa[j].stb<<endl;
	cout<<"Nilai : "<<data_mahasiswa[j].nilai<<endl;
}
	return 0;
}
