

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {

long long count=0;
int m=grid.size();
int n=grid[0].size();
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(grid[i][j]==1){
            count++;
        }
    }
}

count*=4;

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){

        if(j<n-1 && grid[i][j]==1 && grid[i][j]==grid[i][j+1]){
        
            count-=2;
        }
         if(i<m-1 && grid[i][j]==1 && grid[i][j]==grid[i+1][j]){
            count-=2;
        }
    }
   
}

return count;
    }
};
