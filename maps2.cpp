#include<iostream>
#include<map>
using namespace std;
int main(){
//changing values associated with a key.

map<string, int> people={{"John",32},{"Merry",26},{"Hassan",26},{"Juma",24}};

   //Change John's name to 56 instead of 32 
   people["John"]= 56;
   
   cout<<"John is "<<people["John"]<<" years old."<<endl;
    
   //using the .at() function for the same purpose
   people.at("Merry")= 32;
   
   cout<<"Merry is "<<people.at("Merry")<<" years old"<<endl;
    
    //adding elements
    people["Jenny"]=24;
    people["Joy"]=23;
    people["Star"]=17;
    //using the insert function
    
    people.insert({"James",19});
    people.insert({"Allan",23});
    people.insert({"Dollan",19});
    
    //A map cannot have elements with equal keys.
    
    //Removing elements
    people.erase("Allan");
    //To remove ALL elements in a map use people.clear();
    
    //Finding size
    
    cout<<people.size()<<endl;
    
    //Check if a map is empty
    cout<< people.empty()<<endl;//outputs 1 if true. 0 if false;
    //Check if a certain element exists
    cout<<people.count("John");//Returns 1 if True. 0 if False
    return 0;
}