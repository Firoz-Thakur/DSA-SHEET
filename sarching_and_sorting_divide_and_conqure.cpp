https://leetcode.com/problems/search-in-rotated-sorted-array/submissions/

You are given an integer array nums sorted in ascending order, and an integer target.

Suppose that nums is rotated at some pivot unknown to you beforehand (i.e., [0,1,2,4,5,6,7] might become [4,5,6,7,0,1,2]).

If target is found in the array return its index, otherwise, return -1.

 

Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
Example 2:

Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
Example 3:

Input: nums = [1], target = 0
Output: -1
 

Constraints:

1 <= nums.length <= 5000
-10^4 <= nums[i] <= 10^4
All values of nums are unique.
nums is guranteed to be rotated at some pivot.
-10^4 <= target <= 10^4





int search(vector<int>& ar, int x) {
    
         int i=0;
         int j=ar.size()-1;
         while(i<=j)
         {
           int mid=(i+j)/2;
           if(ar[mid]==x)
           {
               return mid;
           }
          if(ar[mid]<=ar[j])
          {
              if(x>=ar[mid] && x<=ar[j])
              {
                  i=mid+1;
              }
             else
             {
                 j=mid-1;
             }
          }
        else
        {
            if(x<=ar[mid] && x>=ar[i])
              {
                  j=mid-1;
              }
             else
             {
                 i=mid+1;
             }   
        }
         }
             
             
             
             
return -1;
        
        
    }
