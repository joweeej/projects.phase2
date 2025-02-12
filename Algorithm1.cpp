#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
  //Create a vector called cars that will store strings  
   vector<string> cars ={"Volvo","Ford","Jeep","Toyota","Mazda"};
    //sort cars in alphabetical order
    sort(cars.begin(),cars.end());
    
    
    
    //Print cars in alphabetical order
    for(string car : cars){
        cout<<car<<endl;
    }
    return 0;
}
