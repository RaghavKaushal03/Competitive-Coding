#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,i,k,flag=1;
	cout<<"Enter a number"<<endl;
	cin>>n;
	cout<<"You entered "<<n<<endl;
	for(i=1,k=0;i<=2*n-1;i++)
	{
		if(i<n-k)
			cout<<" ";
		else
		{
			if(flag)
				cout<<"*";
			else
				cout<<" ";
			flag=1-flag;
		}
		if(i==n+k)
		{
			k++;
			cout<<endl;
			if(i==2*n-1)
				break;
			i=0;
			flag=1;
		}
		
		
	}
	return 0;
}
