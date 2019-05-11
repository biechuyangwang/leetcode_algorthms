// Source : https://leetcode-cn.com/explore/interview/card/top-interview-quesitons-in-2018/261/before-you-start/1106/
// Author : Jun Lee
// Date   : 2019-05-06

/********************************************************************************** 
* 
* 只出现一次的数字
* 给定一个非空整数数组，除了某个元素只出现一次以外，其余每个元素均出现两次。找出那个只出现了一次的元素。
* 
* 说明：
* 
* 你的算法应该具有线性时间复杂度。 你可以不使用额外空间来实现吗？
* 
* 示例 1:
* 
* 输入: [2,2,1]
* 输出: 1
* 示例 2:
* 
* 输入: [4,1,2,1,2]
* 输出: 4
*  
**********************************************************************************/

#include<iostream>  //导入库部分 
#include<vector>
using namespace std;

class Solution {  // 主要思路就是利用异或去将偶数次出现的数去掉 
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans^=nums[i];  // 异或运算可以用来去重。
        }
        return ans;
    }
};

int main(){
	int ans;  //接收结果值 
	Solution s;  //声明解决方案 
	
	int nums[]={3,2,3}; //输入处理 
	vector<int> v;
	for(int i=0;i<sizeof(nums)/sizeof(nums[0]);i++){
		v.push_back(nums[i]);
	}
	
	ans=s.singleNumber(v);  //算法执行 
	cout<<ans<<endl;
	
	return 0;
}
