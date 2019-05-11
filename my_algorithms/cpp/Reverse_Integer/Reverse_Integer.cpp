// Source : https://leetcode.com/problems/reverse-integer/
// Author : Jun Lee
// Date   : 2019-05-11

/********************************************************************************** 
* 
* Given a 32-bit signed integer, reverse digits of an integer.
* 
* Example 1:
* 
* Input: 123
* Output: 321
* Example 2:
* 
* Input: -123
* Output: -321
* Example 3:
* 
* Input: 120
* Output: 21
*  
* Note:
* Assume we are dealing with an environment 
* which could only store integers within the 32-bit signed integer range: [-2^31,  2^31-1]. 
* For the purpose of this problem, 
* assume that your function returns 0 when the reversed integer overflows.
**********************************************************************************/
#include<iostream>
using namespace std;

//#define INT_MAX     2147483647
//#define INT_MIN     (-INT_MAX - 1)
class Solution {
public:
    int reverse(int x) {
        int ans=0;
        while(x!=0){
            if(ans > INT_MAX/10 || ans/10 < INT_MIN/10)  // 注意这里的溢出条件就行 
                return 0;
            ans=ans*10+x%10;
            x/=10;
        }
        return ans;
    }
};

int main(){
	int ans;  //接收结果值 
	Solution s;  //声明解决方案 
	
	int x=2147483646;
	
	ans=s.reverse(x);  //算法执行 
	cout<<ans<<endl;
	
	return 0;
}
