#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n,k=0;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			if(i%2!=0)
				k=0;
			else
				k=1;
			for(int j=1;j<=n;j++)
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