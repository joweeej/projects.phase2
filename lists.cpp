#include<iostream>
#include<list>
using namespace std;
int main()
{
    
list<string>cars ={"Volvo","BMW","Ford","Jeep"};

    
 //printing out list values;
 for(string car : cars){
     cout<<car<<endl;
 }
    
  //getting elements
  cout<<cars.front()<<endl;
  cout<<cars.back()<<endl;
  
  //change the value of an elememt using front or back
   cars.front() ="Opel";
   cars.back()="Toyota";
   
   cout<<cars.front()<<endl;
   cout<<cars.back()<<endl;
    return 0;
}
