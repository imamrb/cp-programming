#include <iostream>
#include <bits/stdc++.h>
#include <limits.h>

using namespace std;
typedef long long int ll;
ll T, N, Q;

ll visited[9][9];
ll moves[9][9];
ll R, C, K;
ll cnt;

bool valid(ll a, ll b)
{
    return (a >= 1 && a <= 8 && b >= 1 && b <= 8);
}

ll dx[] = {1, -1, 1, 1, -1, 0, 0, -1};
ll dy[] = {0, 0, 1, -1, -1, 1, -1, 1};

void BFS()
{
    queue<pair<ll, ll>> q;
    q.push({R, C});
    visited[R][C] = 1;
    moves[R][C] = 0;

    while(!q.empty())
    {
        ll x = q.front().first;
        ll y = q.front().second;
        q.pop();

        for(ll i = 0; i < 8; i++)
        {
            ll u = dx[i];
            ll v = dy[i];
            if(valid(x + u, y + v) == true && visited[x + u][y + v] == 0)
            {
                //cout<<u<<" "<<v<<"\n";
                q.push({x + u, y + v});
                visited[x + u][y + v] = 1;

                moves[x + u][y + v] = moves[x][y] + 1;
                if(moves[x + u][y + v] <= K)
                    cnt++;
            }
        }

    }


}

int main()
{
    cin>>T;
    while(T--)
    {
        cin>>R>>C>>K;
        for(ll i = 1; i <= 8; i++)
        {
            for(ll j = 1; j <= 8; j++)
            {
                moves[i][j] = 0;
                visited[i][j] = 0;
            }
        }
        cnt = 1;
        BFS();
        cout<<cnt<<"\n";

    }

}
