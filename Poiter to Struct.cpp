#include <iostream>
using namespace std;
struct mhs {
	char nama [20];
	long long int stb;
};
int main (){
struct mhs data {"Aqsa",13020190096};
struct mhs *ptr;
ptr = &data;
cout<< data.nama<<" "<< data.stb<<endl;
cout<< ptr->nama<<" "<< ptr->stb;
return 0;
}
