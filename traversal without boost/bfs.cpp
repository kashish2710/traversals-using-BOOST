#include <iostream>
#include <queue>
using namespace std;

int main() {
    int adj[5][5] = {  
        {0,1,1,0,0},
        {1,0,1,1,0},
        {1,1,0,0,1},
        {0,1,0,0,1},
        {0,0,1,1,0}
    };
   int visited[5]={false};
   int start=0;
   queue<int>q;
   q.push(start);
   visited[start]=true;
   while(!q.empty()){
   int node=q.front();
   q.pop();
   cout<<node<<"->";
   for(int i=0;i<5;i++){
    if(adj[node][i]==1&&visited[i]==false){
    q.push(i);
    visited[i]=true;
   }
   }
   }
return 0;

}
