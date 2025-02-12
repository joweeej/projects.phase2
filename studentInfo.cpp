#include<iostream>
using namespace std;
class StudentInfo{
 public:
 string name;
 int age;
 int grade;
 StudentInfo(){
     name = "Joy";
     age = 17;
     grade = 8;
 }
 
 void Display(){
     cout<<"Your name is "<<name<<endl;
     cout<<"You are "<<age<<" years old!"<<endl;
     cout<<"You are in grade: "<<grade<<endl;
 }
};
int main()
{
   StudentInfo myObj;
   myObj.Display();
    
    
    
    
    return 0;
}