//
//  SafeArray.cpp
//  SafeArray
//
//  Created by 徐 BOWEI on 15/4/23.
//  Copyright (c) 2015年 徐 BOWEI. All rights reserved.
//

#include "SafeArray.h"
#include <cassert>
SafeArray::SafeArray(int const csize)
{
    size = csize;
    data = new int[size];
}
SafeArray::~SafeArray()
{
    delete[] data;
}
int &SafeArray::operator[](int index)
{
    if(check(index))
//    assert(index<0||index>99);
    return data[index];
    exit(1);
}
bool SafeArray::check(int index)
{
    if (index<0||index>=size) {
        cout<<"the index is out of range."<<endl;
        return false;
    }
    return true;
}
ostream &operator<<(ostream &os, SafeArray &array)
{
    for(int i = 0;i<array.size;i++)
    {
        
        os<<"["<<i<<"]="<<array[i]<<"    ";
        if (i%10==0) {
            os<<"\0";
        }
    }
    return os;
}

