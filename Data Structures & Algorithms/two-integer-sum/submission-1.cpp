class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int requiredSum) {
        unordered_map<int, int> indexMap;

        for (int currentIndex = 0; currentIndex < numbers.size(); currentIndex++) {
            int neededValue = requiredSum - numbers[currentIndex];

            if (indexMap.find(neededValue) != indexMap.end()) {
                return {indexMap[neededValue], currentIndex};
            }

            indexMap[numbers[currentIndex]] = currentIndex;
        }

        return {};
    }
};