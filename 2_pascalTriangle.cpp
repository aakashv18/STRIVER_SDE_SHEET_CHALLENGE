#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
    vector<vector<long long int>> ans;
    
    for(int row=1;row<=n;row++)
    {
      vector<long long int> temp;
      temp.push_back(1);
      long long int var = 1;
      for(int col=1;col<row;col++)
      {
        var = var * (row - col);
        var = var / (col);
        temp.push_back(var);
      }
      ans.push_back(temp);
    }

    return ans;
}
