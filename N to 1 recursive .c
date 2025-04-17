#include <stdio.h>
int main(){
    int n;
    printf(" enter :");
    scanf("%d",&n);
    display(n);
    return 0;
}
void display(n){
    if(n==0)
        return;

    printf("%d\n",n);
    display(n-1);


}
