int code(vector<vector<int>>&g, int i,int row ,int n, int m)
{
if(i>=n) return row;
if(g[i][row] == 1)
{
if(row == m-1  || g[i][row+1] == -1)return -1;
if(g[i][row+1] == 1) return code(g,i+1,row+1,n,m);
}
if(g[i][row] == -1)
{
if(row == 0 || g[i][row-1] == 1) return -1;
if(g[i][row-1] == -1) return code(g,i+1,row-1,n,m);
}
return -1;
}