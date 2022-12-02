class ThroneInheritance {
public:
    string k;
    unordered_map<string,pair<bool,vector<string>>>names;
    ThroneInheritance(string kingName) {
        k=kingName;
    }
    
    void birth(string parent, string child) {
        names[parent].second.push_back(child);
    }
    
    void death(string name) {
        names[name].first=true;
    }
    void func(string n,vector<string>&ans) {
        if (!names[n].first) {
            ans.push_back(n);  
        } 
        for (auto&i:names[n].second) {
            func(i,ans);
        }
    }
    
    vector<string> getInheritanceOrder() {
        vector<string>ans;
        func(k,ans);
        return ans;
    }
};
