#include<stdio.h>
int main(){
    int arr[]={6,7,8,9,10,0,1,2};
    int target=19;
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            for(int k=j+1;k<8;k++){
                if((arr[i]+arr[j]+arr[k])==target){
                    printf("%d %d %d\n",arr[i],arr[j],arr[k]);
                }
                //for(int f=)
            }

        }
    }
}