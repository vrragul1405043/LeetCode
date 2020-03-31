class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(), intervals.end());
        
        if(intervals.size()==0)
            return {};
        
        vector<vector<int>> res;
        int size = intervals.size();
        int x = intervals[0][0];
        int y = intervals[0][1];    
        for(int i=1;i<size;i++)
        {   
          if(intervals[i][0]<=y)
            {
                if(intervals[i][1]>y)
                    y=intervals[i][1];
            }
            else
            {
                res.push_back({x,y});
                x=intervals[i][0];
                y=intervals[i][1];
            }       
        }
        res.push_back({x,y});
        return res;
    }
};