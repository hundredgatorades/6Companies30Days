class Solution {
   const int dx[4] = {1, -1, 0, 0};
   const int dy[4] = {0, 0, 1, -1};

   bool dfs(vector<vector<char>> &board, string &word, int index, int x, int y,
            int n, int m, vector<vector<bool>> &visited) {
       if (index == word.length()) 
            return true;
       if (x < 0 || x >= n || y < 0 || y >= m || visited[x][y] || board[x][y] != word[index]) 
            return false;
       visited[x][y] = true;
       for (int i = 0; i < 4; i++) 
       {
           if (dfs(board, word, index + 1, x + dx[i], y + dy[i], n, m, visited)) 
                return true;
       }
       visited[x][y] = false;
       return false;
   }
public:
    bool isWordExist(vector<vector<char>>& board, string word) {
        // Code here
        int n = board.size();
        int m = board[0].size();
        vector<vector<bool>> visited(n, vector<bool>(m, false));

        for (int i = 0; i < n; i++) 
        {
           for (int j = 0; j < m; j++) 
           {
               if (board[i][j] == word[0] && dfs(board, word, 0, i, j, n, m, visited)) 
                    return true;
           }
        }
        return false;
    }
};