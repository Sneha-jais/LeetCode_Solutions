

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int e) {
        
        int n=c.size();
vector <bool> ans;
int temp=0;
 for(int j=0;j<n;j++){

c[j]+=e;
temp=0;
        for(int i=0;i<n;i++){
             temp=max(temp,c[i]);
        }
        if(temp==c[j]){
            ans.push_back(true);
        }
        else{
          ans.push_back(false);   
          
        }
        c[j]-=e;
}

return ans;
    }
};
