#include <iostream>
#include <unordered_map>
#include <vector>
class Solution {
public :
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> umap;
        int n = nums.size();
        for (int i = 0 ; i < n; i++) {
            int temp = target - nums[i];
            if (umap.find(temp) != umap.end()) {
                return {umap[temp], i};
            }
            umap[nums[i]] = i;
        }
        return {-1, -1};
    }

};


int main() {

    Solution solution;
    std::vector<int> nums = {2,7,11,15};
    int target = 18;
    std::vector<int> result = solution.twoSum(nums, target);
    std::cout << result[0] << " " << result[1] << std::endl;
    
    return 0;
}