class Solution
{
    public:
        bool is_Palindrome(string S)
        {
            int i = 0, j = S.length()-1;
            while (i < j)
            {
                if (S[i] != S[j])
                {
                    return false;
                }
                i++;
                j--;
            }
            return true;
        }
    string firstPalindrome(vector<string> &words) {
        for(auto word : words){
            if(is_Palindrome(word)){
                return word;
            }
        }
        return "";
    }
};