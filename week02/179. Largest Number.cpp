class Solution {
public:
   // TC: O(NlogN) // not sure for sorting O(nlogn) amd for for loop O(n)
   // MC: O(1)
    static bool compare(int num1, int num2) {
        string s1 = to_string(num1);
        string s2 = to_string(num2);
        
        
        if(s1[0] != s2[0])
            return s1[0] > s2[0];
        
        return (s1 + s2) > (s2 + s1);
    }
    
    string largestNumber(vector<int>& nums) {
        string result;
        sort(nums.begin(), nums.end(), compare);
        
        for(auto x : nums)
            result += to_string(x);
        
        if(result[0] == '0')
            return "0";
        
        return result;
    }
    
};