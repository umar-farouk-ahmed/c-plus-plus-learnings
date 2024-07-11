#include<bits/stdc++.h>
using namespace std;
#define PI 3.14159265

int main(){
    int a=10,b=20.54,c=15,d=5;
    
    int maximum=max({a,b,c,d});//max is used for int values
    int minimum=min({b,c,a,d});//min is used for int values
    int power4=pow(2,3);
    int sqroot=sqrt(144);
    int absolute=abs(-6);
    int round1=round(3.45);
    int floor1=floor(3.35);
    int celling=ceil(3.35);
    double Sin=sin(30*PI/180);
    double remainder=fmod(7,2);
    double cubic_root=cbrt(27);
    float max=fmaxf(30.356,25.287);
    double max2=fmax(50154631,501579554);
    long double max3=fmaxl(47896513466546526,4546545646464);


    cout<<"Int maximum "<<maximum<<endl;
    cout<<"Int minimum "<<minimum<<endl;
    cout<<"power "<<power<<endl;
    cout<<"sqroot "<<sqroot<<endl;
    cout<<"absolute "<<absolute<<endl;
    cout<<"round "<<round1<<endl;
    cout<<"floor "<<floor1<<endl;
    cout<<"Celling "<<celling<<endl;
    cout<<"Remainder "<<remainder<<endl;
    cout<<"Cubic root "<<cubic_root<<endl;
    cout<<"Float max "<<max<<endl;
    cout<<"Double max"<<max2<<endl;
    cout<<" long double "<<max3<<endl;
    
    return 0;
}