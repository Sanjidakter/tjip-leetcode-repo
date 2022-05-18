class Solution {
public:
      // TC: O(NlogN) for the for loop O(n)+for sort O(nlogn)
       // MC: O(1)
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>umap;
        for(auto str : strs)
        {
            string sorted = str;
            sort(sorted.begin(), sorted.end());
            umap[sorted].push_back(str);
        }

        for(auto x:umap)
        {
            ans.push_back(x.second);
        }
        return ans;
    }
};