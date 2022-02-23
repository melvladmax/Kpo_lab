#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n; 
    scanf("%d",&n); 
    if(n%4==0 || n%7==0 || n%47==0 || n%74==0){
        printf("YES");
        return 0;
    }
    
    while(n){
        if(n%10 != 7 && n%10 != 4){
            printf("NO");
            return 0;
        }
        n/=10;
    }
    printf("YES");
    return 0;
}