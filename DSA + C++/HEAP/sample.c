#include<stdio.h>
#include<string.h>

// void msg(int a){
//     printf("Message is %d",a);
// }

// int sum(){
//     return 6;
// }

int main(){

    int a=10;
    int* ptr=&a;

    *ptr=20;

    printf("%d\n",&a);
    printf("%d\n",a);
    printf("%d\n",ptr);
    printf("%d\n",*ptr);
    printf("%d\n",&ptr);

    // int ans=sum();
    // printf("%d\n",ans);
    // msg(5);

    return 0;
}