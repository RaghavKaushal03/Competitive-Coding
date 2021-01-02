#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cout<<"Enter a number"<<endl;
	cin>>n;
	int k;
	cout<<"You entered "<<n<<endl;
	for(int i=1;i<=n;i++)
	{
		k=n-i;
		for(int j=1;j<=n;j++){
			if(j<=n+1-i){
				cout<<k;
				k--;
			}
			else{
				cout<<" ";
				
			}
		}
		cout<<endl;
	}
	return 0;
}