#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int h=0;
	    char arr[n+1];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    
	    for(int i=0;i<n;i++){
	    if(arr[i]==arr[i+1])
	    h++;
	    }
	    cout<<h<<endl;
	    
	}
	return 0;
}
