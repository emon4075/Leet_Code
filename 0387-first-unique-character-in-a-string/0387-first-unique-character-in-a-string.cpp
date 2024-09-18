class Solution
{
    public:
        int firstUniqChar(string s)
        {
            int A[26] = { 0 };
            for (char C: s)
            {
                A[C - 'a']++;
            }
            for (int i = 0; i < s.length(); i++)
            {
                int idx = s[i] - 'a';
                if(A[idx] == 1){
                    return i;
                }
            }
            return -1;
        }
};