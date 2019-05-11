// Source : https://leetcode-cn.com/explore/interview/card/top-interview-quesitons-in-2018/261/before-you-start/1107/
// Author : Jun Lee
// Date   : 2019-05-09

/********************************************************************************** 
* 
* 编写一个高效的算法来搜索 m x n 矩阵 matrix 中的一个目标值 target。该矩阵具有以下特性：

* 每行的元素从左到右升序排列。
* 每列的元素从上到下升序排列。
* 
* 示例 1:
* 
* [
*   [1,   4,  7, 11, 15],
*   [2,   5,  8, 12, 19],
*   [3,   6,  9, 16, 22],
*   [10, 13, 14, 17, 24],
*   [18, 21, 23, 26, 30]
* ]
*  
* 给定 target = 5，返回 true。
*  
* 给定 target = 20，返回 false。
*  
**********************************************************************************/
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
    }
};

int main(){
	int ans;  //接收结果值 
	Solution s;  //声明解决方案 
	
	int nums[5][5]={1,4,7,11,15;2,5,8,12,19;3,6,9,16,22;10,13,14,17,24;18,21,23,26,30} //输入处理 
	int n=5;
	vector<int> v;  //参数列表
	for(int i=0;i<sizeof(nums)/sizeof(nums[0]);i++){
		v.push_back(nums[i]);
	}
	
	ans=s.searchMatrix(v,n);  //算法执行 
	cout<<ans<<endl;
	
	return 0;
}

