class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hashmap;//imagine nums [2,11,7,9], target = 9
        vector<int> ans(2);
        for(int i=0;i<nums.size();i++){
            auto it = hashmap.find(target-nums[i]);//first find = 9-2 = 7, tries to find 7
            //find is used to search for key-value pair
            // and here, "target-nums[i]" acts as a key
            if (it != hashmap.end()){// if 7 found, (which it was in it = 2 pos)
                ans[0] = it->second;//secpnd part of the set in hash map iterator (x,y), y
                ans[1] = i;//intiatlizing answer set
                break;//(0,2)
            }
            else{//if it wasn't found
                hashmap[nums[i]] = i;
            }
        }
        return ans;
    }
};
