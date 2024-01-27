// Grade of Studen based on marks 

#include<stdio.h>

int main(){
    int marks;
    printf("Please Enter Marks:-  ");
    scanf("%d", &marks);

    if(marks > 90){
        printf("Gragde A");
    }else if (marks >= 70 && marks <= 90){
        printf("Grade B");
    }else if(marks >= 50 &&marks <70 ){
        printf("Grade C");
    }else if(marks >= 40 &&marks <50 ){
        printf("Grade D");
    }else {
        printf("Fail");
    }
    
    return 0;
}