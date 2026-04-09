#include <stdio.h>

int main() {
    int n;
    int k;
   printf("enter numsize");
   scanf("%d",&n);
   int num[n];
   printf("enteer");
   for(int i=0;i<n;i++){
    scanf("%d",&num[i]);
   }
   printf("enter ");
   scanf("%d",&k);
   k =k%n;
   int temp[n];
   int indx = 0;
   for(int i= n-k;i<n;i++){
    temp[indx++]=num[i];
   }
   for(int i=0;i<n-k;i++){
    temp[indx++]=num[i];
   }
   for(int i=0;i<n;i++){
    num[i]=temp[i];
   }
   for(int i=0;i<n;i++){
   printf("%d",num[i]);
   }
   return 0;
}
