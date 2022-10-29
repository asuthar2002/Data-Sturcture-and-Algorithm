​
if(pos == obstacles.size()-2)
return dp[pos][lane] = 0;
if(dp[pos][lane]!=-1)
return dp[pos][lane];
if(obstacles[pos+1]!=lane)
{
return dp[pos][lane] = solve(obstacles, pos+1, lane, dp);
}
if(obstacles[pos+1]==lane){
int l1=0, l2=0;
if(lane==1)
{
l1=2;
l2=3;
}
else if(lane==2)
{
l1=1;
l2=3;
}
else{
l1=1;
l2=2;
}
if(obstacles[pos]==l1)
return dp[pos][lane] = 1 + solve(obstacles, pos+1, l2, dp);
else if(obstacles[pos]==l2)
return dp[pos][lane] = 1 + solve(obstacles, pos+1, l1, dp);
else
return dp[pos][lane] = 1 + min(solve(obstacles, pos+1, l1, dp), solve(obstacles, pos+1, l2, dp));
}
return dp[pos][lane] = 0;