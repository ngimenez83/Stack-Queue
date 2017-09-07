//
//  main.cpp
//  Queue
//
//  Created by Nicolas Gimenez on 7/9/17.
//  Copyright © 2017 Nicolas Gimenez. All rights reserved.
//

#include <iostream>
#include <array>

const unsigned N=800;
struct Queue {
    std::array <int,N> a;
    unsigned i=0,b=0;
};

void Enqueue (Queue&, int);
int Dequeue (Queue&);

int main() {
    Queue q;
    Enqueue (q,42);
    Enqueue (q,55);
    Enqueue (q,63);
    std::cout<< Dequeue(q) << "\n";
    std::cout<< Dequeue(q) << "\n";
}

void Enqueue (Queue& q, int x){
    q.a.at(q.i)=x;
    ++q.i;
}

int Dequeue (Queue& q){
    ++q.b;
    return q.a.at(q.b-1);
}
