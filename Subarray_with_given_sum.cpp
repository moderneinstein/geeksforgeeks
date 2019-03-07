#include <iostream>
#define ull unsigned long long
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n, s, l=0, r=-1;
		cin>>n>>s;
		ull a[n];
		for(int i=0; i<n; i++)	cin>>a[i];
		ull sum = 0;
		for(int i=0; i<n+1; i++){
			if(sum == s){	r=i;	break;	}
			if(sum > s){	sum -= a[l++];	i--;	continue;	}
			sum += a[i];
		}
		if(r==-1)	cout<<"-1\n";
		else	cout<<l+1<<" "<<r<<"\n";
	}
    return 0;
}
