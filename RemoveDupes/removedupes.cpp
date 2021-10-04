#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

class Solution 
{
public:
    int removeDuplicates(vector<int>& nums) 
    {
        //case of nums being an empty array
        if(nums.size() == 0)
        {
            return 0;
        }

        //any other case
        else
        {
            //using two pointers, i, j, to iterate over array
            int i = 0;

            for(int j = 1; j < nums.size(); j++)
            {
                //when we reach a new number
                if(nums[j] != nums[i])
                {
                    //increment i
                    i++;
                    //then set the i to point to the new number
                    nums[i] = nums[j];
                }
            }
            //returning i + 1 because i does not count the unique value at position 0 of array
            return i + 1;
        }
    }
};