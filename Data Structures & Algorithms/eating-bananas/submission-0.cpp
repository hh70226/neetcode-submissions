class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max_val = *max_element(piles.begin(), piles.end());
        int min_val = 1;
        int k;
        
        while(min_val <= max_val){
            k = min_val + (max_val - min_val)/2;
            int hours = 0;
            
            for(int i = 0; i < piles.size(); i++){
                if(hours > h){
                    break;
                }
                hours = hours + ceil((double)piles[i]/k);
            }

            if(hours <= h){
                max_val = k - 1;
            }
            else{
                min_val = k + 1;
            }
        }
        return min_val;

    }
};
