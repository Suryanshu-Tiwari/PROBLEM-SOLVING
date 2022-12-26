#include<stdio.h>
void main(){
    int b_sal;
    char grade;
    int allow;
    printf("Enter Basic Salary: ");
    scanf("%d",&b_sal);
    printf("Enter Grade: ");
    scanf("%s",&grade); 
    if(grade=='A')
    allow=1700;
    else if(grade=='B')
    allow=1500;
    else
    allow=1300;
    int total=b_sal+(0.2*b_sal)+(0.5*b_sal)+allow-(0.11*b_sal);
    printf("Total Salary: %d",total);
}