#include <iostream>
using namespace std;

int main() {
    int A,T, N; 
    int i,j,k;
    cin>>T;
    for(i=0;i<T;i++)
    {    
        cin>>N;
       int f[1000001]={0};
         for(j=0;j<N;j++)
         {   cin>>A;
             f[A]++;
         }
         for(k=0;k<1000001;k++)
         {   
             if(f[k]%2!=0)
                cout<<k<<"\n"; 
        }
         
    }
    
	return 0;
}
