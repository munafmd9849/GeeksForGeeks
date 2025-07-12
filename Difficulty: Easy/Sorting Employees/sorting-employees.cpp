class Solution {
  public:
    vector<string> sortRecords(vector<string>& employee, vector<int>& salary) {
        // Your code goes here
        vector<pair<int,string>> p;
        for(int i=0;i<salary.size();i++){
            p.push_back({salary[i],employee[i]});
        }
        sort(p.begin(),p.end());
        
        for(int i=0;i<salary.size();i++){
            employee[i]=p[i].second;
        }
        return employee;
    }
};