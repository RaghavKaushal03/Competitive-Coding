#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cout<<"Enter a number"<<endl;
	cin>>n;
	int mid = (n+1)/2;
	int p=mid,q=mid;
	cout<<"You entered "<<n<<endl;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++){
			if(j<=p || j>=q){
				cout<<"*";
			}
		
			else{
				cout<<" ";
			}
		}
		if(i<mid){
			p--;
			q++;
		}
		else{
			p++;
			q--;
		}
		cout<<endl;

	}
	return 0;
}