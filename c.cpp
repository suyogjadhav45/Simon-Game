#include <bits/stdc++.h>
#include <math.h>
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int mpower(int k, int d, int i, int cs)
{
    int count = k + 1 - abs(d - i) - cs;
    return count;
}
int main()
{
    // fastIO();
    int t;
    cin >> t;
    // cout<<t<<endl;
    string s;
    int n, k;
    while (t--)
    {
        // int n,k;
        // cout<<"HI";
        cin >> n >> k;
        // cout<<"HI";
        cin >> s;
        // getline(cin,s);
        //  cout<<"HI";
        // map<int,pair<int,int>> m;
        set<int> st;
        // st.insert(1);
        // cout<<st.size();
        // cout<<"hi";
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'M')
            {
                int d = i;
                int cs = 0;
                cout << "HI";
                while (d != -1 or s[d] != 'X')
                {
                    if (s[d] == ':')
                    {
                        cs++;
                    }
                    if (s[d] == 'I')
                    {
                        int val = mpower(k, d, i, cs);
                        cout << "HI";
                        if (val > 0)
                        {
                            st.insert(i);
                            cout << "HI";
                            // m.insert(d,{i,val});
                        }
                    }
                    d--;
                }
                d = i;
                cs = 0;
                while (d < n or s[d] != 'X')
                {
                    if (s[d] == ':')
                    {
                        cs++;
                    }
                    if (s[d] == 'I')
                    {
                        int val = mpower(k, d, i, cs);
                        if (val > 0)
                        {
                            st.insert(i);
                            // m.insert(d,{i,val});
                        }
                    }
                    d++;
                }
            }
        }
        cout << st.size() << endl;
    }

    return 0;
}