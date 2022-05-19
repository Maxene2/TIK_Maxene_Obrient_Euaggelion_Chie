#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a,b,temp;
	float nilai, hasil;
	string c[5] = {"","detik","menit","jam","hari"};
	cout<<"1. detik"<<endl<<"2. menit"<<endl<<"3. jam"<<endl<<"4. hari"<<endl;
	while(a<=0 || a>4){
	cout<<"Pilih satuan awal [1-4]: ";
	cin>>a;
	}
	cout<<"Masukkan nilai "<<c[a]<<": ";cin>>nilai;
	cout<<"1. detik"<<endl<<"2. menit"<<endl<<"3. jam"<<endl<<"4. hari"<<endl;
    while(b<=0 || b>4){
	cout<<"Pilih satuan konversi [1-4]: ";
	cin>>b;
    }
    
    if(a==b)
    {
       	cout<<"Hasil Konversi: "<<nilai<<" "<<c[b];
    }
    else if(a<b){
        
        if(a>1){
            nilai=nilai*pow(60,(a-1));
            a=1;
        }
        if(b==4){
            temp=3;
            cout<<"Hasil Konversi: "<<(nilai/pow(60,(temp-a)))/24<<" "<<c[b];
        }
        else{
            cout<<"Hasil Konversi: "<<nilai/pow(60,(b-a))<<" "<<c[b];
        }
    }
    else if(a>b){
        if(a==4){
            nilai=nilai*24*3600;
            temp = b-1;
            cout<<"Hasil: "<<nilai/pow(60,temp)<<" "<<c[b];
        }
        else{
        temp = a-b;
        cout<<"Hasil: "<<nilai*pow(60,temp)<<" "<<c[b];
        }
    }
