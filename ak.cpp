#include<math.h>
#include<iostream>
using namespace std;

int Todecimal(int n,int b){
    int dec=0;
    int lastdigit;
    int x=1;
    while (n>0)
    {  
        lastdigit=n%10;
        dec+=lastdigit*x;
        x*=b;
        n/=10;
    }
    return dec;
}

int main(){
    int n,b;
    cout<<"Enter number - ";
    cin>>n;
    cout<<"Enter base - ";
    cin>>b;
    cout<<"Decimal No. -";
    cout<<Todecimal(n,b)<<endl;
    return 0;

}



