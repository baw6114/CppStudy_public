#include <stdio.h>

void ifelseGrades(int score);
void switchcaseGrades(int score);

//Use if-else & switch-case set Grades Score

int main(int argc, char const *argv[])
{
    int score = 0;

    printf("Input Score: ");
    scanf("%d", &score);
    ifelseGrades(score);
    switchcaseGrades(score);

    return 0;
}

void ifelseGrades(int score){

    printf("[if-else Grades Score]\n");
    char grade;
    if(score >= 90){
        grade = 'A';
    }else if(score >= 80){
        grade = 'B'; 
    }else if(score >= 70){
        grade = 'C';
    }else if(score >= 60){
        grade = 'D';
    }else{
        grade = 'F';
    }

    printf("Grades is [%c].\n\n", grade);
}

void switchcaseGrades(int score){

    printf("[switch-case Grades Score]\n");
    char grade;
    switch (score/10)
    {
        case 10 :
        break;
        case 9 : grade = 'A';
        break;
        case 8 : grade = 'B';
        break;
        case 7 : grade = 'C';
        break;
        case 6 : grade = 'D';
        break;
    
        default: grade = 'F';
            break;
    }

    printf("Grades is [%c].\n\n", grade);
}