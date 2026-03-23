int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0;
    
    int nextUnique = 1;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[nextUnique - 1]) {
            nums[nextUnique] = nums[i];
            nextUnique++;
        }
    }
    return nextUnique;
}

int main() {
    vector<int> nums = {1,1,2};
    int k = removeDuplicates(nums);
    cout << "k = " << k << ", nums[0..k-1] = ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}
