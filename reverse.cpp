#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{

  vector<int> myVector ={10,20,30,40,50};  
  cout<<"Elements in reverse order: "<<endl;
 if (!myVector.empty()){
      vector<int>::iterator it = myVector.end();//Start at one past the last element
      
      while(it !=myVector.begin()){
          --it;//Decrement before accessing the element
          cout<<*it<<" ";
      }
  }
    cout<<endl;
    
    
    return 0;
}