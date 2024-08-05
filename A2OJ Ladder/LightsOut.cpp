#include<bits/stdc++.h>
using namespace std;
#define ll long long

void toggle_around(int cur[][3], int i, int j, int prev[][3]){
    int i_start = max(i-1, 0);
    int j_start = max(j-1, 0);
    int i_end = min(max(i+1,i),2);
    int j_end = min(max(j+1,j),2);
    for(int ix = i_start; ix <= i_end; ix++){
        for(int jy = j_start; jy <= j_end; jy++){
            if(ix == i && jy == j){
                continue; // do not increase itself
            }
            else{
                cur[ix][jy] += prev[i][j];
            }
        }
    }
}

void Cout_ar(int ar[][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << ar[i][j] << " ";
        }
        cout << endl;
    }
}
void Turncurtores(int cur[][3],int res[][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(cur[i][j]%2!=0){
                res[i][j] = 0;
            }
        }
    }
    Cout_ar(res);
}
int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("LightsOut.in", "r", stdin);
        freopen("LightsOut.out", "w", stdout);
    #endif
    int prev[3][3];
    int cur[3][3];
    int res[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            res[i][j] = 1; // On status in beginning
            int temp; 
            cin >> temp;
            prev[i][j] = temp; // Pressed 2D Array
            cur[i][j] = temp; // the modify version of pressed 2d Array
        }
    }
    // Calculate Pressed 2D Array and assign it into cur array
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(prev[i][j] != 0){
                toggle_around(cur,i,j,prev);
            }
        }
    }
    Cout_ar(cur);
    Turncurtores(cur,res);

    

    return 0;
}
