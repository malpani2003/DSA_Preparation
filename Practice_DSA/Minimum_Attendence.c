#include <stdio.h>

int main(void) {
	// your code goes here
	int t,i,n,j;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("\n%d",&n);
	    int absent=0;
        char attendence_before[n];
        scanf("%s",&attendence_before);
        for(j=0;j<n;j++){
            // printf("\n%c",attendence_before[j]);
            if(attendence_before[j]=='0'){
	            absent+=1;
	        }
        }
            // printf("%d",absent);
	        int availbe_days=120-absent;
	        int attendence=(availbe_days/120.0)*100;
	        if(attendence>=75){
	            printf("\nYES");
	        }
	        else{
	            printf("\nNO");
	        }
	}
	return 0;
}

