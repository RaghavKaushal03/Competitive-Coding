#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,k,num;
	char c;
	cout<<"Enter a number"<<endl;
	cin>>n;
	cout<<"You entered "<<n<<endl;
	for(int i=1;i<=n;i++)
	{
		k=1;
		num=1;
		c='A';
		for(int j=1;j<=2*n-1;j++){
			if((j>=n-i+1 && j<=n+i-1)&&(k==1))
			{	
				if(i%2!=0)
				cout<<num++;
				else
				cout<<c++;
				
				k=0;
			}
			else
			{
				cout<<" ";
				k=1;

			}
		}
		cout<<endl;
	}
	return 0;
}
