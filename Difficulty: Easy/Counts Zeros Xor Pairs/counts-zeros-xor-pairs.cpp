long long int calculate(int arr[], int n) {
    // Complete the function
    unordered_map<int ,int>um;
    for(int i=0;i<n;i++){
        um[arr[i]]++;
    }
    long long int c=0;
    for(auto i:um){
        c+=i.second*(i.second-1)/2;
    }
    return c;
}