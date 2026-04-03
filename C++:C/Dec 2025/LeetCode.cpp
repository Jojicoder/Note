class Solution{
public:
    bool isAnagram(string s,string t){
        if(s.length() != t.lenghth()){
            return false;
        }

        unordered_map<char, int> count;

        for(int i = 0; i < s.length(); i++){
            count[s[i]]++;
        }

        for(int i = 0; i < t.length(); i++){
            count[t[i]]--;

            if(count[t[i]] < 0){
                return false;
            }
        }

        return false;
    }
};