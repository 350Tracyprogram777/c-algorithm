# C++STL中的无序版map(unordered_map)
```cpp
under_map<key,value> m;//哈希表
```
## m.size()元素个数

## m.insert(x)插入元素

## m.find(key)查找 and m.count(key)统计个数

## m.erase(key)删除

## m[key]访问value

##例子
``` cpp
#include"iostream"
#include"unordered_map"
using namespace std;
int main{
  unordered_map<char, int> m = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000},
    };
  cout<<m.s.ize()<<endl;
  if(m.count('L')==1)
  {
    cout<<m['L']<<endl;
  }
  for(auto i = m.begin();i < m.end();i++)
  {
    cout<<i->first<<" "<<i->second<<endl;
  }
  return 0
}
```
