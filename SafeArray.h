//
//  SafeArray.h
//  SafeArray
//
//  Created by 徐 BOWEI on 15/4/23.
//  Copyright (c) 2015年 徐 BOWEI. All rights reserved.
//

#ifndef __SafeArray__SafeArray__
#define __SafeArray__SafeArray__
#include <iostream>
using namespace std;
class SafeArray
{
   
private:
    int size;
    int *data;
public:
     friend ostream &operator<<(ostream &os,SafeArray &array);
    SafeArray(int const csize);
    virtual~ SafeArray();
    int &operator[](int index);
    bool check(int index);
};
ostream &operator<<(ostream &os,SafeArray &array);
#endif /* defined(__SafeArray__SafeArray__) */
