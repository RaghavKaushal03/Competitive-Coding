#include <bits/stdc++.h>
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
		ll n,max=0;
		cin>>n;
		while(n--)
		{
			ll s,v,p,cost;
			cin>>s>>p>>v;
			s++;
			cost = (ceil(p/s)*v);
			if( cost > max)
				max=cost;
		}
		cout<<max<<endl;
	}
	return 0;
}