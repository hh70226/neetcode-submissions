class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int difference, n;
        n = numbers.size();
        int b = 1;
        for(int i{0}; i < numbers.size(); i++){
            if(numbers[b-1] + numbers[n - 1] > target){
                n--;
            }
            else if(numbers[b - 1] + numbers[n - 1] < target) b++;
            else if(numbers[b -1] + numbers[n - 1] == target) return {b, n};
        }
        return {};
    }
};
