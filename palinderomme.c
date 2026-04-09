#include<stdbool.h>
#include<stdio.h>
#include<limits.h>
bool isPalindrome(int x) {
    int a =0;
    int y =0;
    int original = x;
    if(x<0){
        return false;
    }
    else if(x>0){
        while(x!=0){
            a = x%10;
        if(y>(INT_MAX-a)/10){
            return false;
        }
         y = y*10 + a; 
            x = x/10;
    }
        
    return y==original;
}
else{
    return true;
}
}