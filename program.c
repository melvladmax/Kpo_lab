
#include <stdio.h>

int main()
{
    int a,b1=0,b2=0,b3=0,c1,c2,c3,i;
    scanf("%d",&a); 
    int r=0; 
    for(i=0;i<a;++i){
        scanf("%d",&c1);
        scanf("%d",&c2);
        scanf("%d",&c3);
        b1+=c1;
        b2+=c2;
        b3+=c3;
    }
    if(b1==0 && b2==0 && b3==0)
    printf("Yes");
    else 
    printf("No");
}
