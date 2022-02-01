pair<int,int> findSmallestRange(int arr[][N], int n, int k)
    {
          //code here
       set<pair<int, pair<int, int>>> s;
       pair<int, int> ans{0, INT_MAX};
       
       for(int i = 0; i < k; ++i){
           s.insert( {arr[i][0], {i, 0}} );
       }
       
       while( !s.empty() ){
           int minVal = s.begin()->first; 
           int maxVal = s.rbegin()->first;
           if( ans.second - ans.first > maxVal - minVal )
           {
               ans.first = minVal;
               ans.second = maxVal;
           }
           
           int r = s.begin()->second.first;
           int c = s.begin()->second.second;
           s.erase(s.begin());
           if( c + 1 == n )
               break;
           s.insert( {arr[r][c+1], {r, c+1}} );
       }
       return ans;
    }