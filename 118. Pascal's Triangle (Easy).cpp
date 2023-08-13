class Solution {
    public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> ans;

        if(numRows == 1){
            return {{1}};
        }
        if(numRows == 2){
            return {{1}, {1, 1}};
        }
        for(int i = 0; i < numRows; i++){
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
        return ans;
    }
};