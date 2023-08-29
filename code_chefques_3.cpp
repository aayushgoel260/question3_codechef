#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        int count=0;
        int N;
        cin>>N;
        int D[N];
        for(int i=0;i<N;i++){
            cin>>D[i];
            if(D[i]>=1000){
                count++;
            }
        }
        cout<<count<<endl;
    }
	return 0;
}