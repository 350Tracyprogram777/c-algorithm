***方法一：暴力枚举法
/*#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,num,target;
    cin >> n;
    vector<int> v;
    vector<int> q;
    Solution r;
    while (n > 0)
    {
        cin >> num;
        v.push_back(num);
        n--;
    }
    cin >> target;
	vector<int> n(2);
    for (int i = 0; i < v.size(); i++) {
        for (int j = i + 1; j < v.size(); j++) {
            if (target == v[i] + v[j])
            {
                n[0] = i;
                n[1] = j;
                cout << "[" << i << "," << j <<"]"<< endl;
            }
        }
    }
	return 0;
}
*/
***方法二：利用unordered_map容器
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numToIndex;
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (numToIndex.count(complement)) {
                return { numToIndex[complement], i };
            }
            numToIndex[nums[i]] = i;
        }
    }
};

int main() {
    int n,num,targ;
    cin >> n;
    vector<int> v;
    vector<int> q;
    Solution r;
    while (n > 0)
    {
        cin >> num;
        v.push_back(num);
        n--;
    }
    cin >> targ;
    q = r.twoSum(v, targ);
    for (auto i = q.begin(); i < q.end(); i++)
    {
        cout << (*i) << " ";
    }
    return 0;
}
