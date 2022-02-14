struct Key
{
public:
    int freq;
    char ch;
};

struct cmp
{
public:
    bool operator()(Key const &p, Key const &q)
    {
        return p.freq < q.freq;
    }
};
class Solution
{
public:
    string rearrangeString(string str)
    {
        //Your code here.
        int count[26] = {0};
        for (auto x : str)
        {
            count[x - 'a']++;
        }
        priority_queue<Key, vector<Key>, cmp> pq;
        for (int i = 0; i < 26; i++)
        {
            if (count[i] > 0)
            {
                pq.push(Key{count[i], i + 'a'});
            }
        }
        string res = "";
        Key prev{-1, '#'};
        while (!pq.empty())
        {
            Key temp = pq.top();
            pq.pop();
            temp.freq--;
            res += temp.ch;
            if (prev.freq > 0)
                pq.push(prev);
            prev = temp;
        }
        return res;
    }
};