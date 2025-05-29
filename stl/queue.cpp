void exQueue()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(4);
    cout << q.back();
    cout << endl;
    q.back() += 5;
    cout << q.back();
    cout << endl;
    cout << q.front();
    cout << endl;

    q.pop();
    cout << q.front();
    cout << endl;
}
int main()
{
    exQueue();

    return 0;
}
