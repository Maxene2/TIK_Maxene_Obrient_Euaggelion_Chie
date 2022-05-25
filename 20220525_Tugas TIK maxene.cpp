#include <iostream>

using namespace std;

int main()
{
    int x,y,z;
   cout<<"Masukkan nilai x = ";
   cin>>x;
   cout<<"masukkan nilai y = ";
   cin>>y;
   
   z = x;
   x = y;
   y = z;
   
   cout<<"Nilai x adalah = "<<x;
   cout<<endl;
   cout<<"Nilai y adalah = "<<y;
}
