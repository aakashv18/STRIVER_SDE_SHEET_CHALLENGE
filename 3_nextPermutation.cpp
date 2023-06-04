#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    int index1 = -1;
    vector<int> ans;
    // traverse from back find(a[i] < a[i+1])
    for(int i=n-2;i>=0;i--)
    {
        if(permutation[i] < permutation[i+1])
        {
            index1 = i;
            break;
        }
    }
    // if not found then reverse permutation and return
    if(index1 == -1)
    {
        reverse(permutation.begin(),permutation.end());
        return permutation;
    }
    // find smaller greater element from end 
    for(int i=n-1;i>=0;i--)
    {
        if(permutation[i] > permutation[index1])
        {
            swap(permutation[i],permutation[index1]);
            break;
        }
    }
    // reverse right array of index1 and return
    reverse(permutation.begin()+(index1 + 1),permutation.end());
    return permutation;
}
