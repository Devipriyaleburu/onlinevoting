#include<stdio.h>
int main(){
    int n;
    int total=0;
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<n;i++){
        if(ar[i]>1000){
        total+=(((ar[i]-1000)*10)/100);
        }
    }
    printf("%d",total," ");

}