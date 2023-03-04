#include <iostream>
using namespace std;
bool bill(string fruit, string day, float quantity, float result, float payment);
main(){
    string fruit;
    string day;
    float quantity;
    float result;
    float payment;
    cout << "Enter fruit you bought " ;
    cin >> fruit;
     cout << "Enter quantity " ;
     cin >> quantity;
      cout << "Enter  day " ;
      cin >> day;
      result=bill(fruit, day, quantity, result, payment);
}
bool bill(string fruit, string day, float quantity, float result, float payment){
    if(fruit == "banana"){
        if(day == "saturday" || day == "sunday"){
            payment = quantity * 2.70;
        cout << "Your bill is " << payment ;
    }
    else{payment = quantity * 2.50 ;
    }
    
    }
    
    
    if(fruit == "apple"){
        if(day == "saturday" || day == "sunday"){
        payment = quantity * 1.25;
        cout << "Your bill is " << payment ;
        }
    }
    if(fruit == "apple"){
         if(day == "saturday" || day == "sunday"){
        payment = quantity * 1.20;
        cout << "Your bill is " << payment ;
         }
    }
    if(fruit == "orange"){
        if(day == "saturday" || day == "sunday"){
        payment = quantity * 0.90;
        cout << "Your bill is " << payment ;
    }
    }
    if(fruit == "orange"){
        if( day != "saturday" || day != "sunday"){
        payment = quantity * 0.85;
        cout << "Your bill is " << payment ;
    }
    }
    if(fruit == "grapefrut"){
        if( day != "saturday" || day != "sunday"){
        payment = quantity * 1.45;
        cout << "Your bill is " << payment ;
    }
    }
    if(fruit == "grapefrut"){
        if( day == "saturday" || day == "sunday"){
        payment = quantity * 1.60;
        cout << "Your bill is " << payment ;
    }
    }
    if(fruit == "kiwi"){
        if(day != "saturday" || day != "sunday"){
        payment = quantity * 2.70;
        cout << "Your bill is " << payment ;
    }
    }
    if(fruit == "kiwi"){
        if(day == "saturday" || day == "sunday"){
        payment = quantity * 3.00;
        cout << "Your bill is " << payment ;
    }
    }
    if(fruit == "pineapple"){
        if(day != "saturday" || day != "sunday"){
        payment = quantity * 5.50;
        cout << "Your bill is " << payment ;
    }
    }
    if(fruit == "pineapple"){
        if( day == "saturday" || day == "sunday"){
        payment = quantity * 5.60;
        cout << "Your bill is " << payment ;
    }
    }
    if(fruit == "grapes"){
        if(day != "saturday" || day != "sunday"){
        payment = quantity * 3.85;
        cout << "Your bill is " << payment ;
        }
    }
    if(fruit == "grapes"){
        if(day == "saturday" || day == "sunday"){
        payment = quantity * 4.20;
        cout << "Your bill is " << payment ;
    }
    }
    cout << bill;
    return result;
}