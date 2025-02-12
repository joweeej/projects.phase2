#include <iostream>
#include <fstream>
#include<string>
using namespace std;
int main()
{
  string userInput;
  //Open file in Append mode
  ofstream outFile("user_inputs.txt: ",ios::app);
  if(!outFile)
  {
      cerr<<"Error opening file!"<<endl;
      return 1;//Return error code if the file couldn't be opened
  }
   
   cout<<"Kindly Enter Your Text:Type 'Exit' to stop "<<endl;
   //Loop to get user Input and write it to the File
   
    while(true){
        cout<<"Enter your line of text: "<<endl;
        getline(cin, userInput);
        
        //If user enters exit, stop the loop
        if(userInput == "exit"){
            break;
        }
        //write the user Input to a file  followed by a new file
        outFile<<userInput<<endl;
    }
    
    //Close the file after writing
    outFile.close();
    cout<<"Your inputs have been written to user_inputs.txt";
    
    
    return 0;
}