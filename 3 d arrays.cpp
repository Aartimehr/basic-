#include <iostream> 
using namespace std;
 int main()
 {
     int arr[2][3][2]={{{1,2},{1,3},{2,3}},{{1,4},{2,3},{1,5}}};
     cout<<"The three dimentional arrays are:"<<endl;
     for(int i=0;i<2;++i)
     {
         for(int j=0;j<3;++j)
         {
             for(int k=0;k<2;++k)
             {
                 cout<<i<<" "<<j<<" "<<k<<" "<<arr[i][j][k]<<endl;
             }
         }
     }
     return 0;
 }
 
