//1465. Maximum Area of a Piece of Cake After Horizontal and Vertical Cuts
//Medium


int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
         int maxh = 0;
        horizontalCuts.push_back(h);
        sort( horizontalCuts.begin(), horizontalCuts.end());
        maxh =  horizontalCuts[0];
        for(int i = 1; i < horizontalCuts.size(); i++){
            maxh = max( horizontalCuts[i] -  horizontalCuts[i-1],maxh);
        }
        
        verticalCuts.push_back(w);
        sort(verticalCuts.begin(),verticalCuts.end());
         int maxv = verticalCuts[0];
        for(int i = 1; i < verticalCuts.size(); i++){
            maxv = max( verticalCuts[i] - verticalCuts[i-1],maxv);
        }
        
            return (1LL*maxh*maxv) % 1000000007;
    }