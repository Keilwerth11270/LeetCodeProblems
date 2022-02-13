package RemoveDupes;

public class removedupes {
    class Solution {
        public int removeDuplicates(int[] nums) 
        {

            //case of nums being an empty array
            if(nums.length == 0)
            {
                return 0;
            }

            //if there are values in nums
            else
            {
                //creating pointer i
                int i = 0;

                //creating pointer j
                for(int j = 1; j < nums.length; j++)
                {
                    //j goes thru the whole array
                    if(nums[j] != nums[i])
                    {
                        i++;
                        //i only updates when a new value is pointed at
                        nums[i] = nums[j];
                    }
                }
                //unique value at nums[0] not counted so we add one
                return i + 1;
            }
        }
    }
}
