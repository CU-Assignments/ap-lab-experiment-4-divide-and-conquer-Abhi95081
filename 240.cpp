//Search a 2D Matrix II

 bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int row = matrix.size();
        int col = matrix[0].size();

        int s = 0;
        int e = col - 1;

        while(s<row && e >=0){

            int ele = matrix[s][e];

            if(ele == target){
                return 1;
            }
            if(ele < target){
                s++;
            }else{
                e--;
            }

        }
        return 0;
    }

**output**
// Input
// matrix =
// [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]]
// target =
// 5
// Output
// true
// Expected
// true
