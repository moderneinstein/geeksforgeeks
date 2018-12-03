#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=n; i>0; i--){
    	int l = n;
    	for(int j=0; j<n; j++){
    		for(int k=0; k<i; k++)  cout<<l<<" ";
        	l--;
    	}
    	cout<<"$";
	}
	return 0;
}