#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cout<<"Enter a number"<<endl;
	cin>>n;
	int mid=(n+1)/2;
	cout<<"You entered "<<n<<endl;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++){
			if((i==1 || i==n || j==1 || j==n)||(i>=mid-1&&i<=mid+1&&j>=mid-1&&j<=mid+1)&&(i==mid-1 || i==mid+1 || j==mid-1 || j==mid+1))
			{
				cout<<"*";
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
