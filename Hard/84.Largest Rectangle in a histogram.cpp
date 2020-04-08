class Solution {
public:
    int largestRectangleArea(vector<int>& height) {
        
        if(!height.size())
            return 0;
        
        stack<int>s;
        int size = height.size();
        int top,i;
        int max_area = INT_MIN;
        int area = 0;

        for(i=0;i<size;i++)
        {
            if(s.empty() || height[s.top()]<height[i])
                s.push(i);
            else
            {
                while(!s.empty() && height[s.top()]>height[i])
                {
                    top = s.top();
                    s.pop();
                    if(!s.empty())
                        area = height[top] *(i-s.top()-1);
                    else
                        area = height[top] * i;
                    max_area = std::max(max_area, area);
                }
                s.push(i);
            }          
        }
        while(!s.empty())
        {
            top = s.top();
            s.pop();
            if(!s.empty())
                area = height[top] * (i-s.top()-1);
            else
                area = height[top] * i;
            max_area = std::max(max_area, area);  
        }    
        return max_area;
    }
};