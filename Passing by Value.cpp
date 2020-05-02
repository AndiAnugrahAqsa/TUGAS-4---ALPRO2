#include<iostream>
using namespace std;

struct mhs {
	char nama [20];
	int stb;
	float nilai;
};
void tampilkan(struct mhs st){
	cout<<"Nama : "<<st.nama<<endl;
	cout<<"Stambuk : "<<st.stb<<endl;
	cout<<"Nilai : "<<st.nilai<<endl;
}
int main (){
	mhs data_mahasiswa;
	cout<<"Nama : "; cin>>data_mahasiswa.nama;
		cout<<"Stambuk : "; cin>>data_mahasiswa.stb;
	cout<<"Nilai : "; cin>>data_mahasiswa.nilai;
	cout<<endl;
	tampilkan (data_mahasiswa);
	return 0;
}
