#include <stdio.h>

int main(void)
{
    // your code goes here
    int t, i, n, b, j,k,w,h,p;
    scanf("%d",&t);
    for (i = 0; i < t; i++)
    {
        scanf("\n%d %d", &n, &b);
        int area=0,found=0;
        for(j=0;j<n;j++){
            scanf("%d %d %d",&w,&h,&p);
            if((w*h)>area && b>=p)
            {
                    area=w*h;         
     
                found=1;
            }


        }
        if (found == 0)
        {
            printf("\nno tablet");
        }
        else
        {
            printf("\n%d",area);
            found=0;
        }
    }
    return 0;
}
