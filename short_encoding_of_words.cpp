struct TrieNode {
    unordered_map<char, TrieNode*> N;
    int val = 0;
};

class Solution {
public:
    void traverseAll(TrieNode* &cur, int &count) {
        if(!cur->N.size()) {
            count += cur->val + 1;
            return;
        }
        for(auto X: cur->N) {
            traverseAll(X.second, count);
        }
    }
    
    int minimumLengthEncoding(vector<string>& words) {
        TrieNode* root = new TrieNode();
        
        for(auto X: words) {
            TrieNode* cur = root;
            for(int i = X.size()-1; i >= 0; i--) {
                if(cur->N.find(X[i]) == cur->N.end()) {
                    cur->N[X[i]] = new TrieNode();
                    cur->N[X[i]]->val = cur->val + 1;
                }
                cur = cur->N[X[i]];
            }
        }
        
        int count = 0;
        TrieNode* cur = root;
        
        traverseAll(cur, count);
        
        return count;
    }
};
