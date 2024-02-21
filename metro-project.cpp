#include<iostream>
#include<vector>
using namespace std;
class node{
    public:
int item;
string s;
node*next;
};

class adjlist{
    public:
    node *start;
    
};

class graph{
  vector<int> vect;




    adjlist arr[53];
    string s[53];
vector<int> v;
   public:

   graph(){

s[0]="Gandhi Nagar";
s[1]="karand";
s[2]="Berasia";
s[3]="Budhwara";
s[4]="Jahangirbad";
s[5]="Roushanpura";
s[6]="Kotra Sultanabad";
s[7]="Nehru Nagar";

s[8]="Shymla Hills";
s[9]="Van Vihar";
s[10]="Jawahar Chowk";
s[11]="Rangmahal";
s[12]="Vidhan sabha";
s[13]="MP Nagar";
s[14]="6 no. stop";
s[15]="Shivaji Nagar";
s[16]="Char Imli";
s[17]="Bittan Market";
s[18]="Shahpura";
s[19]="Gulmohar";
s[20]="Akrirti Eco City";
s[21]="Salia";
s[22]="Chandbad";
s[23]="Ashoka Garden";
s[24]="Govindpura";
s[25]="Minal";
s[26]="Piplani";
s[27]="Ayodhya Bypass";
s[28]="Anand Nagar";

s[29]="Awadhpuri";
s[30]="Barkheda Pathani";
s[31]="Saket Nagar";
s[32]="AIIMS";
s[33]="Barkatullah University";
s[34]="Misord";
s[35]="Ratanpur";

s[36]="Bairagarh";
s[37]="Lalghati";
s[38]="Tajul Masjid";
s[39]="Hamidia Hospital";
s[40]="Kamla Park";
s[41]="Polytechnic Square";
s[42]="Roshanpura";
s[43]="New Market";
s[44]="Mata Mandir";
s[45]="MANIT Square";
s[46]="Patrakar Colony";
s[47]="Chuna Bhati";
s[48]="Sarvdharm";
s[49]="Bima Kunj";
s[50]="Danish Kunj";
s[51]="Nayapura";
s[52]="Bairagarh Chichli";


    for(int i=0;i<53;i++){
        arr[i].start=new node;
    }
    
    for(int i=0;i<53;i++){

        arr[i].start->item=i-1;
        arr[i].start->next=new node;
        arr[i].start->next->item=i+1;
        arr[i].start->next->next=NULL;

    }

       delete arr[0].start->next;
    arr[0].start->next=NULL;
arr[0].start->item=1;
 arr[4].start->next->item=42;
 arr[6].start->item=42;
 arr[8].start->next=NULL;
arr[9].start->next=NULL;
arr[9].start->item=10;
arr[11].start->next->item=43;
arr[12].start->item=43;
arr[13].start->next->next=new node;
arr[13].start->next->next->next=new node;
arr[13].start->next->next->item=23;
arr[13].start->next->next->next->item=24;
arr[21].start->next->item=52;
arr[22].start->next=NULL;
arr[22].start->item=23;
arr[23].start->next->item=13;
arr[24].start->item=13;
arr[35].start->next=NULL;
arr[36].start->next=NULL;
arr[36].start->item=37;

arr[42].start->next->next=new node;
arr[42].start->next->next->next=new node;

arr[42].start->next->next->item=4;
arr[42].start->next->next->next->item=6;


arr[43].start->next->next=new node;
arr[43].start->next->next->next=new node;

arr[43].start->next->next->item=11;
arr[43].start->next->next->next->item=12;

arr[52].start->next->item=21;

   }


void findpath(int a,int b);

bool find(int a){
for(int i=0;i<v.size();i++){
if(v[i]==a){
    return true;
}

if(i==v.size()){
    return false;
}


}




}


void show(){
    int a,b,c=0,d=0,i;
    a=0;
for(i=0;vect[i]!=-1;i++){    
}
 b=i-1;

if((b+1)!=vect.size()-1){
c=b+2;
d=vect.size()-2;
}

if(c!=0){

if((b-a)<(d-c)){
for(int j=a;j<=b;j++){



    if(j!=b){
cout<<s[vect[j]]<<" -> ";
}

else{

    cout<<s[vect[j]];
}


}



}


else if((b-a)>(d-c)){
for(int j=c;j<=d;j++){
 if(j!=d){
cout<<s[vect[j]]<<" -> ";
}

else{

    cout<<s[vect[j]];
}
}
}


else{
for(int i=a;i<=b;i++){
 if(i!=b){
cout<<s[vect[i]]<<" -> ";
}

else{

    cout<<s[vect[i]];
}
}

cout<<endl<<endl;

for(int i=c;i<=d;i++){
 if(i!=d){
cout<<s[vect[i]]<<" -> ";
}

else{

    cout<<s[vect[i]];
}
}




}}

else{

for(int i=a;i<=b;i++){
    if(i!=b){
cout<<s[vect[i]]<<" -> ";}

else{

    cout<<s[vect[i]];
}



}



}










}

















};



void graph::findpath(int a,int b){
 if(a==b){
    v.push_back(a);
    for(int x:v){
        vect.push_back(x);
        if(x==b){
            cout<<s[x];}
            else{
        
        cout<<s[x]<<" -> ";}
    }
       v.pop_back();
    cout<<endl<<endl;

    vect.push_back(-1);
 }


else if(!find(a)){
v.push_back(a);

findpath(arr[a].start->item,b);
if(arr[a].start->next!=NULL){
findpath(arr[a].start->next->item,b);

if(arr[a].start->next->next!=NULL){
findpath(arr[a].start->next->next->item,b);


if(arr[a].start->next->next->next!=NULL){
findpath(arr[a].start->next->next->next->item,b);


if(arr[a].start->next->next->next->next!=NULL){
findpath(arr[a].start->next->next->next->next->item,b);

}

else{
    v.pop_back();
}



}
else{
    v.pop_back();
}






}

else{
    v.pop_back();
}

}

else{

    v.pop_back();
}












}
















}





















int main(){
graph g;

int a,b;
cout<<"enter the starting location code : ";
cin>>a;
cout<<"enter the destination location code : ";
cin>>b;
g.findpath(a,b);
g.show();






return 0;
}