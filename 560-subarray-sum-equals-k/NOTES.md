int ans = 0;
int prefixSum = 0;
unordered_map<int,int> m{{0,1}};
for(int num : nums)
{
prefixSum += num;
int target = prefixSum-k;
if(m.count(target))
ans+=m[target];
++m[prefixSum];
}
return ans;