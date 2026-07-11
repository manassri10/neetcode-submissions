#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<int> ans;

        // Count frequencies
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        // Create buckets
        vector<vector<int>> buckets(nums.size() + 1);

        // Place elements into their frequency bucket
        for (auto it = mp.begin(); it != mp.end(); ++it) {
            buckets[it->second].push_back(it->first);
        }

        // Traverse buckets from highest frequency to lowest
        for (int i = nums.size(); i >= 1 ; i--) {

            for (int j = 0 ; j < buckets[i].size() ; j++) {
                
                ans.push_back(buckets[i][j]);
                if(ans.size() == k)
                {
                    return ans;
                }
            }
        }
    }
};