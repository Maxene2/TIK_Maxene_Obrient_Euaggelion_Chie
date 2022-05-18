#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a,b;
    float nilai;
    string c[5] = {"","detik","menit","jam","hari"};
    cout<<"Pilih Satuan awal"<<endl;
    cout<<"1. detik"<<endl;
    cout<<"2. menit"<<endl;
    cout<<"3. jam"<<endl;
    cout<<"4. hari"<<endl;
    cout<<"Pilih satuan: ";
    cin>>a;
    cout<<"Masukan nilai: ";cin>>nilai;
    cout<<"Pilih Konversi"<<endl;
    cout<<"1. detik"<<endl;
    cout<<"2. menit"<<endl;
    cout<<"3. jam"<<endl;
    cout<<"4. hari"<<endl;
    cout<<"Pilih konversi: ";
    cin>>b;
    if(a<b){
        int temp = b-a;
        cout<<"Hasil: "<<nilai/pow(60,temp)<<" "<<c[b];
    }else if(a>b){
        int temp = a-b;
        cout<<"Hasil: "<<nilai*pow(60,temp)<<" "<<c[b];
    }else if(a==b){
        cout<<"Hasil: "<<a<<" "<<c[a];
    }
}
