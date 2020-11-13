//
//  circularqueue.h
//  circular-queue-cpp
//
//  Created by Burak  on 12.11.2020.
#ifndef CIRCULARQUEUE_H
#define CIRCULARQUEUE_H

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class queue{
private:
    int max;           // maximum size of the queue
    int count;         // number of items in the queue
    int start;         // data[start] is the first entry in the queue
    int end;           // data[end-1] is the last entry in the queue
    vector <int> data; // vector holding the queue of items
 
public:
    queue(int sz);                   // constructor, max = sz
    void push(int item);             // push the integer item onto the queue
    int front(void) const;           // return the front item
    int size(void) const;            // return count;
    void pop(void);                  // pop the front item
    bool empty(void) const;          // check for empty queue
    bool full(void) const;           // check for full queue
    void write(ostream & out) const; // send the data stored to out
};

#endif /* CIRCULARQUEUE_H */
