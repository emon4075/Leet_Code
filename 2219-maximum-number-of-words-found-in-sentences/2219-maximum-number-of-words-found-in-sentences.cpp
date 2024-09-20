class Solution
{
    public:
        int count_Word(string s)
        {
            stringstream ss(s);
            string word;
            int count = 0;
            while (ss >> word)
            {
                count++;
            }
            return count;
        }
    int mostWordsFound(vector<string> &sentences)
    {
        int max_Word = -1;
        for (auto sentence: sentences)
        {
            max_Word = max(max_Word, count_Word(sentence));
        }
        return max_Word;
    }
};