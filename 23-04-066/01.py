int equalSum(int N, vector<int> &A) {
        // code here
        if(N==1)
          return 1;
        int total =0 ;
        for(auto x:A)
          total += x;
        int prev =0 ;
        for(int i=0 ; i<N;++i)
        {
            int temp = total - A[i];
            if(temp == 2*prev)
              return i+1;
            prev += A[i];
              
        }
        return -1;
    }
