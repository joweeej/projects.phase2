#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>

using namespace std;
int main()
{
    
//Example of vector with duplicate elements
vector<int>numbers = {1,1,2,2,3,3,3,4,4,5,5,6};

//using std::unique to remove consecutive duplicates
auto last =unique(numbers.begin(), numbers.end());
 
 //Resize the vector to new sizee after removing duplicates
 numbers.erase(last, numbers.end());
 
  
   //printing the result
   for(const auto num : numbers ){
       cout<<num<<" ";
   }
    
    cout<<endl;
    
    return 0;
}