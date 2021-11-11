// User function Template for C++

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    stack<int> s;
    queue<int> s1;
    for(int i=0;i<k;i++){
        s.push(q.front());
        q.pop();
    }
    while(!q.empty()){
        s1.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    while(!s1.empty()){
        q.push(s1.front());
        s1.pop();
    }
    return q;
}