#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int profit = 0;
    int minPrice = INT_MAX;
    for(int i=0;i<prices.size();i++)
    {
        minPrice = min(prices[i],minPrice);
        profit = max(profit,prices[i]-minPrice);
    }
    return profit;
}
