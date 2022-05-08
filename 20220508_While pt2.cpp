#include <iostream>

 using namespace std;
 int main () {
     //menambahkan batas bawah
     //menambahkan batas atas
     //namun batas bawah tidak boleh lebih dari batas atas
     int batasbawah, batasatas ;
     cout<<"masukkan batas bawah";cin>>batasbawah;
     cout<<"masukkan batas atas";cin>>batasatas;
     while (batasbawah++ <batasatas) { 
        cout<<"data ke - "<<batasbawah<<endl;
     }
      
if (batasbawah<batasatas){
 while (batasbawah++ <batasatas){
     cout<<"data ke - "<<batasbawah<<endl;
 }
}
else {
    cout<<"batas bawah tidak boleh lebih dari batas atas"<<endl;
}
return 0;
}
