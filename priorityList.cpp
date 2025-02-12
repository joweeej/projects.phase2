#include<iostream>
#include<vector>
#include<queue>
#include<string>

using namespace std;

//define Task structure
struct Task
{
    int priority; //Higher value means higher priority
    string task_name;
    
    //constructor to initialize a task
    Task(int p, string name) : priority(p),task_name(name){}
    
    //custom ccomparator to make the priority_queue a max_heap(higher priority comes first)
    
    bool operator<(Task other)const{
        //In a max heap, the task with the higher priority is considered "smaller" for priority
        return priority<other.priority;//Reverse comparison to implement max_heap
    }
};
int main()
{
 //Creating a priority queue to store tasks
 priority_queue<Task>task_queue;
 
 //Add tasks to the priority queue
 task_queue.push(Task(5,"Write A Report"));
 task_queue.push(Task(2,"Clean room"));
 task_queue.push(Task(8,"Complete Project"));
 task_queue.push(Task(3,"Attend Meeting"));
 task_queue.push(Task(7,"Respond to E-Mails"));
  
  //process tasks in order of priority
  cout<<"Processing tasks by priority (highest priority first)"<<endl;
  
  while(!task_queue.empty()){
      Task task = task_queue.top();//Get the task with the highest priority
      task_queue.pop();//Remove the task from the queue
      cout<<"Task: "<<task.task_name<<" | Priority:  "<<task.priority<<endl;
  }
    
    return 0;
}