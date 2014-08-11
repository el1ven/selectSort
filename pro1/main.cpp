//
//  main.cpp
//  pro1
//
//  Created by el1ven on 14-6-6.
//  Copyright (c) 2014年 el1ven. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>


using namespace std;

/*选择排序法的第一层循环从起始元素开始选到倒数第二个元素，主要是在每次进入的第二层循环之前，将外层循环的下标赋值给临时变量，接下来的第二层循环中，如果发现有比这个最小位置处的元素更小的元素，则将那个更小的元素的下标赋给临时变量，最后，在二层循环退出后，如果临时变量改变，则说明，有比当前外层循环位置更小的元素，需要将这两个元素交换.*/

//这里的选择排序是从小到大排序
void selectSort(int *arr, int n){
    int temp = 0;
    for(int i = 0; i < n-1; i++){//我要选择n-1次最小的值进行排序，最后一个自动归位
        temp = i;
        for(int j = i + 1; j < n; j++){
            if(arr[temp] > arr[j]){//说明j下标的比较小是我们需要的数据
                temp = j;
            }
        }
        if(i != temp){//如果i和j不相等的话，证明我们找到了更小的元素，则把他们的位置交换，n-1趟之后，所有元素就正确归位了
            int b = arr[temp];
            arr[temp] = arr[i];
            arr[i] = b;
        }
        
    }
    
}

int main(){
    int n = 0;//记录输入元素个数
    while(cin>>n){
        int arr[100] = {0};
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
        selectSort(arr,n);
        for(int j = 0; j < n; j++){
            cout<<arr[j]<<".";
        }
    
    }
    return 0;
}
























