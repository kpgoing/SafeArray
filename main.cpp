//
//  main.cpp
//  SafeArray
//
//  Created by 徐 BOWEI on 15/4/23.
//  Copyright (c) 2015年 徐 BOWEI. All rights reserved.
//

#include <iostream>
#include "SafeArray.h"
int main(int argc, const char * argv[]) {
    // insert code here...
    SafeArray arr{100};
    arr[10] = 123;
//    arr[100] = 0;
    cout<<arr;
    return 0;
}
