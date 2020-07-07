>>:题目描述：
从上到下按层打印二叉树，同一层的节点按从左到右的顺序打印，每一层打印到一行。

 
例如:
给定二叉树: [3,9,20,null,null,15,7],

    3
   / \
  9  20
    /  \
   15   7
返回其层次遍历结果：

[
  [3],
  [9,20],
  [15,7]
]
 

提示：

节点总数 <= 1000

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/cong-shang-dao-xia-da-yin-er-cha-shu-ii-lcof
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

>>:解法：
略

>>:程序：

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == nullptr) return vector<vector<int>>(0);
        vector<vector<int>> ans;
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty()){
            vector<int> tmp;
            int len = que.size();
            while(len--){
                TreeNode *p = que.front();
                que.pop();
                tmp.push_back(p->val);
                if(p->left) que.push(p->left);
                if(p->right) que.push(p->right);
            }
            ans.push_back(tmp);
        }
        return ans;
    }
};