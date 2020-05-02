#include <iostream>
using namespace std;
union mhs {
	int kelas;
	long long int stb;
};
int main (){
union mhs data;
data.kelas = 2;
data.stb = 13020190096;
cout<<"Kelas : "<<data.kelas<<endl<<"Stambuk : "<<data.stb;
return 0;
}
