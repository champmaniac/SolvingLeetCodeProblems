void permute(string &s,vector<string> &ans, int l ,int r){
    if(l==r){
        ans.push_back(s);
        return;
    }
    for(int i=l;i<r;i++){
        swap(s[l],s[i]);
        permute(s,ans,l+1,r);
        swap(s[l],s[i]);
    }
}
vector<string> findPermutations(string &s) {
    int n = s.size();
    vector<string> ans;
    permute(s,ans,0,n);
    return ans;
}
