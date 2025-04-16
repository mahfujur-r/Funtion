#include<stdio.h>
void printnto1(int n){
    if(n==0){
         return;
    }
    printf("%d",n);
    printnto1(n-1);
}
int main(){
    int n ;
    printf("enter num: ");
    scanf("%d",&n);
    printnto1(n);
    return 0;

}
