class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res="";
        if (strs.size()==0)
            return res;
        int len=strs.size(),lcp=0;
        sort(strs.begin(),strs.end());
        int a=0,b=0;
        string s1=strs[0],s2=strs[len-1];
        while (a<s1.size() && b<s2.size()){
            if(s1[a]==s2[b]){
               res.push_back(s1[a]);
               a++;
               b++;
           }
            else{
                break;
            }
            
        }
        return res;
    }
};

//Leetcode link: https://leetcode.com/problems/longest-common-prefix/
