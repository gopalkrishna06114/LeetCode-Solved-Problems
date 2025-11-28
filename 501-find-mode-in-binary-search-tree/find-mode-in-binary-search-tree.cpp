/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    void inOrder(TreeNode* root,vector<int>& arr){
        if(root==NULL){
            return;
        }
        inOrder(root->left,arr);
        arr.push_back(root->val);
        inOrder(root->right,arr);
    }
public:
    vector<int> findMode(TreeNode* root) {
        vector<int>modes;
        inOrder(root,modes);
        map<int,int>mpp;
        for(int i=0;i<modes.size();i++){
            mpp[modes[i]]++;
        }
        vector<int>ans;
        int maxFreq=INT_MIN;
        for(auto it:mpp){
            maxFreq=max(maxFreq,it.second);
        }
        for(auto it:mpp){
            if(it.second==maxFreq){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};