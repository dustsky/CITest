//
//  SortArithmetic.hpp
//  SortArithmetic
//
//  Created by DUSTSKY on 15/09/2017.
//  Copyright © 2017 DUSTSKY. All rights reserved.
//

#ifndef SortArithmetic_hpp
#define SortArithmetic_hpp

#include <iostream>
#include <vector>

using namespace std;

class SortArithmetic {
    
public:
    
    // 快速排序，分治策略，基准pivot。
    // 时间复杂度：平均nlgn,最坏n^2;
    void quickSort(vector<int> &v,int begin,int end);
    
    // 冒泡排序
    void bubbleSort(vector<int> &v);
};

class SortTool {
    
public:
    static void printArr(vector<int> vv);
};

#endif /* SortArithmetic_hpp */
