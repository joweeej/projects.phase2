#include<iostream>
#include<vector>
using namespace std;
int main()
{
    
//create a vector iterator called it
vector<string>::iterator it;
//type of iterator should match the type of data structure it iterates through;
    
    
//Loop through the vector with the Iterator
for(it = cars.begin(); it!= cars.end();++it){
    cout<<*it<<endl;//dereference operator accesses the iterator points to
    
    //Points too the first element of the vector
    it = cars.begin();
    //points to the Second element
    it = cars.begin() + 1;
    //end()-points to the position after the last element in the vector-not an actual element
    //Point to the last element
    it = cars,end() - 1;
    //Modify the value of the first element
    
    *it = "Tesla";
    
    //the auto keyword allows the compiler to automatically determine the datatype 
    
    auto it = cars.begin;
    
    for (auto it = cars.begin(); it != cars.end(); ++it) {
  cout << *it << "\n";
}

// Create a vector called cars that will store strings
vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

// Loop through vector elements
for (auto it = cars.begin(); it != cars.end(); ) {
  if (*it == "BMW") {
    it = cars.erase(it); // Remove the BMW element
  } else {
    ++it;
  }
}

// Print vector elements
for (const string& car : cars) {
  cout << car << "\n";
}
//Iterate in Reverse
for(auto it = cars.rbegin(); it! = cars.rend ; ++it)
{
    cout<<*it<<endl;
}
}
    
    
    
    
    
    return 0;
}