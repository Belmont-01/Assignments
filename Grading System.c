//Grading system
#include<stdio.h>

int main(){
    int english,computer,history;
    float average;
    char grade;
    printf("Enter marks for English: ");
    scanf("%d",&english);
    
    printf("Enter marks for Computer: ");
    scanf("%d",&computer);
    
    printf("Enter marks for History: ");
    scanf("%d",&history);
    
    average=(english+computer+history)/3.0;
    if(average>=70 && average<=100){
        grade='A';
        
    }else if(average>=60 && average<69){
        grade='B';
        
    }else if(average>=50 && average<59){
        grade='C';
        
    }else if(average>=40 && average<49){
        grade='D';
        
    }else{
        grade='E';
    }
    printf("Average marks:%.2f\n",average);
    printf("Grade:%c\n",grade);
    return 0;
 }