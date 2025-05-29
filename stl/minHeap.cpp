void exMin_Heap()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);
    cout << pq.top();
}
int main()
{
    exMin_Heap();

    return 0;
}
