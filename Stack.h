#pragma once
#pragma once
#include <iostream>
#include <time.h>
using namespace std;

class Stack {
    enum { EMPTY = -1, FULL = 254 };
    char st[FULL + 1];
    int top;

public:

    Stack() {
        top = EMPTY;
    }

    void push(char h);

    char pop();

    void clear();

    bool isEmpty();

    bool isFull();

    int getCount();

};

void Stack::clear() {
    top = EMPTY;
}

bool Stack::isEmpty() {
    return top == EMPTY;
}

bool Stack::isFull() {
    return top == FULL;
}

int Stack::getCount() {
    return top + 1;
}

void Stack::push(char h) {
    if (!isFull()) {
        st[++top] = h;
    }
}

char Stack::pop() {
    if (!isEmpty()) {
        return st[top--];
    }
    return '-';
}