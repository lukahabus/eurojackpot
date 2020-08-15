#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int>& a, pair<int, int>& b)
{
    return a.second < b.second;
}

void sortiraj(map<int, int>& M)
{
    vector<pair<int, int> > A;

    for (auto& it : M) {
        A.push_back(it);
    }

    sort(A.begin(), A.end(), cmp);

    for (auto& it : A) {
        cout << (it.first + 1) << " " << it.second << endl;
    }
}

void generiraj(int x, int y, map<int, int>& M)
{
    for(int i = 0; i < x; ++i) //treba mi ovo uopce?
        for(int j = 0; j < INT_MAX / (100 * y / x); ++j)
        {
            int z = rand() % y;
            M[z]++;
        }
}

int main()
{
    srand(time(NULL));

    map<int, int> m, n;

    generiraj(5, 50, m);
    generiraj(2, 10, n);

    sortiraj(m);
    cout << endl;
    sortiraj(n);

    return 0;
}
