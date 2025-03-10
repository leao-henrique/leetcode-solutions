class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hasher;

    for (int i = 0; i < nums.size(); i++) {
        int complemento = target - nums[i];

        if (hasher.find(complemento) != hasher.end()) {
            return {hasher[complemento], i};
        }

        hasher[nums[i]] = i;
    }

    return{};
    }

    int main() {
        vector<int> nums1 = {2,7,11,15};
        int target1 = 9;
        vector<int> result1 = twoSum(nums1, target1);
        cout << "Saída [" << result1[0] << "," << result1[1] << "]" << endl;

        vector<int> nums2 = {3,2,4};
        int target2 = 6;
        vector<int> result2 = twoSum(nums1, target1);
        cout << "Saída [" << result2[0] << "," << result2[1] << "]" << endl;

        vector<int> nums3 = {3,3};
        int target3 = 6;
        vector<int> result3 = twoSum(nums1, target1);
        cout << "Saída [" << result3[0] << "," << result3[1] << "]" << endl;

        return 0;
    } 

};
