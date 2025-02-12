#include<iostream>
#include<vector>
#include<numeric>

using namespace std;

int main()
{
    //Example of a vector/array
    vector<int> arr ={1,2,3,4,5};
    
    //vector to store prefix sums
    vector<int>prefix_sum(arr.size());
    //Use std::accumulate to calculate the prefix sum
    int running_sum = 0;
    
    for(int i = 0;i<arr.size();++i){
        running_sum = running_sum + arr[i];//Increment running sum
        prefix_sum[i] = running_sum;//Store the running sum in the result vector
        
    }
    
    //print the prefix sum
    cout<<"Pre-fix sum: "<<endl;
    for(int sum : prefix_sum)
    {
        cout<<sum<<" ";
    }
    cout<<endl;
    return 0;
}
