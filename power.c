#include<stdio.h>
int power(int n,int m){
    int ans=1;
    if(m==1){
        ans=n;
        return ans;
    }
    else{
        ans= ans*(power(n,m/2));
        ans=ans*ans;
        if(m%2==0){
            return ans;
        }
        else{
            return ans*n;
        }
    }

}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int ans=power(a,b);
    printf("%d",ans);
}