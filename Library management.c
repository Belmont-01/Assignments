//Library Management
#include<stdio.h>
int main(){
    int bookID,dueDay,dueMonth,dueYear,returnDay,returnMonth,returnYear,days_overdue,charges,total;
    
    printf("Enter Book ID: ");
    scanf("%d",&bookID);
    
    printf("Enter due date (Day Month Year): ");
    scanf("%d%d%d",&dueDay,&dueMonth,&dueYear);
    
    printf("Enter return date (Day Month Year): ");
    scanf("%d%d%d",&returnDay,&returnMonth,&returnYear);
    
    int dueDate=dueDay+dueMonth*30+dueYear*365;
    int returnDate=returnDay+returnMonth*30+dueYear*365;
    days_overdue=returnDate-dueDate;
    
    if(days_overdue<=7){
        charges=20;
    }else if(days_overdue<=14){
        charges=50;
    }else{
        charges=100;
    }
    
    total=days_overdue*charges;
    
    printf("Book ID: %d\n",bookID);
    printf("Due Date: %d/%d/%d\n",dueDay,dueMonth,dueYear);
    printf("Return Date: %d/%d/%d\n",returnDay,returnMonth,returnYear);
    printf("Days Overdue: %d\n",days_overdue);
    printf("Fine Rate: Ksh.%d\n",charges);
    printf("Fine Amount: Ksh.%d\n",total);
    
    return 0;
}