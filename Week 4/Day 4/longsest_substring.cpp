class Solution{
  public:
    int longestKSubstr(string s, int k) {
        int l = 0,r = 0;
        
        int n = s.size();
        map<char,int> cnt;
        
        int ans = 0;
        while(r<n)
        {   
            cnt[s[r]]++;
        
            if(cnt.size()==k)
            {
                ans = max(ans,r-l+1);
            }
            else
            {
                while(l<=r && cnt.size()>k)
                {
                    int val = s[l];
                    cnt[val]--;
                    if(cnt[val]==0)
                    {
                        cnt.erase(val);
                    }
                    
                    l++;
                }
                
            }
            
            r++;
        }
        if(ans==0)
        {
            return -1;
        }
        else 
        {
            return ans;
        }
    }
};
