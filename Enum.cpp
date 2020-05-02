#include<fstream>
using namespace std;

int main (){
ofstream myfile;
myfile.open ("alpro.txt", ios::app);
myfile<<"Saya belajar membuat file";
myfile.close ();
return 0;
}
