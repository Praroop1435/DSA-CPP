#include <iostream>
#include <vector>
using namespace std;

bool isPossibleSol(vector<int> &boards, int n, int k, int mid){
    int painter = 1;
    int boardsPainted = 0;

    for(int i = 0; i < n; i++){
        if(boardsPainted + boards[i] <= mid){
            boardsPainted += boards[i];
        }
        else{
            painter++;
            if(painter > k || boards[i] > mid){
                return false;
            }
            boardsPainted = boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int s = 0;
    int sum = 0;
    int n = boards.size();

    for(int i = 0; i < n; i++){
        sum += boards[i];
    }

    int e = sum;
    int ans = -1;

    while(s <= e){
        int mid = s + (e - s) / 2;

        if(isPossibleSol(boards, n, k, mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> boards = {5, 5, 5, 5};
    int k = 2;
    int result = findLargestMinDistance(boards, k);
    cout << "Minimum time to paint all boards: " << result << endl;
    return 0;
}
