#include<bits/stdc++.h>
using namespace std;

unsigned long long int factorial(unsigned long long int n)
{
    unsigned long long int fact=1;

    for (unsigned long long int i=1; i<=n; i++)
    {
        fact=fact*i;
    }

    return fact;
}

int factmod (int n, int p) {
	int res = 1;
	while (n > 1) {
		res = (res * ((n/p) % 2 ? p-1 : 1)) % p;
		for (int i=2; i<=n%p; ++i)
			res = (res * i) % p;
		n /= p;
	}
	return res % p;
}

    int main()
    {
        int testCase=0;
        cin>>testCase;
        for(int i=1; i<=testCase; i++)
        {
            unsigned long long int n,c;
            cin>>n;
            cin>>c;
            unsigned long long int result=factmod(n,c);
            //double result=((factorial(n))/(factorial(c)*factorial(n-c)))%1000003;
            cout<<"Case "<<i<<": "<<result<<endl;
            //cout<<n<<" "<<c<<endl;
            //long long int result=1;

        }
    }
