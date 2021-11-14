vector<vector<int>> findScheduling(int n, vector<int> &burstTime) {
    // Write your code here.
    vector<vector<int>> v(2,vector<int> (n,0));
    int t=0;
    for(int i=0;i<n;i++){
        v[0][i]=t;
        t=t+burstTime[i];
    }
    t=0;
    for(int i=0;i<n;i++){
        t=burstTime[i]+t;
        v[1][i]=t;
    }
    return v;
}