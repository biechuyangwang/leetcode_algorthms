// Source : https://leetcode.com/problems/palindrome-number/
// Author : Jun Lee
// Date   : 2019-05-17

/********************************************************************************** 
* 
* Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.
* Example 1:
* Input: 121
* Output: true
* Example 2:
* Input: -121
* Output: false
* Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
* Example 3:
* Input: 10
* Output: false
* Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
* 
* Follow up:
* Coud you solve it without converting the integer to a string?
*   
**********************************************************************************/
#include<iostream>  //导入库部分 
#include<string>
using namespace std;

//class Solution1 {
//public:
//    bool isPalindrome(int x) {
//        if(x<0)
//            return false;
//        string s = to_string(x);
//        string s_rev=s;
//        reverse(s.begin(),s.end());
//        if(s == s_rev)
//            return true;
//        else return false;
//    }  
//};

// 不转化为字符串的处理方式，直接反转可能会整数上溢，
// 所以反转一半。 
// 反转时，以0开始的，需要补齐位数。但是反转左边就不会出现这种情况。 
class Solution2 {
public:
    bool isPalindrome(int x) { 
        if(x < 0)
            return false;
        int x_temp=x;
        
        int len=0;
        while(x_temp){  //计算整数位数
        	x_temp/=10;
        	len++;
		} 
		
		int div_x=1;
		for(int i=0;i<len/2;i++){
			div_x *= 10;
		}
        int left_x = len%2?x/div_x/10:x/div_x;  //长度为奇数和偶数 
        int right_x = x%div_x;
        
        if(rev(left_x) == right_x)
        	return true;
        else return false;
    }
private:
//    int rev(int x,int len){  //注意零开头的数反转要把位数补全
	int rev(int x){  //反转左边就不会出现上面的问题了 
    	int y = 0;
    	int n;
    	while(x){
    		n = x%10;
    		y = y*10 + n;
    		x /= 10;
//            len--;
		}
//        while(len--) y*=10;
		return y;
	}
};

int main(){
	bool ans;  //接收结果值 
//	Solution1 s1;  //声明解决方案 
	Solution2 s2;
	
	int x;
	cin>>x;
//	ans=s1.isPalindrome(x);  //算法执行 
//	cout<<ans<<endl;
	
	ans=s2.isPalindrome(x);  //算法执行 
	cout<<ans<<endl;
	
	return 0;
}
