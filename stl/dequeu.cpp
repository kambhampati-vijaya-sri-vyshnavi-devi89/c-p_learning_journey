void exDeque()
{
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_front(3);

    dq.emplace_front(4);
    cout << dq.front() << dq.back() << dq.size();
}
int main()
{
    exDeque();

    return 0;
}
