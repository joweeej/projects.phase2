#include<iostream>
#include<vector>
using namespace std;
int main()
{
  
   vector<string> names ={"Stace","Jude","Lisa","Belingham","Annastellah"};
   names.push_back("JoyT");
    
    for(string name:names){
        cout<<name<<endl;
    }
    
    
    
    
    
    return 0;
}