class Solution{
    public:
    int countSetBits(int n)
    {
        int cnt=0;
        while(n>0)
        {
            if((n&1)==1)
            {
                cnt++;
            }
            n=n>>1;
        }
        return cnt;
    }
    

    void sortBySetBitCount(int arr[], int n)
    {
        vector<pair<int, int>> ans;
    
        for (int i = 0; i < n; i++)
        {
            ans.push_back(make_pair(arr[i], countSetBits(arr[i])));
        }
    
        stable_sort(ans.begin(), ans.end(), [](const auto& a, const auto& b) { 
            return a.second>b.second; 
        });
        for (int i = 0; i < n; i++)
        {
            arr[i] = ans[i].first;
        }
    }
};