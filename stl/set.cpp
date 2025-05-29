void exSet()
{
    set<int> st;
    st.insert(1);
    st.emplace(2);
    st.insert(2);
    st.insert(4);
    st.insert(3);
    int cnt = st.count(2);
    cout << cnt;
    cout << endl;
    for (int val : st)
    {
        cout << val << " ";
    }
    cout << endl;
}
int main()
{
    exSet();

    return 0;
}
