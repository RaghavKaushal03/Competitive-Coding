#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cout<<"Enter a number"<<endl;
	cin>>n;
	int k=0;
	// let z = (n+1)/2;
	cout<<"You entered "<<n<<endl;
	for(int i=1;i<=n;i++)
	{
		i<=(n+1)/2?k++:k--;
		for(int j=1;j<=(n+1)/2;j++){
			if(j<=k){
				cout<<"*";
			}
			else{
				cout<<" ";
				
			}
		}
		cout<<endl;
	}
	return 0;
}