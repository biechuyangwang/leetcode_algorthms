// Source : https://leetcode-cn.com/explore/interview/card/top-interview-quesitons-in-2018/261/before-you-start/1106/
// Author : Jun Lee
// Date   : 2019-05-06

/********************************************************************************** 
* 
* ֻ����һ�ε�����
* ����һ���ǿ��������飬����ĳ��Ԫ��ֻ����һ�����⣬����ÿ��Ԫ�ؾ��������Ρ��ҳ��Ǹ�ֻ������һ�ε�Ԫ�ء�
* 
* ˵����
* 
* ����㷨Ӧ�þ�������ʱ�临�Ӷȡ� ����Բ�ʹ�ö���ռ���ʵ����
* 
* ʾ�� 1:
* 
* ����: [2,2,1]
* ���: 1
* ʾ�� 2:
* 
* ����: [4,1,2,1,2]
* ���: 4
*  
**********************************************************************************/

#include<iostream>  //����ⲿ�� 
#include<vector>
using namespace std;

class Solution {  // ��Ҫ˼·�����������ȥ��ż���γ��ֵ���ȥ�� 
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans^=nums[i];  // ��������������ȥ�ء�
        }
        return ans;
    }
};

int main(){
	int ans;  //���ս��ֵ 
	Solution s;  //����������� 
	
	int nums[]={3,2,3}; //���봦�� 
	vector<int> v;
	for(int i=0;i<sizeof(nums)/sizeof(nums[0]);i++){
		v.push_back(nums[i]);
	}
	
	ans=s.singleNumber(v);  //�㷨ִ�� 
	cout<<ans<<endl;
	
	return 0;
}
