#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll z=0;
		for(ll i=5;n/i>=1;i*=5)
		{
			z+=n/i;
		}
		cout<<z<<"\n";
	}
	return 0;
}