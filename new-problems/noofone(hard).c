#include<stdio.h>
int main(){
    int n;
    printf("Enter");
    scanf("%d",&n);
    int count = 0;
    for(int i=1;i<n;i++){
        int x = 0;
        int y= 0;
        int z =0;
        if(i%10==1 || i/10==1 || i%10==0 ){
 /* for else like 21 i will do 21 mod 10 which will be 1 and then 21 / 10 which will be 2 
      and its not equal to 1 so break ; 
          */
          x = i%10;
          if(x==1){
            count ++;
          }
          y = i/10;
          if(y==1){
            count ++;
          }
          z = i%100;
          if(z==1){
            count ++;
          }
       }
    }
    printf("%d",count);
}