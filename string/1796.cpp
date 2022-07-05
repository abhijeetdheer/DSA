 //1769. Minimum Number of Operations to Move All Balls to Each Box
 //medium

 vector<int> minOperations(string boxes) {
        
        
        int n = boxes.size();
        vector<int> ans(n,0);
        int last = 0 , sum = (boxes[0] -'0');
        for(int i = 1; i < n; i++){
           ans[i] += last+sum;
            last = ans[i];
            sum += (boxes[i] - '0');
            
        }
        
        last = 0 ;
        sum = (boxes[n-1] -'0');
         for(int j = n -2; j >= 0  ; --j){
              ans[j] += last+sum;
            last = sum+last;
            sum += (boxes[j] - '0');
             
            }
        return ans;
    }