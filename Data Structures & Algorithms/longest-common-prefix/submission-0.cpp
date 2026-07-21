class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0]; //use the first string to compare
        for(int i = 0; i < strs.size(); i++){
            int count = 0;
            while(count < min(prefix.length(), strs[i].length())){
                if(prefix[count] != strs[i][count]){
                    break;
                }
                count++;
            }
            prefix = prefix.substr(0, count);
        }
        return prefix;
    }
};