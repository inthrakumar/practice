#include <stdio.h>
int sum(int x){
    if (x<1){
        return 1;

    }else{
        return 1**sum(x/2);

    }
}
int main()
{
    int x=sum(10);
    printf("%d",x);

    return 0;
}
