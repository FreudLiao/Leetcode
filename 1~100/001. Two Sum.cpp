class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size(); // 先去求vector的大小
        //利用兩個for迴圈去一個加一個，用if迴圈處理如果為符合值回傳值
        for (int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if( nums[i] + nums[j] == target){
                    return {i,j};
                }
            }
        }
    return{}; //回傳陣列符號
    }  
};
