#include<iostream>
using namespace std;
class Rectangle
{
    private:
    int length;
    int width;
    
    public:
    Rectangle(int l, int w){
       length = l;
       width = w;
   }
        
    
    int area()
      {
        int prod = length * width;
        return prod;
      }
   
    
   
    int perimeter()
      {
        int sum = 2*(length * width);
        return sum;
      }
    
    
};
int main()
{
    
    Rectangle rect (8,4);
    
    cout<<"Perimeter:"<<rect.perimeter()<<endl;
    cout<<"Area:"<<rect.area()<<endl;
    
    
    
    
    
    
    
    
    
    return 0;
}