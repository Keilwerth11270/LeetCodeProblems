#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <iostream>
#include <unordered_map>


using namespace std;

class Solution
{
    public:
        vector<int> twoSum(vector<int>& nums, int target)
        {   
            //vector to contain return indices of twosum soln
            vector<int> retVal;
            //size of nums array
            int size = nums.size();
            //difference between item i and target
            int diff;
            //map of nums iterated through
            unordered_map<int, int> numsmap;

            //iterating through the nums array
            for(int i = 0; i < size; i++)
            {
                //setting diff
                diff = target - nums[i];

                /*
                in the first iteration of the for loop
                the numsmap will be empty so this if 
                statement won't even run. However once the
                first iteration passes, numsmap.find() will
                search for the difference of target - nums[i]
                until the end of the map.
                */
                if(numsmap.find(diff) != numsmap.end())
                {
                    /*once the target has been reached
                    take the current index of nums*/
                    retVal.push_back(i);
                    /*and the index (second) of the item
                    in the numsmap*/
                    retVal.push_back(numsmap.find(diff)->second);
                    /*and push it onto the vector and return
                    the vector*/
                    return retVal;
                }
                //setting numsmap key to the value
                //and value (second) to the index of the array
                numsmap[nums[i]] = i;
            }
            return retVal;
        }
};