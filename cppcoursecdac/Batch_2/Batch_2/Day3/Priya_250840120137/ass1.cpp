#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Function to compress date
int compressdate(int dd,int mm,int yyyy){
        
        int c=mm<<5; 
        //bitset<32> binaryRepresentation(c);
        //cout<<"c in binary is: "<<binaryRepresentation<<endl; 
        
        int d=c|dd;
        //bitset<32> binaryRepresentation(d);
        //cout<<"d in binary is: "<<binaryRepresentation<<endl;
        int e=yyyy<<9;
        //bitset<32> binaryRepresentation(e);
        //cout<<"e in binary is: "<<binaryRepresentation<<endl;
        int f=e|d;
        //bitset<32> binaryRepresentation(f);
        //cout<<"f in binary is: "<<binaryRepresentation<<endl;
        return f;
}

//Function to decompress date
void decompress(int datecode){
    int dd=datecode & 26;  
    int x=datecode>>5;       //Decompressed Date
    int mm=x& 8;             //Decompressed Month
    int yyyy= datecode >>9;  //Decompressed Year
    cout<<dd<<"/"<<mm<<"/"<<yyyy<<endl;  
}

int main(){
    int result=compressdate(26,8,2025);
    decompress(result);
    return 0;
}
