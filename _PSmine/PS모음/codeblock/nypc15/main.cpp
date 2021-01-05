#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <climits>
#define MAX 1005
#define INF 2123456789
#define MOD 1000000007
#pragma warning(disable:4996)
using namespace std;
typedef pair<int,int> pi;
typedef long long ll;

int n,m,k,a,b,c,st=1, cnt=0;
int mem[MAX];
bool visit[MAX];
priority_queue<int,vector<int>,greater<int>> pq[MAX];
priority_queue<int> ansq;
vector<pi> v[MAX];

int getmin()
{
    int ret=-1,mx=INF;
    for(int i=1;i<=n;i++)
        if(!visit[i]&&mem[i]<mx)
            ret=i,mx=mem[i];
    return ret;
}

void update()
{
    for(int i=0;i<v[st].size();i++)
    {
        int next=v[st][i].first;
        int nsum=v[st][i].second+mem[st];
        pq[next].push(nsum);
        if(mem[next]>nsum)
            mem[next]=nsum;
    }
}

void djk()
// 기본적인 다익스트라
{
    while(1)
    {
        st=getmin();
        if(st==-1)break;
        visit[st]=true;
        update();
    }

}

int main(void)
{
    scanf("%d%d%d%d",&n,&m,&k,&st);
    fill_n(&mem[0],MAX,INF);
    mem[st]=0,pq[st].push(0);
    for(int i=0;i<m;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        v[a].push_back({b,c});
    }
    for(int i=0;i<k;i++)
    {
        djk();
        if(i!=k-1)
        {
            fill_n(&mem[0],MAX,INF);
            fill_n(&visit[0],MAX,0);
            for(int i=1;i<=n;i++)
            {
                if(!pq[i].empty()){
                        cnt++;
                        if(cnt==k+1){
                            printf("%d", pq[i].top());
                            return 0;
                        }
                        pq[i].pop();

                }
                if(!pq[i].empty())mem[i]=pq[i].top();
            }
        }
    }
    return 0;
}

//출처: https://red-pulse.tistory.com/166
