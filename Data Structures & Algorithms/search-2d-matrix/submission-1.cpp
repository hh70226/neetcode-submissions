class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m_lower = 0;
        int m_upper = matrix.size() - 1;
        int m_target{0};
        int n_max = matrix[0].size() - 1;
        while(m_lower <= m_upper){
            int m_middle = m_lower + (m_upper - m_lower)/2;
            if(target >= matrix[m_middle][0] && target <= matrix[m_middle][n_max]){
                m_target = m_middle;
                break;
            }
            else if(target < matrix[m_middle][0]){
                m_upper = m_middle - 1;
            }
            else if(target > matrix[m_middle][n_max]){
                m_lower = m_middle + 1;
            }
        }
        
        int n_lower = 0;
        int n_upper = n_max;

        while(n_lower <= n_upper){
            int n_middle = n_lower + (n_upper - n_lower)/2;
            
            if(target == matrix[m_target][n_middle]){
                return true;
            }
            else if(target > matrix[m_target][n_middle]){
                n_lower = n_middle + 1;
            }
            else if(target < matrix[m_target][n_middle]){
                n_upper = n_middle - 1;
            }
        }

        return false;
    }
};
