#include <bits/stdc++.h>

using namespace std;

void solve (){
    char g[10][10];
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            cin>>g[i][j];
        }
    }
    
    int ans=0;
    for(int x1=1;x1<=9;x1++){
        for(int y1=1;y1<=9;y1++){
            for(int x2=1;x2<=9;x2++){
                for(int y2=1;y2<=9;y2++){
                    if(x1==x2 && y1==y2) continue;
                    if(g[x1][y1]=='.' || g[x2][y2]=='.') continue;
                    int x3=x2-(y2-y1);
                    int y3=y2-(x1-x2);
                    int x4=x1-(y2-y1);
                    int y4=y1-(x1-x2);
                    
                    if(x3>=1 && x3<=9 && y3>=1 && y3<=9 && g[x3][y3]=='#'){
                        if((x4>=1 && x4<=9 && y4>=1 && y4<=9 && g[x4][y4]=='#')){
                            ans++;
                        }
                    }
                }
            }
        }
    }
    cout<<ans/4;
}
int main(){
    solve();
}
