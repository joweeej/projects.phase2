#include<iostream>
#include<set>
using namespace std;
int main()

{
    
 //create a set
 set<string> cars ={"Volvo","Mazda","Toyota","Bughati"};
 //print out elements(will be printed in ascending order)
 for(string car : cars){
     cout<<car<<endl;
 }
    
   //In descending order
   
   set<int ,greater<int>> numbers={7,6,8,9,5,4,6,7};
   for(int number : numbers){
       cout<<number<<endl;
   }
    
   //if an element is duplicated...when printed out the duplicate element is ignored
   set<string> names={"Joy","Stacy","Lissa","Paul","Stacy"};
   for(string name : names){
       cout<<name<<endl;
       //adding elements usoing the .inser()
       
       cars.insert("Tesla");
       names.insert("Gabzy");
       //Remove Elements
       
       cars.erase("Volvo");
       cars.erase("Tesla");
       
      //To clear all elements in a set use .clear()
      
      //Finding the size of a set
      
      cout<<cars.size()<<endl;
      cout<<numbers.size()<<endl;
      cout<<names.size();
      
      //Check if a set is empty cars.empty
      
   }
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}