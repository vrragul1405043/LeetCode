/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int low=1;
        int high=n;
        int mid = low + (high-low)/2;
        while(guess(mid)!=0)
        {
            if(guess(mid)==-1)
               high=mid-1;
            else
               low=mid+1; 
            mid = low + (high-low)/2;
        }    
        return mid;
    }
};