#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int i,t,n,j;
	cin>>t;
	for(i=0;i<t;i++){
	    cin>>n;
	    int chef[n],glove[n],front=0,back=0;
	    for(j=0;j<n;j++){
	        cin>>chef[j];
	    }
	    for(j=0;j<n;j++){
	        cin>>glove[j];
	    }
	    for(j=0;j<n;j++){
            // cout<<chef[j]<<glove[j]<<glove[n-1-j]<<endl;
	        if(chef[j]<=glove[j]){
	            // cout<<"frontif\n";
                front=1;
	        }
	        else{
	            // cout<<"frontelse\n";
                break;
	            front=0;
	        }
        }
        for(j=0;j<n;j++){

        
	        if(chef[j]<=glove[n-1-j]){
	            // cout<<"backif\n";

	            back=1;
	        }
	        else{
	            // cout<<"backelse\n";
                break;
	            back=0;
	        }
        
	    }

        // cout<<front<<endl<<back;
        if(front==1 && back==1){
            cout<<endl<<"Both";
        }
        else if(front==1 && back==0){
            cout<<endl<<"Front";
        }
        else if(front==0 && back==1){
            cout<<endl<<"Back";
        }
        else if(front==0 && back==0){
            cout<<endl<<"None";
        }
	    
	    
	}
	
	return 0;
}
