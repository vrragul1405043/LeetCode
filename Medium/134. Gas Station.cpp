class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int size = gas.size();
        int start = 0;
        int surplus = 0;
        int deficit = 0;
        for(int i=0;i<size;i++)
        {
            surplus+=gas[i]-cost[i];
            if(surplus<0)
            {
                start = i+1;
                deficit+=surplus;
                surplus = 0;
            }
        }
        return (surplus+deficit>=0)?start:-1;
    }
};