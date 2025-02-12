#include<iostream>
#include<map>
using namespace std;
int main()
{
    //creating a map that wi;l store the names and age of people
    map<string, int> people{{"John",32},{"Linda",26},{"Hassan",36},{"Mula",26}};
    //accessing values stored in a map 
    cout<<"John is "<<people["John"]<<" years old."<<endl;
    cout<<"Linda is "<<people["Linda"]<<" years old."<<endl;
    
    //accessing elements with the .at() function
    
    cout<<"Hassan is "<<people.at("Hassan")<<" years old "<<endl;
    
    cout<<"Mula is "<<people.at("Mula")<<" years old."<<endl;
    
    
    
    
    return 0;
}