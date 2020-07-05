#include<bits/stdc++.h>

using namespace std;

long int gcd(long int a, long int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main()
{
    int T;
    cin>>T;
    for(int i=1; i<=T; i++)
    {
        long int ax, ay, bx, by, gcdBhai, BhagKorbo,ans;
        cin>>ax>>ay>>bx>>by;
        gcdBhai=gcd(abs(ax-bx), abs(ay-by));
        BhagKorbo=abs(ay-by)/gcdBhai;
        ans=abs(ay-by)/BhagKorbo+1;
        cout<<"Case "<<i<<": "<<ans<<endl;
    }
    return 0;


}
