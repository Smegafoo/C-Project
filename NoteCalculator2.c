#include <stdio.h>

int main(){
    int selecting_main_menu=1;
    while(selecting_main_menu==1 ||selecting_main_menu==2 || selecting_main_menu==3){
            printf("What do you want to do :\n1)Calculate grade note\n2)Calculate grade note (more detailed)\n3)See grade letter\n4)Exit");
    scanf("%d",&selecting_main_menu);
    switch(selecting_main_menu){
    case 1:
        calculate_grade_note();
        break;
    case 2:
        calculate_grade_note_more_detailed();
        break;
    case 3:
        printf("90-100 :AA \n80-89  :BA \n70-79  :BB \n60-69  :CB\n50-59  :CC \n50-0   :Failed \n ");
        break;
    case 4:
        return 0;
        break;
    }
    }
}
void calculate_grade_note(){
int selecting_loop=1;
while(selecting_loop==1){
        int lesson_number;

printf("Please enter your lesson number : \n");
scanf("%d",&lesson_number);
int dizi [lesson_number];
for(int i=1;i<=lesson_number;i++){
    int lesson_grade=0;
    do{
    printf("Please enter your lesson%d:",i);
    scanf("%d",&lesson_grade);

    if(lesson_grade<0 || lesson_grade>100){
        printf("Invalid lesson score please try a score between 0-100!! \n");
    }
    }
    while(lesson_grade<0 || lesson_grade>100);
    dizi[i-1]=lesson_grade;
}
int total=0;
for(int i=1;i<=lesson_number;i++){
        total+=dizi[i-1];
}
float lesson_grade=total/lesson_number;

printf("Your grade score:%.2f \n",lesson_grade);

if(lesson_grade<50){
    printf("You have failed!! \n");
}else if(lesson_grade>=90 && lesson_grade<=100){
    printf("Your grade note: AA \n");
}else if(lesson_grade>=80 && lesson_grade<=89){
    printf("Your grade note: BA \n");
}else if(lesson_grade>=70 && lesson_grade<=79){
    printf("Your grade note: BB \n");
}else if(lesson_grade>=60 && lesson_grade<=69){
    printf("Your grade note: CB \n");
}else if(lesson_grade>=50 && lesson_grade<=59){
    printf("Your grade note: CC \n");
}
printf("Would you like to try again \n1)Yes \n2)No");
scanf("%d",&selecting_loop);
}
}

void calculate_grade_note_more_detailed(){
    int les_num;
    int les_midterm_score;
    int les_final_score;
    int les_total_score;
    int les_sum_score=0;


    printf("Please enter your lesson number : \n");
    scanf("%d",& les_num);

    char lesson_name[les_num][50];
    int lesson_score[les_num];


    for(int i=0;i<les_num;i++){

        printf("Please enter your %d.lesson name :",i+1);
        scanf("%s",&lesson_name[i]);
        printf("Do you want o change the lessons rate 1)Yes\n2)No");
    int select_les_rate;
    scanf("%d",&select_les_rate);
    do{
        if(select_les_rate!=1 || select_les_rate!=2 ){
            printf("You enter wrong number please try enter to 1 or 2!!");
            scanf("%d",&select_les_rate);
        }
    }while(select_les_rate != 1 && select_les_rate != 2);

    switch(select_les_rate){
        case 1:
            break;
        case 2:
            break;
        default:
            break;
    }




        do{
        printf("Please enter your %s midterm score :",lesson_name[i]);
        scanf("%d",&les_midterm_score);
        if(les_midterm_score<0 || les_midterm_score>100){
        printf("Invalid lesson score please try a score between 0-100!! \n");
        }
        }while(les_midterm_score<0 || les_midterm_score>100);

        do{
        printf("Please enter your %s final score :",lesson_name[i]);
        scanf("%d",&les_final_score);
        if(les_final_score<0 || les_final_score>100){
        printf("Invalid lesson score please try a score between 0-100!! \n");
        }
        }while(les_final_score<0 || les_final_score>100);

        les_total_score=(les_midterm_score*0.4)+(les_final_score*0.6);
        lesson_score[i]=les_total_score;
        les_sum_score +=lesson_score[i];

    }

    int les_last_score=les_sum_score/les_num;

    for(int i=0;i<les_num;i++){
    printf("%s score: %d \n",lesson_name[i],lesson_score[i]);
    }
    printf("Your grade score :%d \n",les_last_score);

    if(les_last_score<50){
    printf("You have failed!! \n");
}else if(les_last_score>=90 && les_last_score<=100){
    printf("Your grade note: AA \n");
}else if(les_last_score>=80 && les_last_score<=89){
    printf("Your grade note: BA \n");
}else if(les_last_score>=70 && les_last_score<=79){
    printf("Your grade note: BB \n");
}else if(les_last_score>=60 && les_last_score<=69){
    printf("Your grade note: CB \n");
}else if(les_last_score>=50 && les_last_score<=59){
    printf("Your grade note: CC \n");
}
}
