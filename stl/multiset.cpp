void exMultiset()
{
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    for (int val : ms)
    {
        cout << val << " ";
    }
    cout << endl;
    ms.erase(1);
    for (int val : ms)
    {
        cout << val << " ";
    }
    cout << endl;
    ms.erase(ms.find(1));
    for (int val : ms)
    {
        cout << val << " ";
    }
    cout << endl;
}
int main()
{
    exMultiset();

    return 0;
}
