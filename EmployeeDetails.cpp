#include<iostream>
using namespace std;
class Employee{
    private:
    int id;
    string name;
    double salary;
    string department;
    
    public:
    //constructor
    Employee(int empId,string empName,double empSalary,string empDepartment)
      {
        id = empId;
        name = empName;
        salary = empSalary;
        department= empDepartment;
      }
    //displays employee details
    void displayEmployee()  
         {
           cout<<"ID: "<<id<<", Name:"<<name<<", Salary:"<<salary<<", Department: "<<department<<endl;
         }
    
};
int main(){
    const int i = 3;//Size of Employees is 3
 Employee employees[i]={
     Employee(101,"Stacy",50000,"HR"),
     Employee(102,"Alice",67000,"IT"),
     Employee(103,"Allan",73400,"Finance")
 };
 cout<<"Employee Details:"<<endl;
 for(int  j =0 ;j<i;++j){
     employees[j].displayEmployee();
 }
 
    
    return 0;
}