#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int kali(int i, int j){
 if(j==0)
  return 0;
 else
  return i+kali(i,j-1);
}

main() {
 int a,b;
 cout<<"Bentuk perkalian (a,n) ke dalam defini penjumlahan secara rekursif"<<endl;
 cout<<"masukkan bilangan pertama : ";
 cin>>a;
 cout<<"masukkan bilangan kedua : ";
 cin>>b;
 cout<<"hasil = "<<kali(a,b);

 return 0;
}
