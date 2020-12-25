#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<int> s;
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        if(n==1){
          s.insert(x);  
        }
        else if (n==2) {
            s.erase(x);
        }
        else if (n==3) {
            //cout << (s.find(x) == s.end() ? "No" : "Yes") << endl;
            if(s.end()==s.find(x))
                cout<<"No"<<endl;
            else
                cout<<"Yes"<<endl;

        }
    }
    return 0;
}




