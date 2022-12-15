#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i,t,n;
	cin>>t;
	string s;
	for(i=1;i<=t;i++){
	    cin>>n;
	    cin>>s;
        int max_pos=0,max=1,j;
	for(j=0;j<n-1;j++){
		// cout<<s[j]<<endl;
	    if(s[j]=='1' && s[j+1]=='0'){
                max+=1;
		}
	}
        cout<<max<<endl;
	}
	return 0;
}
