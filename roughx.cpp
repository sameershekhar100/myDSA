#include<iostream>

using namespace std;
int mat[100][100];
void solve() {


    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            int z;
            cin >> z;
            mat[i][j] = z;
        }
    }
    int y=0;
    for(int i=99;i>=0;i--){
        if(mat[99][i]==2){
            y=i;
            break;
        }
    }
    int i=99;
    while(i!=0){
        if(mat[i-1][y]==1){
            i--;
            continue;
        }
        else if(mat[i][y-1]==1){
            y--;
            continue;
        }
        else y++;
    }
    printf("#%d %d",1,y);

}

int main() {
    int t;

    string s="Sameer";
    int idx=s.length()-2;
    cout<<s.substr(0,idx)+"sam"+s.substr(idx);
}