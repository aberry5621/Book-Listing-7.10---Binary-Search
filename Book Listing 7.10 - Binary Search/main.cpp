//
//  main.cpp
//  Book Listing 7.10 - Binary Search
//
//  Created by ax on 10/12/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include <iostream>
using namespace std;

int binary_search(const int list[], int key, int list_size) {
    int low = 0;
    int high = list_size - 1;
    
    while(low <= high) {
        int mid = (low + high) / 2;
        if (key < list[mid]) {
            high = mid -1;
        } else if (key == list[mid]) {
            return mid;
        } else {
            low = mid + 1;
        }
    }

    
    return -1;
}


int main() {
    
    // call binary_search
    
    return 0;
}
