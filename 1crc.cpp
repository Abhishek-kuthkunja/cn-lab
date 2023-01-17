#include <bits/stdc++.h>
using namespace std;
string xor1(string temp,string divisor)
{
    int len=divisor.length();
    string res="";
    for(int i=1;i<len;i++)
    {
        if(temp[i]==divisor[i])
        {
            res=res+"0";
        }
        else 
        res=res+"1";
    }
    return res;
}
string crc1(string data,string divisor)
{
    int datalen=data.length();
    int divisorlen=divisor.length();
    int n=divisorlen;
    string temp=data.substr(0,divisorlen);
    while(n<datalen)
    {
        if(temp[0]=='1')
        {
            temp=xor1(temp,divisor)+data[n];
        }
        else
        {
            temp=xor1(temp,string(divisorlen,'0'))+data[n];
        }
        n=n+1;
    }
     if(temp[0]=='1')
    {
        temp=xor1(temp,divisor);
    }
    else
    {
        temp=xor1(temp,string(divisorlen,'0'));
    }
    return temp;

    
}
string crc(string data,string divisor)
{
    string data1=data+string(divisor.length()-1,'0');
    string remainder=crc1(data1,divisor);
    return remainder; 
}
int main()
{
    string data,divisor;
    cout<<"enter the data and divisor";
   cin>>data>>divisor;
    string rem=crc(data,divisor);
   string final=data+rem;
   cout<<final<<endl;

   cout<<"reciever side"<<endl;

   string final1=crc(final,divisor);
   cout<<final1;

}
