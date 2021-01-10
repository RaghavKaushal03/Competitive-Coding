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
			k=i;
			for(int j=2;j<=n+1;j++)
			{
				cout<<k;
				k++;
			}
			cout<<endl;
		}
		
	}
	return 0;
}