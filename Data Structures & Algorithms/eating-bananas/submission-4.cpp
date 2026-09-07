class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max = *max_element(piles.begin(), piles.end());
        int min = 1;
        int k;

        while(min <= max){
            k = min + (max - min)/2;
            int hours = 0;

            for(int i = 0; i < piles.size(); i++){
                hours = hours + ceil((double)piles[i]/k);
                if(hours > h){
                    min = k + 1;
                }
            }

            if(hours <= h) max = k - 1;
            else min = k + 1;
        }
        return min; 
    }
};
