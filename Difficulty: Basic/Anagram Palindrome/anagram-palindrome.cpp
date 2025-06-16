int isPossible(string s) {
    unordered_map<char, int> freq;
    for (char c : s) freq[c]++;
    
    int oddCount = 0;
    for (auto& p : freq) {
        if (p.second % 2 != 0) {
            oddCount++;
        }
    }

    return (oddCount > 1) ? 0 : 1;
}
