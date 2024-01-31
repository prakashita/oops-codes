// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,m,ans=1;
    scanf("%d %d",&n,&m);
    for(int i=0;i<m/2;i++){
        ans=ans*n;    
    }
    ans=ans*ans;
    if(m%2==0){
        printf("%d",ans);
    }
    else{
        printf("%d",ans*n);
    }

    return 0;
}