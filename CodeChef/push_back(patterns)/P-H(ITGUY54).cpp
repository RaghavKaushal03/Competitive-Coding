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
			for(int j=1;j<=n;j++)
			{
				if(i==1 || i==n || j==1 || j==n || i==j || j==n-i+1)
					cout<<"1";
				else
					cout<<" ";

			}
			cout<<endl;
		}
		
	}
	return 0;
}