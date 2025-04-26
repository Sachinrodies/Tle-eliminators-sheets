#include <vector>
#include <unordered_set>
#include <iostream>
using namespace std;

class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        unordered_set<int> uniqueXors;
        int n = nums.size();
        
        // Handle all possible triplets including duplicates
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < n; k++) {
                    // Skip if all indices are same
                    if (i == j && j == k) continue;
                    int val = nums[i] ^ nums[j] ^ nums[k];
                    uniqueXors.insert(val);
                }
            }
        }
        
        return uniqueXors.size();
    }
};

// Test cases
int main() {
    Solution sol;
    
    // Test case 1
    vector<int> nums1 = {3, 1, 2, 4};
    cout << "Test case 1: " << sol.uniqueXorTriplets(nums1) << endl;  // Expected: 8
    
    // Test case 2
    vector<int> nums2 = {1, 2, 3};
    cout << "Test case 2: " << sol.uniqueXorTriplets(nums2) << endl;  // Expected: 4
    
    // Test case 3
    vector<int> nums3 = {1, 1, 1};
    cout << "Test case 3: " << sol.uniqueXorTriplets(nums3) << endl;  // Expected: 1
    
    return 0;
} 