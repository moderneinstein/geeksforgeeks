#include <iostream>
#include <stack>
#include <utility>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while (t--){
	    stack <pair<long long, int>> s;
	    int n;
	    cin>>n;
	    long long a[n];
	    for (int i=0; i<n; i++) cin>>a[i];
	    long long output[n] = {}, j;
	    for (int i=0; i<n; i++){
	        
	        if (s.empty()){
	            s.push(make_pair(a[i], i));
	            continue;
	        }
	        
	        j = i;
	        while (!s.empty() && s.top().first<a[i]){
	            output[s.top().second] = a[i];
	            s.pop();
	        }
	        
	        s.push (make_pair(a[i], i));
	        
	    }
	    for (int i=0; i<n; i++)
	        if (!output[i])
	            cout<<"-1 ";
	        else
	            cout<<output[i]<<" ";
	    cout<<"\n";
	}
	return 0;
}
