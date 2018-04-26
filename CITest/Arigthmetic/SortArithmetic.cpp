//
//  SortArithmetic.cpp
//  SortArithmetic
//
//  Created by DUSTSKY on 15/09/2017.
//  Copyright © 2017 DUSTSKY. All rights reserved.
//

#include "SortArithmetic.h"

int partition(vector<int> &v,int start, int end){
    
    int proit = v[end];
    int i = start - 1;
    for(int j = start; j < end; j++){
        if (v[j] <= proit) {
            i++;
            swap(v[i], v[j]);
        }
    }
    swap(v[i+1], v[end]);
    return i+1;
}

void SortArithmetic::quickSort(vector<int> &v,int begin,int end){

    if (v.size() <= 1) {
        return;
    }
    if(begin < end){
        int parti = partition(v,begin,end);
        quickSort(v, begin, parti - 1);
        quickSort(v, parti + 1, end);
        SortTool::printArr(v);
    }
}



void SortArithmetic::bubbleSort(vector<int> &v){
    
    long length = v.size();
    int i = 1;
    while (length--) {
        for (int i = 0;i < length; i++) {
            if (v.at(i) > v.at(i+1)) {
                swap(v[i], v[i+1]);
            }
        }
        cout << "第" << i++ << " 次排序之后" << endl;
        SortTool::printArr(v);
    }
}


void SortTool::printArr(vector<int> vv){
    
    for(int i=0 ;i < vv.size(); i++){
        cout << vv[i] << '\t';
    }
    cout << '\n';
}


