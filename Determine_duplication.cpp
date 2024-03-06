//判断是否有重复的元素
#include<iostream>
#include<vector>
#include <algorithm>
#include <unordered_set>
using namespace std;
class Solution1 {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                return true;
            }
        }
        return false;
    }
};
class Solution2 {
public:
    bool containsDuplicate(vector<int>&nums) {
        unordered_set<int> s;//是一个无序的set，容器里面的元素都是独一无二的，所以count（）只能是1或0
        for (int x : nums) {
            if (s.find(x) != s.end()) {//如果没有找到x返回end（）的迭代器，找到了返回其所在的key
                return true;
            }
            s.insert(x);
        }
        return false;
    }
};
