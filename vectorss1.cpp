#include<iostream>
#include<vector>
using namespace std;
int main()
{
    
vector<string> names ={"Joy","Stacy","Lisa","Adams"};    
    
  //print the vectors
cout<<names[0]<<endl; 
//get the first element in a vector
cout<<names.front()<<endl;
//get the last element in a vector
cout<<names.back()<<endl;
//access an element at a specified index
//.at() function is preffered over square brackets because it lets you know if an error occurs
 cout<<names.at(3)<<endl; 
 
 //Chenge value of a Vector Element
 
 names.at(0)="Stacy";
 
 cout<<names.at(0);
    
    return 0;
}