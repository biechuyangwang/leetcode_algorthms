// Source : https://leetcode-cn.com/explore/interview/card/top-interview-quesitons-in-2018/261/before-you-start/1107/
// Author : Jun Lee
// Date   : 2019-05-09

/********************************************************************************** 
* 
* ��дһ����Ч���㷨������ m x n ���� matrix �е�һ��Ŀ��ֵ target���þ�������������ԣ�

* ÿ�е�Ԫ�ش������������С�
* ÿ�е�Ԫ�ش��ϵ����������С�
* 
* ʾ�� 1:
* 
* [
*   [1,   4,  7, 11, 15],
*   [2,   5,  8, 12, 19],
*   [3,   6,  9, 16, 22],
*   [10, 13, 14, 17, 24],
*   [18, 21, 23, 26, 30]
* ]
*  
* ���� target = 5������ true��
*  
* ���� target = 20������ false��
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
	int ans;  //���ս��ֵ 
	Solution s;  //����������� 
	
	int nums[5][5]={1,4,7,11,15;2,5,8,12,19;3,6,9,16,22;10,13,14,17,24;18,21,23,26,30} //���봦�� 
	int n=5;
	vector<int> v;  //�����б�
	for(int i=0;i<sizeof(nums)/sizeof(nums[0]);i++){
		v.push_back(nums[i]);
	}
	
	ans=s.searchMatrix(v,n);  //�㷨ִ�� 
	cout<<ans<<endl;
	
	return 0;
}

