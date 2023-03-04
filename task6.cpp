#include <iostream>
using namespace std;
float dis( string month, int stay, float result, float totstudio, float discount, float studio, float totapart, float totdiscount);
main(){
    string month;
    int stay;
    float result;
    float totstudio;
    float discount;
    float studio;
    float totapart;
    float totdiscount;
    cout << "Enter month of stay: " ;
    cin >> month;
     cout << "Enter no of days of stay" ;
     cin >> stay;
     result=dis(month,stay, result, totstudio, discount,studio, totapart, totdiscount);
}
float dis(string month, int stay, float result, float totstudio, float discount, float studio, float totapart, float totdiscount){
    if(stay <= 7 && (month == "may" || month == "october")){
    totstudio = 50 * stay ;
    cout << "Studio " << totstudio ;
    }
     if(stay > 7 && (month == "may" || month == "october")){
    studio = 50 * stay ;
    discount = ( studio * 0.05 );
    cout << "Studio= " << discount;
    }
    if(stay > 14 && (month == "may" || month == "october")){
    studio = 50 * stay ;
    discount = ( studio * 0.30 );
    cout << "Studio= " << discount;
    }
    if(stay <= 7 && (month == "june" || month == "september")){
    totstudio = 75.20 * stay ;
    cout << "Studio " << totstudio ;
    }
    if(stay <= 7 && (month == "july" || month == "august")){
    totstudio = 76.00 * stay ;
    cout << "Studio " << totstudio ;
    }
    if(stay > 7 && (month == "june" || month == "september")){
    studio = 75.20 * stay ;
    discount = ( studio * 0.20 );
    cout << "Studio= " << discount;
    }
     if(stay <= 14 && ( month == "may" || month == "october" )){
    totapart = 65 * stay ;
    cout << "apartment= " << totapart ;
    }
    if(stay > 14 && ( month == "may" || month == "october" )){
    totapart = 65 * stay ;
    totdiscount = ( totapart * 0.10 );
    cout << "apartment " << totdiscount ;
    }
      if(stay <= 14 && ( month == "june" || month == "september" )){
    totapart = 68.70 * stay ;
    cout << "apartment " << totapart ;
    }
    if(stay > 14 && ( month == "june" || month == "september" )){
    totapart = 68.70 * stay ;
    discount = ( totapart * 0.10 );
    totdiscount = totapart - discount;
    cout << "apartment " << totdiscount ;
    }
     if(stay <= 14 && ( month == "july" || month == "august" )){
    totapart = 77.00 * stay ;
    cout << "apartment " << totapart ;
    }
    if(stay > 14 && ( month == "july" || month == "august" )){
    totapart = 77.00 * stay ;
    totdiscount = ( totapart * 0.10 );
    cout << "apartment  " << totdiscount ;
    }
    return result;
    
}
