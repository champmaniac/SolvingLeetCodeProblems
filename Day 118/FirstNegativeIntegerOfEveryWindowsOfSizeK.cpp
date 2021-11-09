vector<long long> printFirstNegativeInteger(long long int A[],long long int N, long long int k) {
    vector<long long> v;
    queue<long long> q;
    long long int i=0,j=0;
    while(j<N){
        if(A[j]<0)
            q.push(A[j]);
        if(j-i+1<k){
            j++;
        }
        else if(j-i+1==k){
            if(!q.empty()){
                v.push_back(q.front());
            }
            else{
                v.push_back(0);
            }
            if(!q.empty()&&A[i]<0){
                q.pop();
            }
            i++;
            j++;
        }
    }
    return v;
 }