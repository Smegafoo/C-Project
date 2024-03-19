#include<stdio.h>

int main(){

int math_note;
int turkish_note;
int science_note;
int social_note;
int select;



do{
printf("Please select What do you want to do: \n 1)Note Calculator \n 2)See Note grade \n 3)Quit \n");
scanf("%d", &select);
switch(select){

case 1:
    do{
printf("Please enter your math note (between 0 and 100): ");
scanf("%d", &math_note);
}
while (math_note < 0 || math_note > 100);


do{
printf("Please enter your turkish note(between 0 and 100): ");
scanf("%d",&turkish_note);
}
while(turkish_note < 0 || turkish_note > 100);
do{
printf("Please enter your science note (between 0 and 100):");
scanf("%d",&science_note);
}
while(science_note < 0 || science_note > 100);

do{
printf("Please enter your social note (between 0 and 100):");
scanf("%d",&social_note);
}
while(social_note < 0 || social_note> 100);


float sum_note=(float)(math_note+turkish_note+science_note+social_note)/4;

printf("Your Grade note: %.1f \n",sum_note);

if(sum_note<50){
    printf("You have failed!!");
}else if(sum_note>=90 && sum_note<=100){
    printf("Your Grade note: AA \n");
}else if(sum_note>=80 && sum_note<=89){
    printf("Your Grade note: BA \n");
}else if(sum_note>=70 && sum_note<=79){
    printf("Your Grade note: BB \n");
}else if(sum_note>=60 && sum_note<=69){
    printf("Your Grade note: CB \n");
}else if(sum_note>=50 && sum_note<=59){
    printf("Your Grade note: CC \n");
}
    break;
case 2:
    printf("90-100 :AA \n80-89  :BA \n70-79  :BB \n60-69  :CB\n50-59  :CC \n50-0   :Failed \n ");
    break;
case 3:
    return 0;
break;
    default:
        return 0;
}

}
while(select !=3);




}
