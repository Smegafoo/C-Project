#include<stdio.h>

int main(){

    int numbers[]={25,45,78,90,21};
    int numbers_length=sizeof(numbers)/sizeof(numbers[0]);

    for(int i=0;i<numbers_length;i++){
        printf("%d \n",numbers[i]);
    }


}
