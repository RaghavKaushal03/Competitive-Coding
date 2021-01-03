#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cout<<"Enter a number"<<endl;
	cin>>n;
	cout<<"You entered "<<n<<endl;
	for(int i=1;i<=n;i++)
	{
		char k = 'A';

		for(int j=1;j<=(2*n)-1;j++){
			if(j>=n-i+1 && j<=n+i-1){
				cout<<k;
				j<n?k++:k--;
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
