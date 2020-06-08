>>:题目描述：
输入一个链表的头节点，从尾到头反过来返回每个节点的值（用数组返回）。

示例 1：
输入：head = [1,3,2]
输出：[2,3,1]

限制：
0 <= 链表长度 <= 10000

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/cong-wei-dao-tou-da-yin-lian-biao-lcof
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


>>:解法：
略

>>:程序：

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

//解法1,输出时反转数组
class Solution {
public:
    vector<int> reversePrint(ListNode* head) {
        vector<int> ans;
        ListNode *p = head;
        while(p){
            ans.push_back(p->val);
            p = p->next;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

//解法2,使用栈进行保存
class Solution {
public:
    vector<int> reversePrint(ListNode* head) {
        vector<int> ans;
        stack<int> stack_k;
        ListNode *p = head;
        while(p){
            stack_k.push(p->val);
            p = p->next;
        }
        while(!stack_k.empty()){
            ans.push_back(stack_k.top());
            stack_k.pop();
        }
        return ans;
    }
};
