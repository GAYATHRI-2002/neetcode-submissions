#include <unordered_set>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        std::unordered_set<int> HashSetName;

        for(int i: nums){
            if(HashSetName.find(i) != HashSetName.end()){
                return true;
            }
            HashSetName.insert(i);
        }
         return false;

        



        
    }
};