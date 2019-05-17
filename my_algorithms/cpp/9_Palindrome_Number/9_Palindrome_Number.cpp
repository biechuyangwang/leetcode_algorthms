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
#include<iostream>  //����ⲿ�� 
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

// ��ת��Ϊ�ַ����Ĵ���ʽ��ֱ�ӷ�ת���ܻ��������磬
// ���Է�תһ�롣 
// ��תʱ����0��ʼ�ģ���Ҫ����λ�������Ƿ�ת��߾Ͳ��������������� 
class Solution2 {
public:
    bool isPalindrome(int x) { 
        if(x < 0)
            return false;
        int x_temp=x;
        
        int len=0;
        while(x_temp){  //��������λ��
        	x_temp/=10;
        	len++;
		} 
		
		int div_x=1;
		for(int i=0;i<len/2;i++){
			div_x *= 10;
		}
        int left_x = len%2?x/div_x/10:x/div_x;  //����Ϊ������ż�� 
        int right_x = x%div_x;
        
        if(rev(left_x) == right_x)
        	return true;
        else return false;
    }
private:
//    int rev(int x,int len){  //ע���㿪ͷ������תҪ��λ����ȫ
	int rev(int x){  //��ת��߾Ͳ����������������� 
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
	bool ans;  //���ս��ֵ 
//	Solution1 s1;  //����������� 
	Solution2 s2;
	
	int x;
	cin>>x;
//	ans=s1.isPalindrome(x);  //�㷨ִ�� 
//	cout<<ans<<endl;
	
	ans=s2.isPalindrome(x);  //�㷨ִ�� 
	cout<<ans<<endl;
	
	return 0;
}
