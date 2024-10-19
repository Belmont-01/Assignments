//Library Management
#include<stdio.h>
int Days(int day,int month,int year){
    return day+month*30+year*365;
}
int Charges(int days_overdue){
    if(days_overdue<=7){
        return 20;
    }else if(days_overdue<=14){
        return 50;
    }else{
        return 100;
    }
}
void Display(int bookID,int dueDay,int dueMonth,int dueYear,int returnDay,int returnMonth,int returnYear,int days_overdue,int charges,int total){
    printf("Book ID: %d\n",bookID);
    printf("Due Date: %d/%d/%d\n",dueDay,dueMonth,dueYear);
    printf("Return Date: %d/%d/%d\n",returnDay,returnMonth,returnYear);
    printf("Days Overdue: %d\n",days_overdue);
    printf("Fine Rate: Ksh.%d\n",charges);
    printf("Fine Amount: Ksh.%d\n",total);
}
int main(){
    int bookID,dueDay,dueMonth,dueYear,returnDay,returnMonth,returnYear;
    
    printf("Enter Book ID: ");
    scanf("%d",&bookID);
    
    printf("Enter due date (Day Month Year): ");
    scanf("%d%d%d",&dueDay,&dueMonth,&dueYear);
    
    printf("Enter return date (Day Month Year): ");
    scanf("%d%d%d",&returnDay,&returnMonth,&returnYear);
    
    int dueDate=Days(dueDay,dueMonth,dueYear);
    int returnDate=Days(returnDay,returnMonth,returnYear);
    int days_overdue=returnDate-dueDate;
    
    int charges=Charges(days_overdue);
    int total=days_overdue*charges;
    
    Display(bookID,dueDay,dueMonth,dueYear,returnDay,returnMonth,returnYear,days_overdue,charges,total);
    
    return 0;
}
