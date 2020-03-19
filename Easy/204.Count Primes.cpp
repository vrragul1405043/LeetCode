class Solution {
public:
    int countPrimes(int n) {
            int primeCount = 0;	
            bool prime[n+1]; 
            memset(prime, true, sizeof(prime)); 
        
        for (int p=2; p*p<=n; p++) 
        {  
            if (prime[p] == true) 
             {  
                for (int i=2; i*p<n; i++)
                    prime[i*p] = false; 
            } 
        }
        for(int i=2; i<n; i++)
        {
            if(prime[i]==true)
                primeCount++;
        }
       return primeCount;     
    }
};