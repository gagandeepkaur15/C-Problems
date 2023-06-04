#include<iostream>
#include<vector>
using namespace std;

int main(){

    // STATIC

    int row1[] = {1,2,3,4};
    int row2[] = {5,6};
    int row3[] = {7,8,9};

    int *jaggered[] = {row1, row2, row3};
    int sizes[] = {4,2,3};

    cout << "Elements in matrix form" << endl;
    for(int i=0; i<3; i++){
        int* row = jaggered[i];
        for(int j=0; j<sizes[i]; j++){
            cout<<*(row+j)<<" ";
        }
        cout<<endl;
    }

    //DYNAMIC

    int row,col;
    row=3;

    int** arr = new int*[row];
    int sizes2[] = {4,2,3};

    for(int i=0; i<row; i++){
        *(arr+i)=new int[sizes2[i]];
    }

    int num=1;
    for(int i=0; i<row; i++){
        for(int j=0; j<sizes2[i]; j++){
            arr[i][j]=num++;
        }
    }

    cout<<"Elements in matrix form"<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<sizes2[i]; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}