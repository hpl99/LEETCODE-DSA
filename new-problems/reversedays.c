#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int r = 0;
    for(int i=0;i<32;i++)
    {
        if(n&(1<<i))
        {
           r |=(1<<(31-i));
        }            
    }
    printf("%d",r);
}
