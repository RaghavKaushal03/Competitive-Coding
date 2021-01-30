#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    ll sum=0,ans=0;
	    ll l=2;
	    ll r=3;
	    cin>>n;
	    if(n<5)
	    ans = 0;
	    else
	    {
	        do
	        {
	            //cout<<"l-->"<<l<<" r-->"<<r;
	            sum=l+r;
	            //cout<<"sum-->"<<sum;
	            if(isPrime(sum) && isPrime(r))
                {
                    ans++;
                }
	            r=sum;
	        }while(l+r<=n);
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
