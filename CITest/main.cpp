
#include <iostream>
#include <vector>
#include "Arigthmetic/SortArithmetic.h"

int main(int argc, const char * argv[]) {
    
    std::cout << "Hello, World!\n";

    SortArithmetic sortAri = SortArithmetic();
    
    vector<int> vv = {100,113,5,1,22,12,11,3,4,6};
    sortAri.quickSort(vv, 0, (int)vv.size()-1);
    // sortAri.bubbleSort(vv);
    SortTool::printArr(vv);

    return 0;
}