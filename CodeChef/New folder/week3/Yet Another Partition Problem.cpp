#include<bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// your code goes here
	
	int n, q;
	cin >> n >> q;
    // n->5,q->5
	int arr[n+1];
    set<int> sub;
    cin >> arr[1];
    // a[6]={0,2,0,0,0,0}
    sub.insert(1);
    // sub = {1}
	for(int i = 2; i <= n; i++)
	{
	    cin >> arr[i];
        // a[6] = {0,2,2,7,14,14}
	    if(arr[i]%arr[i-1]!=0)
	        sub.insert(i);
            //sub = {1,3}
    }
    int p, j, v;
    for(int i = 0; i < q; i++)
    {
        cin >> p;
        // p -> 1
        if(p == 1)
        {
            cin >> j >> v;
            // j->1,   2
            // v->3,   6
            if(j < n)
            {
                if(arr[j+1]%arr[j]==0 && arr[j+1]%v != 0) 
                // a[2]%a[1]==0 && a[2]%3 !=0
                    sub.insert(j+1);
                    // sub -> {1,3,2}
                else if(arr[j+1]%arr[j]!=0 && arr[j+1]%v==0)
                    sub.erase(j+1);
            }
            if(j > 1)
            {
                if(arr[j]%arr[j-1] != 0 && v%arr[j-1]==0)
                    sub.erase(j);
                if(arr[j]%arr[j-1]==0 && v%arr[j-1] != 0)
                    sub.insert(j);
            }
             arr[j] = v;
             // a[6]={3,2,7,14,14}
        }
        else
        {
            cin >> j;
            auto c = sub.upper_bound(j);
           
            cout << *(--c) << "\n";
        }
    }
	
	return 0;
}
