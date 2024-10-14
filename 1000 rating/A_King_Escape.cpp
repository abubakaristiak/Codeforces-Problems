//https://codeforces.com/problemset/problem/1033/A

#include<bits/stdc++.h>
using namespace std;
const int maxN=1010;

// queuen can move 8 direction that why
int dx[8]={1,0,-1,0,-1,1,-1,1};
int dy[8]={0,1,0,-1,-1,1,1,-1};
int n;
bool vis[maxN][maxN];

// check valid movement both queen & king
bool isValid(int x, int y){
    return (x<=n && x>=1 && y<=n && y>=1);
}


// start bfs with starting point of the kind
void bfs(int kx, int ky){
    queue<pair<int,int>> q;
    q.push({kx, ky});
    vis[kx][ky] = true;

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        int a = par.first; 
        int b = par.second;
        q.pop();

        for(int i=0; i<8; i++){
            int ci = a + dx[i];
            int cj = b + dy[i];

            if(isValid(ci, cj) && !vis[ci][cj]){
                vis[ci][cj] = true;
                q.push({ci, cj});
               
            }
        }
    } 
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // user input;
    int qx, qy, kx, ky, disx, disy;
    cin >> n;
    cin>> qx >>qy;
    cin >> kx >>ky;
    cin>> disx >> disy;

    // this portion use for queen movement(all block are visited)
    for(int i=0; i<8; i++){
        int DX, DY;
        DX = dx[i]+qx;
        DY = dy[i]+qy;
        while (isValid(DX, DY))
        {
            vis[DX][DY]=true;
            DX += dx[i];
            DY += dy[i];
            
        }
        
    }
    // call dfs function starting point of the king
    bfs(kx, ky);
    if(vis[disx][disy]){    // check king reach the prefect detination;
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}