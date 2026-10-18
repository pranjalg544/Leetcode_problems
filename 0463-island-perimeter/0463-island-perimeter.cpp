class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int total_lands = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == 1) {
                    total_lands++;
                }
            }
        }
        int total_perimeter = total_lands*4;

        // now we will find the shared sides horizontally
        int shared_sides_horizontally = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size()-1;j++){
                if(grid[i][j]==1 && grid[i][j+1]==1){
                    shared_sides_horizontally++;
                }
            }
        }

        //now we will calculate the shared sides vertically

        int shared_sides_vertically=0;
        for(int i =0; i<grid.size()-1;i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1 && grid[i+1][j]==1){
                    shared_sides_vertically++;
                }
            }
        }
        int total_perimeter_land = total_perimeter - (2*shared_sides_horizontally) - (2*shared_sides_vertically);
        return total_perimeter_land; 
  }
};