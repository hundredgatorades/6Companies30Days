vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       stack<pair<int ,int>>st;
      
       vector<int >v;
      
       for(int i=0;i<n;i++)
       {
           int day=1;
          
           while(!st.empty() && st.top().first<=price[i])
           {
              day+=st.top().second;
              st.pop();
           }
          
           st.push({price[i],day});
           v.push_back(day);
       }
       return v;
    }