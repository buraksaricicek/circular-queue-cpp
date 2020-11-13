//
//  main.cpp
//  circular-queue-cpp
//
//  Created by Burak  on 12.11.2020.
#include "circularqueue.h"

queue::queue(int sz) : data(sz)
{
    max = sz;
    count = 0;           // the queue has no entries yet
    start = 0;
    end = 0;
}

bool queue::empty(void) const
{
    return (count == 0);
}

bool queue::full(void) const
{
    return (count == max);
}
void queue::push(int item){
     /*the push method places a new entry at position end and increments
end,*/

    if(count<max){
        data[count]=item;
        count++;
    }else{
        cout<<"queue is full" <<endl;
    }

}
int queue::front(void) const{
/* the front method returns the entry at position start  */
int x= data[0];
return x;

}
int queue::size(void) const{

    return count;
}
void queue::pop(void){

for(int i=0;i<count-1;i++){
    data[i]=data[i+1];
}
start++;
count--;
}
void queue::write(ostream &out) const{
    int i;
    for(i=count-1;i>=0;i--){
        out<<data[i]<<" ";
    }
}
