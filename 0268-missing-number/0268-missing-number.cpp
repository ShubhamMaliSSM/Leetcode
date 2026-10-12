class Solution { 
public: 
    int missingNumber(vector<int>& nums) { 
        int n = nums.size();
        int xor1 = 0, xor2 = 0;
        
        for(int i=0; i<n; i++){  // Changed from n-1 to n
            xor2 = xor2 ^ nums[i]; 
            xor1 = xor1 ^ i;      // Just use 'i' to naturally include 0 to n-1
        }
        xor1 = xor1 ^ n;          // Include the final number 'n'

        return xor1 ^ xor2;
    } 
};
