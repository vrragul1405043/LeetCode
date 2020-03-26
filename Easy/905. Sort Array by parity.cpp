class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& a) {
        
        int i=0;
        int j=a.size()-1;
        
        while(true)
        {
            while(i<j && a[i]%2==0)
                i++;
            while(i<j && a[j]%2!=0)
                j--;
            
            if(i<j)
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                i++;
                j--;
            }
            else
              break;  
        }    
        return a;
    }
};