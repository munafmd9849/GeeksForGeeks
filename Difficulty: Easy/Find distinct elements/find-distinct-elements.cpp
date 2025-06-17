// User function Template for C++
int distinct(vector<int>& arr) {
    // Your code here
    unordered_set<int> us;
    for(int i:arr){
        us.insert(i);
    }
    return us.size();
}