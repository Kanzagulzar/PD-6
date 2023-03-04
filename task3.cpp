#include <iostream>
using namespace std;
string zodiac(string month, int date, string result);

main(){
    string month;
    int date;
    string result;
    cout << "Enter ur month: " ;
    cin >> month;
    cout << "Enter date: " ;
    cin >> date;
    
     result=zodiac(month, date, result);
}
string zodiac(string month, int date, string result){
    if(month == "march" || month == "april"){
       if(date >= 21 && date <= 31 || date >= 1 && date <=19){
    cout << "your sign is aries ";
    }
    }
   if(month == "april" || month == "may"){
    if(date >= 20 && date <= 31 || date >= 1 && date <=20){
    cout << "your sign is taurus ";
    }  
   } 
if(month == "may" || month == "june"){
    if(date >= 21 && date <= 31 || date >= 1 && date <=20){
    cout << "your sign is jemini ";
    }
}   
    if(month == "june" || month == "july"){
        if(date >= 21 && date <= 31 || date >= 1 && date <=22){
    cout << "your sign is cancer ";
    }   
    }
    if(month == "july" || month == "august"){
        if(date >= 23 && date <= 31 || date >= 1 && date <=22){
    cout << "your sign is leo ";
    }   
    }
    if(month == "august" || month == "september" && date >= 23 && date <= 31 || date >= 1 && date <=22){
    cout << "your sign is virgo ";
    }   
    if(month == "september" || month == "october" && date >= 23 && date <= 31 || date >= 1 && date <=22){
    cout << "your sign is libra ";
    }   
    if(month == "october" || month == "november" && date >= 23 && date <= 31 || date >= 1 && date <=21){
    cout << "your sign is scorpio ";
    }   
    if(month == "november" || month == "december" && date >= 23 && date <= 31 || date >= 1 && date <=21){
    cout << "your sign is sagg ";
    }   
    if(month == "december" || month == "january" && date >= 22 && date <= 31 || date >= 1 && date <=19){
    cout << "your sign is capricon ";
    }   
    if(month == "january" || month == "february" && date >= 20 && date <= 31 || date >= 1 && date <=18){
    cout << "your sign is aquarius ";
    } 
    if(month == "february" || month == "march" && date >= 19 && date <= 31 || date >= 1 && date <=20){
    cout << "your sign is pisces ";
    }     
 cout << zodiac;
    return result;
}