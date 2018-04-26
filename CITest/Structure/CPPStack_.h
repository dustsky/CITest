//
//  CPPStack_.hpp
//  ADT
//
//  Created by DUSTSKY on 23/09/2017.
//  Copyright © 2017 DUSTSKY. All rights reserved.
//

#ifndef CPPStack__hpp
#define CPPStack__hpp

#include <iostream>
#include <cassert>

template <typename T,size_t N>

// 静态栈
class Stack_S {
private:
    
    T _arr[N];
    size_t _top;
public:
    Stack_S():_top(0){}
    void push(const T &e){
        assert(_top < N);
        _arr[_top++] = e;
    }
    void pop(){
        assert(_top != 0);
        --_top;
    }
    
    T &top(){
        assert(_top);
        return _arr[_top - 1];
    }
    
    size_t size(){
        return _top;
    }
    
    bool isEmpty(){
        return _top == 0;
    }
};

#endif /* CPPStack__hpp */
