#include <bits/stdc++.h>
using namespace std;
string divi,data;

string xor1(string a,string b)
{
    int aa=a.length();
    int bb=b.length();
    string res="";
    for(int i=1;i<bb;i++)
    {
        if(a[i]==b[i])
        {
            res=res+"0";
        }
        else
        res=res+"1";

    }
    return res;
}
string crc()
{
    int dl=data.length();
    int divil=divi.length();
    string effective=data+string(divil-1,'0');
    int n=divil;
    string final=effective.substr(0,divil);
    while(n<effective.length())
    {
        // cout<<final;
        if(final[0]=='1')
        {
            final=xor1(divi,final)+effective[n];
        }
        else
        {
            final=xor1(string (dl,'0'),final)+effective[n];
        }
        n=n+1;
    }
     if(final[0]=='1')
        {
            final=xor1(divi,final);
        }
        else
        {
            final=xor1(string (dl,'0'),final);
        }
        return final;


}

 string encode()
 {
   string remainder=crc();
   cout<<"remainder "<<remainder<<endl;
   return data+remainder;
 }
int main()
{
    cout<<"enter the data and divisor";
   
    cin>>data>>divi;
   string word= encode();
   cout<<word;

}