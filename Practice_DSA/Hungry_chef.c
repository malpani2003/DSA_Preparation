#include <stdio.h>
#include<math.h>

int main(void) {
	int i,t,n,y,x,r;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d %d %d %d",&x,&y,&n,&r);
	    float product;
	    if(x<=r && y<=r){
	        if(n*y<=r){
	            printf("\n0 %d",n);
	        }
	        else{
	            product=n*y;
	            int count=round((product-r)/(y-x));
	            int pnum=n-count;
	            int nnum=0+count;
	            printf("\n%d %d",nnum,pnum);
	            
	        }
	        
	    }else{
	        printf("\n-1");
	    }
	    
	}
	return 0;
}

