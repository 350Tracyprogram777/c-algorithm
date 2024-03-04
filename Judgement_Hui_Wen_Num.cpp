#include<iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || x % 10 == 0 && x != 0){
            //小于零一定不是回文数；
            //尾数是0的，除了0以外的都是不是回文数。
            return false;
        }
        //我们采用比较前一半与后一半的反转是否相等，若相等即可；
        //如1551，前一半15，后一半51反转后15，15=15，则1551为回文数；
        //如15651，前一半得到15，后一半651反转后156，所以我们加一个
        //前一半==后一半的反转（或)前一半==后一半的反转/10。
        int The_reversal_of_the_last_half = 0;
        while (x > The_reversal_of_the_last_half)
        {
            The_reversal_of_the_last_half = The_reversal_of_the_last_half * 10 + x % 10;
            x /= 10;
        }
        return x == The_reversal_of_the_last_half || x == The_reversal_of_the_last_half / 10;
    }
};
int main()
{
    Solution q;
    int x;
    cin >> x;
    if (q.isPalindrome(x))
    {
        cout << x << "是一个回文数" << endl;
    }
    else {
        cout << x << "不是一个回文数" << endl;
    }
    return 0;
}
