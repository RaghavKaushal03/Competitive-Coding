#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int

int isoperand(char c)
{
	if (c >= 'A' && c <= 'Z')
		return 1;
	else
		return 0;
}
int precedence(char c)
{
	
	if (c== '^')
		return 3;
	else if (c=='*' || c=='/')
		return 2;
	else if (c=='+' || c=='-')
		return 1;
	else
		return -1;

}
int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
	    int n;
	    string s;
	    string ns;
	    cin>>n>>s;
	    stack <char> st;
	    st.push('N'); 
	    for (int i=0;i<n;i++)
	    {
	    	if(isoperand(s[i])){
	    		ns+=s[i];
	    	}
	    	else if(s[i]=='(')
		    		st.push('(');
		    else if(s[i]==')')
		    {
		   		while(st.top() != 'N' && st.top() != '(') 
            	{ 
                	char a = st.top(); 
                	st.pop(); 
               		ns += a; 
            	} 
            	if(st.top() == '(') 
            	{ 
                	char a = st.top(); 
                	st.pop(); 
            	}
		    }
	    	else
	    	{
	    		while (st.top() != 'N' && precedence(s[i]) <= precedence(st.top())){
					char c = st.top();
					st.pop();
					ns += c;
				}
				st.push(s[i]);
	    	}
	    	
	    }
	    while(st.top() != 'N')
	    {
	    	char a = st.top(); 
	    	st.pop();
	    	ns += a;
	    }
	    cout<<ns<<endl;

	}
	return 0;
}
