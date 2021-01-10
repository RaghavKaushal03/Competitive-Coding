#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n,k=1;
		cin>>n;
		for(int i=2;i<=n+1;i++)
		{
			k=1;
			for(int j=2;j<=n+1;j++)
			{
				cout<<k;
				if(k==0)
					k=1;
				else
					k=0;
			}
			cout<<endl;
		}
		
	}
	return 0;
}