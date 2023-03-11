#include <iostream>
#include <string>
using namespace std;
int f[1000010];
int main()
{
    long long n,ks=5000;
    cin>>n;
    f[0]=1;
    for(int i=1;i<=n;++i)
    {
        for(int j=0;j<5000;++j)
        {
            f[j]*=2;
        }
        for(int j=0;j<5000;++j)
        {
            if(f[j]>9)
            {
                f[j+1]+=f[j]/10;f[j]%=10;
            }
        }
    }
    while(f[ks-1]==0)
    {
        ks--;
    }
    for(int i=ks-1;i>=0;--i)
    {
        cout<<f[i];
    }
    return 0;
}