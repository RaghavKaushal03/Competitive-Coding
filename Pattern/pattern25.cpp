#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cout<<"Enter a number"<<endl;
	cin>>n;
	cout<<"You entered "<<n<<endl;
	int mid=(n+1)/2;
	int m=0,k=1;
	for(int i=1;i<=n;i++)
	{
		i<=mid?m++:m--;
		k=m-1;
		for(int j=1;j<=n;j++){
			if(j>=mid+1-m && j<=mid-1+m)
			{
				cout<<((j<mid)?(k++%10):(k--%10));
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
