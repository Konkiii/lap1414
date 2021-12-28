#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location: ";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 || x != 0 || y != 0);
    return 0;
}

void updateImage(bool img[][M],int a,int b,int c){
    for(int p = 0;p < N;p++){
        for(int i = 0;i < M;i++){
         if (sqrt(pow(p - b,2) + pow(i - c,2)) + 1 <= a){
             img[p][i]=1;
            }
        }
    }
}

void showImage(const bool img[][M]){
    cout << "------------------------------------------------------------------------\n";
    for(int p = 0;p < N;p++){
        cout << "|";
        for(int i = 0;i < M;i++){
            if(img[p][i] == 0)
            cout << " ";
            if(img[p][i] == 1)
            cout << "*";
        }
        cout << "|" << endl;
    }
    cout << "------------------------------------------------------------------------\n";
}