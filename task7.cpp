#include <iostream>
using namespace std;
main(){
    int he;
    int me;
    int ha;
    int ma;
    int hour;
    int min;
    int houre;
    int houra;
    int time;
    int tothour;
    int totalhour;
    cout << "Enter hour of exam 0-23" ;
    cin >> he;
    cout << "Enter min of exam 0-59" ;
    cin >> me;
    cout << "Enter hour of arrival 0-23" ;
    cin >> ha;
     cout << "Enter min of arrival 0-59" ;
cin >> ma;
houre = ( he * 60 ) + me ;
houra = ( ha * 60 ) + ma ;
if(houre > houra){
time = houre - houra ;
if( hour < 60 ){
    cout << hour << "min late" ;
}
}
if(houre < houra){
    time = houra - houre ;
    if(hour > 60){
        tothour = hour/60 ;
        totalhour = hour%60 ;
        cout << tothour << ":" << totalhour << "early" ;
    }
}
    
}


