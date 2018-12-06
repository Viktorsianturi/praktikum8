#include <iostream>
using namespace std;

int factorial(int);
int main()
{
    int i;

    cout<<"masukkan bilangan bulat positif: ";
    cin>>i;

    if (i<0)
    cout<<"bukan bilangan bulat";
    else
    cout<<i<<" faktorial adalah: "<<factorial(i)<<endl;

    return 0;
}
int factorial(int i) // fungsi faktorial iteratif
{
    int result=1;
    for (int n=1; n<=i; n++)
    {
        result *= n;
    }
    return result;
}
