class Solution {
public:

    bool isValidSudoku(vector<vector<char>>& board) {
        int m=board.size();//row
        int n= board[0].size(); //column
   
    for(int i=0;i<n;i++){
        unordered_set<char>st;
        for(int j=0;j<m;j++){
            if(board[i][j]=='.')
            continue;
        
        if(st.find(board[i][j])!=st.end()){
            return false;
        }
        st.insert(board[i][j]);
        }
    }
    for(int j=0;j<m;j++){
        unordered_set<char>st;
        for(int i=0;i<m;i++){
            if(board[i][j]=='.'){
                continue;
            }
         if(st.find(board[i][j])!=st.end()){
            return false;
         }
         st.insert(board[i][j]);
        }
    }
       for(int row = 0; row < 9; row += 3) {
    for(int col = 0; col < 9; col += 3) {

        unordered_set<char> st;

        for(int i = row; i < row + 3; i++) {
            for(int j = col; j < col + 3; j++) {

                if(board[i][j] == '.')
                    continue;

                if(st.find(board[i][j]) != st.end()) {
                    return false;
                }

                st.insert(board[i][j]);
            }
        }
    }
}
    return true;    
    }
};
