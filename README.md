# praktikum8
Nama : Viktor M Sianturi
kelas : TI.18.C.2
Nim : 311810676

1.fungsi fibonacci dengan cara iteratif
2.fungsi fibonacci dengan cara rekursif 
3.contoh lain fungsi fibonacci iteratif dan rekursif

FUNGSI FIBONANCI ITERATIF

Berikut pseucodenya

#include <iostream>

using namespace std;

int iteratif (int suku, int a, int b, int c)
{
a=0, b=1;

if (suku == 1) return b;
if (suku == 0) return a;

else{
for(int i=2; i<=suku; i++){

c = a + b;
a = b;
b = c;
}
return c;
}
}

int main()
{
int suku, a, b,c;

cout<<"Masukkan nilai suku ke-: ";

cin>>suku;
cout<<"\nBilangan fibonaccinya untuk "<<suku<<" adalah ";
cout<< iteratif ( suku,  a,  b,  c);
return 0;
}

berikut hasil screenshotnya
![alt text](https://github.com/Viktorsianturi/praktikum8/blob/master/latihan1/Screenshot%20(26).png)

berikut flowchart nya 
![alt text](https://github.com/Viktorsianturi/praktikum8/blob/master/flowchart%20fungsi%20fibonacci%20iteratif.jpg)

FUNGSI FIBONACCI DENGAN CARA REKURSIF #include <iostream>

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

berikut hasil screenshotnya
![alt text](https://github.com/Viktorsianturi/praktikum8/blob/master/latihan2/Screenshot%20(27).png)

berikut flowchartnya
![alt text](https://github.com/Viktorsianturi/praktikum8/blob/master/Flowchart%20Faktorial%20rekursif.jpg)

