#include <iostream>
#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int main() {
	// your code goes here
	int i,t,n,x,c,j,k;
	cin>>t;
	for(i=0;i<t;i++){
	   cin>>n>>x>>c;
	    int ar[n];
	    for(j=0;j<n;j++){
	       cin>>ar[j];
	        
	    }
	    sort(ar,ar+n);
	    int sum=0;
	    int max=accumulate(ar,ar+n,sum);
	    for(j=0;j<n;j++){
	         for(k=0;k<=j;k++){
	             ar[k]=x;
	         }
	        int sum=accumulate(ar,ar+n,0);
	             sum-=c*(j+1);
	             if(sum>max){
					 max=sum;
	                 continue;
	             }
	             else{
	                 break;
	             }
	        
	    }
	    cout<<endl<<max;
	}
	return 0;
}
