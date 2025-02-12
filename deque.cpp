#include<iostream>
#include<deque>
using namespace std;
int main(){
    
   deque<string>cars ={"BMW","Jeep","Toyota","Ford"};
   
   
   
   //printing out elements
   cout<<cars[0]<<endl;
   cout<<cars.front()<<endl;
   cout<<cars.back()<<endl;
   cout<<cars.at(2)<<endl;
    //check size
    cout<<cars.size()<<endl;
    
    
   //add deque elements
   cars.push_front("VW");
   cars.push_back("Tesla");
   
   //remove elements from a Deque
   cars.pop_front();//removes elements from the front
   
   cars.pop_back();//removes elements from the back
   
   //Check deque size
   cout<<cars.size()<<endl;
   //Cheque if deque is empty
   
   cout << cars.empty()<<endl;  // Outputs 1 (The deque is empty)
 
 for(string car : cars)
 {
     cout<<car<<endl;
 }
    return 0;
}