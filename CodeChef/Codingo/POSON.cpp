#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(int argc, char const *argv[])
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll cnt=0;
		string s1,s2,d1,d2;
		cin>>s1;
		cin>>s2;
		d1=s1;
		d2=s2;
		sort(s1.begin(),s1.end());
		sort(s2.begin(),s2.end());
		if(s1!=s2)
		{
			cout<<"No"<<endl;
		}
		else
		{
			for(int i=0;i<d1.length();i++)
			{
				if(d1[i]!=d2[i])
					cnt++;
			}
			cout<<"Yes "<<cnt/2<<endl;
		}
	}
	return 0;
}