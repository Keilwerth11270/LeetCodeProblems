package TwoSum;

import java.util.HashMap;

public class twosum 
{
    class Solution 
    {
        public int[] twoSum(int[] nums, int target) 
        {
            //array to contain return indices
            int retVal[] = new int[2];
            
            //size of nums array
            int size = nums.length;

            //initializing difference between item i and target
            int diff;

            //creating hashmap of nums[i], i
            HashMap<Integer, Integer> numsmap = new HashMap<>();

            //iterating through array
            for(int i = 0; i < size; i++)
            {
                //setting diff to the difference that we're looking for
                diff = target - nums[i];

                //if the map contains the difference we're looking for
                if(numsmap.containsKey(diff))
                {
                    //hardcoded, adding the values to the retVal array
                    retVal[0] = numsmap.get(diff);
                    retVal[1] = i;
                    return retVal;
                }
                //if the map doesn't contain necessary value, we add curr val
                numsmap.put(nums[i], i);
            }

            return retVal;
        }
    }

};