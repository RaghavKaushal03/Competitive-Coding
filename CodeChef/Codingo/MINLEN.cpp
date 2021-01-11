#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int i=1;
		while(i<s.length())
		{
			if(s[i]==s[i-1])
			{
				s.erase(i-1,2); // this will delete two charachters starting from i-1
				i--;
			}
			else
			    i++;
		}
		cout<<s.length()<<"\n";
	}
}