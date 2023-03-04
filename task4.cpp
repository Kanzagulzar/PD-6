#include <iostream>
using namespace std;
float telephone(char code, int min, int mind, int minn, float result, float payment);
main(){
    char code;
    int min;
    int mind;
    int minn;
    float result;
    float payment;
    cout << "Enter service code " ;
    cin >> code;
     cout << "Enter minutes used " ;
     cin >> min;
      cout << "Enter minutes used during day " ;
      cin >> mind;
      cout << "Enter minutes used during night " ;
      cin >> minn;
      result=telephone(code, min, mind, minn, result, payment);
}
float telephone(char code, int min, int mind, int minn, float result, float payment){
    if(code == 'r' && min <= 50 && mind == 0 && minn == 0){
        payment = 10.00 ;
        cout << "Your bill is " << payment ;
    }
    if(code == 'r' && min > 50 && mind == 0 && minn == 0){
        payment = 10.00 + ( min * 0.20 ) ;
        cout << "ur bill is " << payment ;
    }
    if(code == 'p' && min <= 75 && mind <= 75 && minn == 0){
        payment = 25.00 ;
        cout << "ur bill is " << payment ;
    }
    if(code == 'p' && min > 75 && mind > 75 && minn == 0){
        payment = 25.00 + ( mind * 0.10 );
        cout << "ur bill is " << payment ;
    }
    if(code == 'p' && min <= 100 && mind == 0 && minn  <= 100){
        payment = 25.00 ;
        cout << "ur bill is " << payment ;
    }
    if(code == 'p' && min > 100 && mind == 0 && minn > 100){
        payment = 25.00 + (minn * 0.05 );
        cout << "ur bill is " << payment ;
    }
    cout << telephone;
    return result;
}