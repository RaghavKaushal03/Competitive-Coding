#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,k;
	cout<<"Enter a number"<<endl;
	cin>>n;
	cout<<"You entered "<<n<<endl;
	for(int i=1;i<=n;i++)
	{
		k=1;
		for(int j=1;j<=n;j++){
			if(j<=i){
				cout<<k;
				if(k==1)
					k=0;
				else
					k=1;
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
