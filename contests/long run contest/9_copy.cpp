#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int i=1; i<=T; i++)
    {
        long int ax, ay, bx, by, cnt=0;
        cin>>ax>>ay>>bx>>by;
        for(long int i=ay; i<=by; i=i+c)
        {
            cnt=cnt+1;
        }
        cout<<cnt<<endl;
    }

    return 0;


}
