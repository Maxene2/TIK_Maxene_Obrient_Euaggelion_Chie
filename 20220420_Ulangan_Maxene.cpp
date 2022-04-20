//nilai akhir 30% + nilai tugas 30% + nilai uas 40% jika salah satu dari nilai lebih dari 100 program, program akan berhenti dengan statement
//tidak boleh lebih dari 100

#include <iostream>

using namespace std;

int main()
{
   string value;
   value = "tidak boleh lebih dari 100";
    int a;
    cout<<"masukan nilai tugas = ";cin>>a;
  
    int b;
    cout<<"masukan nilai pts = ";cin>>b;
    int c;
    cout<<"masukan nilai uas = ";cin>>c;
    
    
    int hasil;
    if(hasil >100){
    cout<<value<<endl;
    hasil = 0.3 * a + 0.3 * b + 0.4* c;
    if (hasil < 100){
        cout<<hasil<<endl;
    }
    
 
    }
   
    }
