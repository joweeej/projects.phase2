#include<iostream>
#include<string>
#include<fstream>
#include<sstream>//Is used to break a line into individual words.
//simple way of extracting words fro the line

using namespace std;
 int countWordsInFile(string filename)
 {
     ifstream file(filename);
     //Check if file is opened successsfully
     if(!file.is_open()){
         cerr<<"Error in opening the file!"<<endl;
         return -1;//Incase of error
         
     }
     string line;
     int wordCount = 0;
     //Read the file line by line
     while(getline(file, line))
     {
         stringstream ss(line);//stringstream is used to process the line word by word
         string word;
         
         //Extract words from the line
         while(ss>>word)
         {
             wordCount++;//Increment count from each word found
         }  
     }
 
 //Close the file
 file.close();
 return wordCount;
 }
 int main()
 {
 
 string filename ="jt.txt";
 
 int wordCount = countWordsInFile(filename);
 
    if(wordCount!=-1)
    {
        cout<<"The number of words in the file is: "<<wordCount <<endl;
    } 
     

     
     return 0;
 }
 
 