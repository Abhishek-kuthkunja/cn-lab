#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p,q,e,d=1,n;
    cout<<"enter the two prime number";
    cin>>p>>q;
    int phi=(p-1)*(q-1);
    n=p*q;
    for(int i=2;i<phi;i++)
    {
        if((phi/i)!=0)
        {
            e=i;
            break;
        }
    }
    while(d<phi)
    {
        if((d*e)%n==1)
        {
            break;
        }
        else
        d=d+1;
    }
    e=7;
    int plain,cipher,aa;
    cout<<"enter the plain text";
    cin>>plain;
  cipher=fmod(pow(plain,e),n);
  cout<<cipher;
    return 0;

}