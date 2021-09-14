// int Solution::canCompleteCircuit(const vector<int> &A, const vector<int> &B) {
//     int n = A.size();
//     for(int i =0;i<n;i++){
//         int total =0, stopCount =0, j=i;
//         while(stopCount<n){
//             total+= A[j%n]- B[j%n];
//             if(total<0)
//                 break;
//             stopCount++;
//             j++;
//         }
//         if(stopCount==n && total>=0)
//             return i;
//     }
//     return -1;
// }

int Solution::canCompleteCircuit(const vector<int> &gas, const vector<int> &cost) { // Greedy Approach
    int tank =0, total=0,index=0,n=gas.size();
    for(int i=0;i<n;i++){
        int consume = gas[i] - cost[i];
        tank+=consume;
        if(tank<0){
            index=i+1;
            tank=0;
        }
        total+=consume;
    }
    return total<0?-1:index;
}
