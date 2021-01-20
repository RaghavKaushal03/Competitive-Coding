#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		string s;
		cin>>s;
		int a=0,b=0,c=0;
		int counta=0,countb=0;
		for(int i =0;i<2*n;i++)
		{
			if(i%2==0)
			{	
				counta++;
				if(s[i]=='1')
					a++;
			}
			else if(i%2!=0)
			{
				countb++;
				if(s[i]=='1')
					b++;
			}
			
			if(a-b>n-countb)
			{
				cout<<i+1<<endl;
				c=1;
				break;
			}
			if(b-a>n-counta)
			{
				cout<<i+1<<endl;
				c = 1;
				break;
			}	
		}
		if(c==0)
		{
			cout<<2*n<<endl;
		}	
	}	
		
	return 0;
}
