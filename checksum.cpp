#include <bits/stdc++.h>
using namespace std;
 char sum[10];
void cal(char a[20],char b[20])
{
   
    char carry='0';
    cout<<strlen(a);
    for(int i=strlen(a)-1;i>=0;i--)
    {
       // cout<<sum;
        if(a[i]=='0' && b[i]=='0' && carry=='0')
            {
                sum[i]='0';
                carry='0';
            }
            else if(a[i]=='0' && b[i]=='0' && carry=='1')
            {
                sum[i]='1';
                carry='0';
            }
            else if(a[i]=='0' && b[i]=='1' && carry=='0')
            {
                sum[i]='1';
                carry='0';
            }
            else if(a[i]=='0' && b[i]=='1' && carry=='1')
            {
                sum[i]='0';
                carry='1';
            }
            else if(a[i]=='1' && b[i]=='0' && carry=='0')
            {
                sum[i]='1';
                carry='0';
            }
            else if(a[i]=='1' && b[i]=='0' && carry=='1')
            {
                sum[i]='0';
                carry='1';
            }
            else if(a[i]=='1' && b[i]=='1' && carry=='0')
            {
                sum[i]='0';
                carry='1';
            }
            else if(a[i]=='1' && b[i]=='1' && carry=='1')
            {
                sum[i]='1';
                carry='1';
            }
            else
                break;
            

    }
 
}
int main()
{
    cout<<"enter the str1 and str2";
    char str1[20],str2[20];
    char com[6];
    cin>>str1>>str2;
    cal(str1,str2);
    cout<<sum<<endl;
    for(int i=0;i<strlen(sum);i++)
    {
        if(sum[i]=='1')
        {
            com[i]='0';
        }
        else
        com[i]='1';
    }
    
}