#include<iostream>
using namespace std;
int main()
{
    int n;
    int v[100];
    cout<<"n=";cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"v["<<i<<"]=";cin>>v[i];
        for(int i=1;i<=n;i++){cout<<v[i]<<" ";}
        for(int i=1;i<=n-1;i++)
        {
            int minim=v[i];
            int loc=1;
            for(int j=i+1;j<=n;j++)
            {
                if(v[j]<minim){minim=v[j];loc=j;}
            }
            int aux;
            aux=v[i];
            v[i]=v[loc];
            v[loc]=aux;
        }
        cout<<"Soartate"<<endl;
        for(int i=1;i<=n;i++){cout<<v[i]<<" ";return 0;}
    }
}
