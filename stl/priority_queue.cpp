void exPriority_queue()
{
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.push(10);
    cout << pq.top();
    cout << endl;
    pq.pop();
    cout << pq.top();
    cout << endl;
    cout << pq.size();
}
int main()
{
    exPriority_queue();

    return 0;
}
