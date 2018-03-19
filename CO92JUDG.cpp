#include<iostream>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long a[n], suma=0, l1=0;
        long long b[n], sumb=0, l2=0;
        for(long long i=0;i<n;i++)
        {
            cin>>a[i];
            suma+=a[i];
            if(a[i]>l1)
                l1=a[i];
        }
        for(long long i=0;i<n;i++)
        {
            cin>>b[i];
            sumb+=b[i];
            if(b[i]>l2)
                l2=b[i];
        }
        suma-=l1;
        sumb-=l2;
        if(suma<sumb)
            cout<<"Alice"<<endl;
        else if(sumb<suma)
            cout<<"Bob"<<endl;
        else
            cout<<"Draw"<<endl;
    }
}