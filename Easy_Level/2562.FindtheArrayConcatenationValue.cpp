

class Solution {
public:
    long long func_concat(long long a, long long b)
{
    string s1 = to_string(a);
    string s2 = to_string(b);
 
    string s = s1 + s2;
    long long ans = stoi(s);
 
    return ans;
}
    long long findTheArrayConcVal(vector<int>& nums) {
      
     int n=nums.size();
     long long ans=0;
       long long temp=0;
        long long start=0,end=n-1;
        
    while(start<end){     

            temp= func_concat(nums[start],nums[end]);
            ans+=temp;
       start++;
       end--;
        }

    if(n%2!=0){
        ans+=nums[n/2];
    }
        
        
        return ans;
        
    }
};
