//
//  main.cpp
//  STL_vector
//
//  Created by chenyufeng on 8/11/16.
//  Copyright © 2016 chenyufeng. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[])
{
    vector<int> vec1; // 创建一个空的vector
    vector<int> vec2(vec1); // 创建一个vector vec2,并用vec1去初始化vec2
    vector<int> vec3(10); // 创建一个含有n个数据的vector
    vector<int> vec4(10,0); // 创建含有10个数据的vector，并全部初始化为0
    vec4.~vector(); // 销毁所有数据，释放资源





    return 0;
}
