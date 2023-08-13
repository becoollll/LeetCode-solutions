class Solution {
    public:
    vector<int> getRow(int rowIndex) {
        vector<vector> ans;
        if(rowIndex == 0){
            return {1};
        }
        if(rowIndex == 1){
            return {1, 1};
        }
        for(int i = 0; i < rowIndex+1; i++){
            vector<int> temp;
            for(int j = 0; j <= i; j++){
                if(i != 0 && j == 0){   //[1][0],[2][0]...   
                   temp.push_back(1);
                }
                if(i != 0 && i != 1 && i != j && j != 0){
                    temp.push_back(ans[i-1][j-1] + ans[i-1][j]);
                }
                if(i == j){
                    temp.push_back(1);
                    ans.push_back(temp);
                }
            }
        }
        vector<int> ret;
        for(int i = 0; i <= rowIndex; i++){
            ret.push_back(ans[rowIndex][i]);
        }
        return ret;
    }
};