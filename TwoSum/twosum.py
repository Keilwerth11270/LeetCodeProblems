class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        
        #initializing retVal list
        retVal = []
        
        #storing lenght of nums list
        size = len(nums)

        #hashmaps are implemented through the builtin dictionary data type
        numsdict = {}

        #iterator
        i = 0       
        #iterating over each index value
        for i in range(size):
            #nums[i] + diff = target , therefore we need to find diff
            diff = target - nums[i]

            #if the dictionary contains the difference we're looking for
            if(numsdict.has_key(diff)):
                #append the index of the difference and the current index
                retVal.append(numsdict.get(diff))
                retVal.append(i)
                #then return
                return retVal
            
            #else, add key: nums[i], value = i, to the dictionary
            numsdict[nums[i]] = i

        #retVal will be empty otherwise and an empty list returned
        return retVal