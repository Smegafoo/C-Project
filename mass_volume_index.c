#include<stdio.h>

int main(){

    float weight;
    float height;
    float BMI;
    printf("Enter your weight: ");
    scanf("%f",&weight);
    printf("Enter your height: ");
    scanf("%f",&height);

    BMI=weight/(height*height);

    printf("Your BMI : %.2f",BMI);

    if(BMI<18.5){
        printf("f");
    }else if(BMI>23 && BMI<30){
    printf("d");
    }

    return 0;

}
