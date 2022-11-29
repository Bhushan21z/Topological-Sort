#include<bits/stdc++.h>
using namespace std;
 
int main(){

int i,j,k,n;
int index[10],flag[10],count=0;
 
n=5;
int adj[n][n]={{0,0,1,1,0},
               {0,0,1,0,1},
               {0,0,0,1,0},
               {0,0,0,0,0},
               {1,0,1,0,0}
            };
  
    for(i=0;i<n;i++){
        index[i]=0;
        flag[i]=0;
    }
 
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            index[i]=index[i]+adj[j][i];
        }       
    }

 
    cout<<"\nThe topological ordering is:";
 
    while(count<n){
        for(k=0;k<n;k++){
            if((index[k]==0) && (flag[k]==0)){
                cout<<k+1<<" ";
                flag[k]=1;
            }
 
            for(i=0;i<n;i++){
                if(adj[i][k]==1)
                    index[k]--;
            }
        }
 
        count++;
    }
 
    return 0;
}
