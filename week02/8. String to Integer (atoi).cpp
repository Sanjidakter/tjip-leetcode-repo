class Solution
{
public:
//Time complexity : O(n) ,length of the string
    //Space complexity : O(1)
    int myAtoi(string str)
    {

        int result = 0;
        int i = 0;
        int sign = 1;
        if (str[i] == '-')
        {
            sign = -1;
            i++;
        }

        while (str[i])
        {

            if (!(str[i] - '0' >= 0 && str[i] - '0' <= 9))
                return -1;

            result = result * 10 + str[i] - '0';
            i++;
        }
        return result * sign;
    }
};