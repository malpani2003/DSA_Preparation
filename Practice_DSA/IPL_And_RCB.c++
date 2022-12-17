#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i,t,x,y,matches_win;
	cin>>t;
	for(i=0;i<t;i++){
	    cin>>x>>y;
        if(x<=y*1){
            cout<<0<<endl;
        }
        else{
            int tie_matches=y*1,win=0;
            while(tie_matches<x){
                tie_matches+=1;
                win++;

            }
            cout<<win<<endl;
        }
	    // matches_win=x/2;
	    // cout<<matches_win<<endl;
	}
	return 0;
	
}
