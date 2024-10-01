class Solution
{
    public:
        vector<int> findWordsContaining(vector<string> &words, char x)
        {
            vector<int> V;
            for (int i = 0; i < words.size(); i++)
            {
                for (auto c: words[i])
                {
                    if (c == x) {
                        V.push_back(i);
                        break;
                    }
                }
            }
            return V;
        }
};