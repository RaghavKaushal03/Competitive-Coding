#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		ll k;
		int d0, d1, sum;
		cin>>k>>d0>>d1;
		sum = d0 + d1;

		// assert(k >=2 and k <= 1e12);
		// assert(d0 >= 1 and d0 <= 9);
		// assert(d1 >= 0 and d1 <= 9);
		
		ll ans = sum;
		ll ms = (2*sum) % 10 + (4*sum) % 10 + (8*sum) % 10 + (6*sum) % 10;

		k -= 2;

		if(k > 0) 
		{
			ans += (sum % 10);
			k--;
		}

		ans += (k / 4) * ms;

		k %= 4;

		int p = 2;
		while(k--) 
		{
			ans += (p*sum) % 10;
			p = (p * 2) % 10;
		}

		if((ans % 3) == 0)	
			cout<<"YES\n";
		else
		 	cout<<"NO\n";

	}
	return 0;
}