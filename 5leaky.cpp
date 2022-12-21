#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"enter the capacity output and number of iteration";
    int cap,out,n,in,store=0;
    cin>>cap>>out>>n;

    while(n!=0)
    {
        cout<<"enter the in ";
        cin>>in;
        if(in<=(cap-store))
        {
            store=store+in;
        }
        else{
            
            cout<<"droped no is "<<(in-(cap-store));
            store=cap;
        }
        store=store-out;

        cout<<store;
    }

}