//solution for the JUNE CHALLENGE Question NAICHEF
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    long long n, a, b, counta=0, countb=0;
    cin>>n>>a>>b;
    long long arr[n];
    //loop for input as well as counting the number of a's and b's occuring 
    for(long long i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==a)
            counta++;
        else if(arr[i]==b)
            countb++;
    }
    //for the output to be 10 digits after the decimal
    cout<<setprecision(10)<<fixed;
    cout<<(float(counta)/float(n))+(float(countb)/float(n))<<endl;
}