// **Variant 1: Recursive Backtracking**
void backtrack(int start, vector<int>& nums, vector<int>& current, vector<vector<int>>& result) {
    result.push_back(current);
    for (int i = start; i < nums.size(); ++i) {
        current.push_back(nums[i]);
        backtrack(i + 1, nums, current, result);
        current.pop_back();
    }
}

vector<vector<int>> subsetsBacktracking(vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> current;
    backtrack(0, nums, current, result);
    return result;
}