#include <stdio.h>
int main(){
    int n,k,a[100],i=0,r=0;
    scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i = 0; i < n; i++){
        if (a[i]>=a[k-1] && a[i]>0)
        {
            r++;
        }
    }
    printf("%d\n",r);
    
    return 0;
}