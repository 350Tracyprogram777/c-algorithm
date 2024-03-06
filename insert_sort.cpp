//插入排序
#include<vector>
#include<iostream>
using namespace std;
void Insert_Sort(vector<int>& n)
{
	int i,j,k;
	for ( i = 1; i < n.size(); i++)
	{
		k = n[i];
		j = i - 1; 
		while (j>=0 && n[j]>k)
		{
			n[j + 1] = n[j];
			j--;
		}
		n[j + 1] = k;
	}
}
int main() {
	vector<int> v = { 5,3,4,1,2 };
	Insert_Sort(v);
	for (auto i = 0; i <= v.size(); i++)
	{
		cout << v[i] << " ,";
	}
	return 0;
}
