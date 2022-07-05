//1689. Partitioning Into Minimum Number Of Deci-Binary Numbers
//Medium

int minPartitions(string n) {
        //48 -57
        
        int freq[10];
        fill(freq,freq + 10 ,0);
        for(auto a : n){
            switch(a){
                case '0' : 
                    freq[0]++;
                    break;
                case '1' : 
                    freq[1]++;
                    break;
                case '2' : 
                    freq[2]++;
                    break;
                case '3' : 
                    freq[3]++;
                    break;
                case '4' : 
                    freq[4]++;
                    break;
                case '5' : 
                    freq[5]++;
                    break;
                case '6' : 
                    freq[6]++;
                    break;
                case '7' : 
                    freq[7]++;
                    break;
                case '8' : 
                    freq[8]++;
                    break;
                case '9' : 
                    freq[9]++;
                    break;
            }
        }
        //cout<<freq[3];
        int i ;
        for( i = 9; i >= 0 ; --i){
        
            if(freq[i] >= 1)return i;
        }
        return 0;
    }