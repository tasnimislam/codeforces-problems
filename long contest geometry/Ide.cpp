#include<bits/stdc++.h>
#include<tgmath.h>
#include<algorithm>
#define pi 2*acos (0)

using namespace std;

int main()
{
    long long int N;
    cin>>N;
    for(long long int i=0; i<N; i++)
    {
        double R1,R2,d,W,S;
        cin>>R1>>R2>>d>>W>>S;
        
        double R=std::max(R1, R2);
        double r=std::min(R1, R2);
        
        //volume part
        double volumeIntersection=(pi*(R+r-d)*(R+r-d)*(d*d+2*d*r-3*r*r+2*d*R+6*r*R-3*R*R))/(12*d);
        double volume=(4*pi*(R*R*R+r*r*r))/3-volumeIntersection;
        printf("%0.4lf ",volume);
        
        //surface area part
        double x=R*R-r*r+d*d/(2*d);
        double surface=2*pi*(R*(R+x)+r*(r+d-x));
        printf("%0.4lf\n",surface);
        
        //float/sink
        double sSphere=(W/volume);
        if(sSphere>S) printf("The Paired-Sphere Sinks.\n");
        else printf("The Paired-Sphere Floats.\n");
    
    }
    
    return 0;  
    
}