#include<stdio.h>
int main(){
    int n;
    printf("eneter");
    scanf("%d",&n);
    int num[n];
    printf("enter ");
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    int target;
    printf("emter");
    scanf("%d",&target);
    printf("enter");
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(num[i]+num[j]==target){
                printf("%d %d \n",i ,j);
                return 0;
            }
        }
    }
     return 0;
}