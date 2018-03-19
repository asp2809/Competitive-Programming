#include<iostream>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long count=1, ctr=1;
        if(n==0)
        {
            cout<<"0"<<endl;
            break;
        }
        long long f=1,d;
        while(1)
        {
            d=f+(f+1);
            if(n>=f && n<=d)
            {
                long long diff1=n-f;
                long long diff2=d-n;
                if(diff1>diff2)
                {
                    count=count+1+diff2;
                }
                else
                    count=count+diff1;
                break;
            }
            else
            {
                f=d;
                count++;
            }
        }
        cout<<count<<endl;
    }
}