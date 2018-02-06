#include<iostream>
#include<string>
using namespace std;

int main(){
  char data[21];
  char yr[4],mon[2],day[2],hour[2],min[2],sec[2];
  int loc=0;
  cout<<"Input as YYYYMMDDTHHMMSS: ";
  cin>>data;
  cout<<data; 
  for(int i=0;i<18;i++){
    if(i<4){
      yr[loc]=data[i];
      loc++;
     }
    if(i==4) loc=0;
    if(i>3&&i<6){
      mon[loc]=data[i];
      loc++;
     }
    if(i==6) loc=0;
    if(i>5&&i<8){
     day[loc]=data[i];
     loc++;
    } 
    if(i==8) loc=0;
    if(i>8&&i<11){
     hour[loc]=data[i];
     loc++;
    }
   if(i==11)loc=0;
   if(i>10&&i<13){
    min[loc]=data[loc];
    loc++;
    }
  }
  cout<<"\nyr: "<<yr<<endl;
  cout<<"mon: "<<mon<<endl;
  cout<<"day: "<<day<<endl;
  cout<<"hour: "<<hour<<endl;
  cout<<"min: "<<min<<endl;
  cout<<"sec: "<<sec<<endl;
  cout<<data.size();

}
