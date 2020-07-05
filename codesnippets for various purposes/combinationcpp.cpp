#include<bits/stdc++.h>
using namespace std;

int combo(int n, int k)
{
    if (k==1) return n;
    else if(k==n || k==0) return 1;
    else return combo(n-1, k-1)%1000003+combo(n-1, k)%1000003;
}

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n,k;
        cin>>n;
        cin>>k;
        cout<<"Case "<<i+1<<": "<<combo(n,k)%1000003<<endl;
    }
    return 0;
}


