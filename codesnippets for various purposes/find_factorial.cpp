#include<bits/stdc++.h>
using namespace std;
int findFactorial(int n) {
  int factorial = 1;
  for (int i = 1; i <= n; i++) {
    factorial *= i;
    factorial %= 1000003;
  }
  return factorial;
}

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n,k,combo;
        cin>>n;
        cin>>k;
        combo=(findFactorial(n)/(findFactorial(k)*findFactorial(n-k)))%1000003;
        cout<<"Case "<<i+1<<": "<<combo<<endl;

    }
    return 0;
}


