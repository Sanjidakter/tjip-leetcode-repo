class Solution
{
public:
    // TC: O(N*M)
    // MC: O(1)
    int strStr(string haystack, string needle)
    {
        int m = haystack.size();
        int n = needle.size();

        for (int i = 0; i <= m - n; i++)
        {

            int j = 0;

            bool isBool = true;

            for (; j < n; j++)
            {

                if (haystack[i + j] != needle[j])
                {

                    isBool = false;

                    break;
                }
            }

            if (isBool)
            {

                return i;
            }
        }

        return -1;
    }
};