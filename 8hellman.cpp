#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"enter the valid p and g";
    int p,g;
    cin>>p>>g;
    cout<<"enter the secret key of a and b";
    int a,b;
    cin>>a>>b;
    int A,B,aa,bb;
    cout<<"the public key of a and b are";
    aa=pow(g,a);
    A=aa%p;
    bb=pow(g,b);
    B=bb%p;
    cout<<A<<" "<<B;

    int key1,key2,aaa,bbb;
    cout<<"key 1 and key 2 are";
    aaa=pow(B,a);
    key1=aaa%p;
    bbb=pow(A,b);
    key2=bbb%p;

    cout<<key1<<" "<<key2;


}