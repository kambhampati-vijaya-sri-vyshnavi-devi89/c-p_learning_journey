void exList()
{
    list<int> ls;
    ls.push_back(5);
    ls.push_back(2);
    ls.emplace_back(3);
    ls.emplace_front(1);
    ls.push_front(7);
    // print
    for (auto it = ls.begin(); it != ls.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
    ls.clear();
    cout << ls.back() << " ";
}
int main()
{
    exList();

    return 0;
}
