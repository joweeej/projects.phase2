#include<iostream>
#include<stack>
//you cannopt add elements to the stack at the time of declaration like you can with vectors
using namespace std;
int main()
{
   stack<string>cars ={"Volvo","Jeep","Mazda","Toyota"};
   
   //adding elements
   cars.push("Ford");
   cars.push("BMW");
   //Accessing stack elemets
   cout<<cars.top();
    
    //Change the top element
    cars.top() ="Tesla";
    cout<<cars.top()<<endl;
    
    //Remove Elements
    cars.pop();//removes the last added element(BMW)
    
    //access the top element(Volvo)
    
    cout<<cars.top();
    //Check size of stack
    
    cout<<cars.size()<<endl;
    
    stack<string> cars;
cout << cars.empty(); // Outputs 1 (The stack is empty)
    return 0;
}