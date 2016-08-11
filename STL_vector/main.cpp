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

void PrintVector(vector<int> ve);

int main(int argc, const char * argv[])
{
    vector<int> vec1; // 创建一个空的vector
    vector<int> vec2(vec1); // 创建一个vector vec2,并用vec1去初始化vec2
    vector<int> vec3(10); // 创建一个含有n个数据的vector
    vector<int> vec4(10,0); // 创建含有10个数据的vector，并全部初始化为0
    // vec4.~vector(); // 销毁所有数据，释放资源

    // 在vector尾部添加元素
    vec1.push_back(4);
    vec1.push_back(6);
    vec1.push_back(8);
    vec1.push_back(1);
    vec1.push_back(2);
    PrintVector(vec1);

    // 在vector尾部删除元素
    vec1.pop_back();
    PrintVector(vec1);

    // 在vector头部添加元素，无法完成，因为vector的数据结构为数组，无法在头部插入元素，否则需要整个数组前移；

    // 在vector头部删除元素，无法完成，理由同上。

    // 取vector中某位置的元素值
    cout << "在1位置的元素值为：" << vec1.at(1) << endl;
    cout << "在1位置的元素值为：" << vec1[1] << endl;

    // begin():指向容器最开始位置数据的指针,详见PrintVector；
    // end():指向容器最后一个数据单元的指针+1,详见PrintVector；

    // 返回尾部数据的引用
    cout << "尾部数据的值为：" << vec1.back() << endl;
    // 返回头部数据的引用
    cout << "头部数据的值为：" << vec1.front() << endl;

    cout << "vector中的最大容量为：" << vec1.max_size() << endl;
    cout << "vector中的元素个数为：" << vec1.size() << endl;

    cout << "vector是否为空：" << vec1.empty() << endl;


    // 交换两个容器中的数据
    vector<int> vecSwap;
    vecSwap.push_back(1);
    vecSwap.push_back(2);

    PrintVector(vec1);
    PrintVector(vecSwap);
    vec1.swap(vecSwap);
    PrintVector(vec1);
    PrintVector(vecSwap);

    // 重新再交换回来
    vec1.swap(vecSwap);

    // 对vector进行升序排序
    sort(vec1.begin(), vec1.end());
    PrintVector(vec1);

    // 对vector进行降序排序
    reverse(vec1.begin(), vec1.end());
    PrintVector(vec1);

    // 修改vector中的某个值
    vec1[2] = 99;
    PrintVector(vec1);

    vec1.at(3) = 88;
    PrintVector(vec1);

    // 删除数组的某个元素
    vector<int>::iterator vItera = vec1.begin();
    vItera = vItera + 2;
    vec1.erase(vItera);
    PrintVector(vec1);

    // vector插入某元素，要使用iterator来定位某个位置
    vector<int>::iterator vInsert = vec1.begin();
    vInsert = vInsert + 2;
    vec1.insert(vInsert, 777);
    PrintVector(vec1);

    // 重新设置vector的容量
    vec1.resize(10);

    // 清除所有数据
    vec1.clear();
    PrintVector(vec1);
    cout << "vector是否为空：" << vec1.empty() << endl;

    return 0;
}

void PrintVector(vector<int> ve)
{
    cout << "Vector中的数据为：";
    vector<int>::iterator veIterator;
    for (veIterator = ve.begin(); veIterator < ve.end(); veIterator++)
    {
        cout << *veIterator << " ";
    }
    cout << endl;
}












