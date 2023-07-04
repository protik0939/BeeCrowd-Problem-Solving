#include <bits/stdc++.h>
using namespace std;
int main()
{
    int nums[3];
    for (int i=0; i<3; i++)
    {
        cin>>nums[i];
    }
    vector<int>cpy_nums;
    for(int i=0; i<3; i++)
    {
        cpy_nums.push_back(nums[i]);
    }
    for(int j=0; j<3; j++)
    {
        for (int i=0; i<2; i++)
        {
            if (nums[i]>nums[i+1])
            {
                int temp = nums[i];
                nums[i] = nums[i+1];
                nums[i+1] = temp;
            }
            }
    }
for (int i=0;i<3;i++)
{
    cout<<nums[i]<<endl;
}
cout<<"\n";
for (int i=0;i<3;i++)
{
    cout<<cpy_nums[i]<<endl;
}
}
