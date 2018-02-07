#include<iostream>

using namespace std;

int main(){
  char data[21]={'\0'};
  char yr[4]={'\0'};
  char mon[2]={'\0'};
  char day[2]={'\0'};
  char hour[2]={'\0'};
  char min[2]={'\0'};
  char sec[2]= {'\0'};
  int loc=0;
   
  cout<<"Input as YYYYMMDDTHHMMSS: ";
  cin>>data;
  cout<<data;
  int i; 
  for( i=0;i<18;i++){
    cout<<"\nI: "<<i<<": "<<data[i]<<" ";
    if(i==4||i==6||i==9||i==11||i==13) loc=0;
    if(i<4)  yr[loc]=data[i];
    if(i>=0&&i<3)  loc++;
    if(i>3&&i<6) mon[loc]=data[i];
    if(i>5&&i<8) day[loc]=data[i]; 
    if(i>8&&i<11) hour[loc]=data[i];
   if(i>10&&i<13)  min[loc]=data[i];
   if(i>12&&i<15)  sec[loc]=data[i];
 
    if(i==4||i==6||i==9||i==11||i==13) loc++;
  }
  yr[4]='\0';
  mon[2]='\0';
  day[2]='\0';
  hour[2]='\0';
  min[2]='\0'; 
  sec[2]='\0';
  cout<<"\nyr: "<<yr<<endl;
  cout<<"mon: "<<mon<<endl;
  cout<<"day: "<<day<<endl;
  cout<<"hour: "<<hour<<endl;
  cout<<"min: "<<min<<endl;
  cout<<"sec: "<<sec<<endl;
  return 0;
}
