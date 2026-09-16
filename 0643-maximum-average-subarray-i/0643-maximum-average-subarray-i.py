class Solution(object):
    def findMaxAverage(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: float
        """

        n=len(nums)

        curr_sum=0

        for i in range(k):
            curr_sum+=nums[i]

        max_sum=curr_sum

        for i in range(k,n):
            curr_sum+=nums[i]
            curr_sum-=nums[i-k]

            max_sum=max(curr_sum,max_sum)

        if(k==1):
            return max_sum

        else:
            return max_sum/float(k)
    