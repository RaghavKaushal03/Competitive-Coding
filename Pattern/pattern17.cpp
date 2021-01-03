#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cout<<"Enter a number"<<endl;
	cin>>n;
	int p=(n+1)/2,q=(n+1)/2;
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
		if(i<(n+1)/2){
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



// <---- REDUCED VARIABLES  + LESS LINES SOLUTION---->
// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
// 	int n;
// 	cout<<"Enter a number"<<endl;
// 	cin>>n;
// 	int k=0;
// 	cout<<"You entered "<<n<<endl;
// 	for(int i=1;i<=n;i++)
// 	{
// 		i<=(n+1)/2?k++:k--;
// 		for(int j=1;j<=n;j++){
// 			if(j<=(n+1)/2-k+1 || j>=(n+1)/2+k-1){
// 				cout<<"*";
// 			}
// 			else{
// 				cout<<" ";
// 			}
// 		}
// 		cout<<endl;
// 	}
// 	return 0;
// }
