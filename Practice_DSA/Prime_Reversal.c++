#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i,t,n,j;
	string a,b;
	cin>>t;
	for(i=0;i<t;i++){
	    cin>>n;
	    cin>>a;
	    cin>>b;
	    int azero=0,aone=0,bzero=0,bone=0;
	    for(j=0;j<n;j++){
	       if(a[j]==1){
	           aone+=1;
	       }   
	       else{
	           azero+=1;
	       }
	       if(b[j]==1){
	           bone+=1;
	       }   
	       else{
	           bzero+=1;
	       }
	    }
        // cout<<azero<<" "<<bzero<<" "<<aone<<" "<<bone;
	    if(azero==bzero && aone==bone){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	    
	}
	return 0;
}
