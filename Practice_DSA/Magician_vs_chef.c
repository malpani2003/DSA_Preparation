#include <stdio.h>

int main(void) {
	// your code goes here
	int i,t,j,n,x,s,a,b,k;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d %d %d",&n,&x,&s);
	    int ar[n],pos;
	    for(j=0;j<n;j++){
	        if(j==x-1){
	            ar[j]=1;
	        }
	        else{
	            ar[j]=0;
	        }
	    }
        for(j=0;j<n;j++){
            printf(" %d ",ar[j]);
        }
	    for(j=0;j<s;j++){
	        scanf("\n%d %d",&a,&b);
	        int temp=ar[a-1];
	        ar[a-1]=ar[b-1];
	        ar[b-1]=temp;
            for(k=0;k<n;k++){
            printf(" %d ",ar[k]);
        }
	        
	    }
	    for(j=0;j<n;j++){
	        if(ar[j]==1){
	            pos=j;
	        }
	    }
	    printf("\n%d",pos+1);
	}
	return 0;
}

