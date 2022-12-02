
class BrowserHistory {
public:
    vector<string> ans;
    int curr = 0;
    int end = 0;
    BrowserHistory(string homepage) {
        ans.push_back(homepage);
    }
    
    void visit(string url) {
        if(curr < end)
        {
            curr++;
            ans[curr] = url;
        } else if(curr == end && curr == ans.size()-1){
            curr++;
            ans.push_back(url);
        } else
        {
            curr++;
            ans[curr] = url;
        }
        end = curr;
    }
    
    string back(int steps) {
        curr -= steps;
        if(curr < 0)
            curr = 0;
        return ans[curr];
    }
    
    string forward(int steps) {
        curr += steps;
        if(curr > end)
        curr = end;
        return ans[curr];
    }
};
