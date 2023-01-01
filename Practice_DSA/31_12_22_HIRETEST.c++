#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int i, t, n, m, j,x,y,k;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin>>n>>m;
        cin>>x>>y;
        string result="";
        for(j=0;j<n;j++){
            string score;
            cin>>score;
            int partial=0,fully=0,uncompleted=0;
            for(k=0;k<m;k++){
                if(score[k]=='F'){
                    fully+=1;
                }
                else if(score[k]=='U'){
                    uncompleted+=1;
                }
                else{
                    partial+=1;
                }

            }
            if(fully>=x || (fully==(x-1) && partial>=y)){
                result+="1";
            }
            else{
                result+="0";
            }
        // cout<<result<<endl;
           
        }
        cout<<result<<endl;
    }

    return 0;
}
