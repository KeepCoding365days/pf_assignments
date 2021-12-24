#include <iostream>     //solution of Q4 of Assignment1
#include <cmath>
using namespace std;
int main(){
    
    double a_1,a_2,b_1,b_2,c_1,c_2=0.0;//for input
    double ab,ac,bc=0.0;
    int a_sq,b_sq,c_sq=0; /*square of values of sides of triangle are storred in these
    containers*/ 
    double a,b,c=0.0;
    bool bol=1; //to check if given points make a triangle
    
    cout<<"Enter 3 coordinate points to check if they make a scalene or right triangle or not.\n";
    cout<<"Enter first point.Enter x and y coordinates seprately.\n";
    cout<<"x-coordinate: ";
    cin>>a_1;
    cout<<"y-coordinate: ";
    cin>>a_2;

    cout<<"Enter second point.Enter x and y coordinates seprately.\n";
    cout<<"x-coordinate: ";
    cin>>b_1;
    cout<<"y-coordinate: ";
    cin>>b_2;

    cout<<"Enter third point.Enter x and y coordinates seprately.\n";
    cout<<"x-coordinate: ";
    cin>>c_1;
    cout<<"y-coordinate: ";
    cin>>c_2;
 
    //using distance formula
    ab= pow((b_1-a_1),2)+pow((b_2-a_2),2);
    a=sqrt(ab);
    
    ac= pow((a_1-c_1),2)+pow((a_2-c_2),2);
    c=sqrt(ac);
    
    bc= pow((c_1-b_1),2)+pow((c_2-b_2),2);
    b=sqrt(bc);
   
    a_sq=ab;
    b_sq=bc;
    c_sq=ac;
    
    //check for scalene triangle
    
    if(a>=b+c || b>=a+c || c>=a+b){          //check for triangle
       cout<<"Triangle will not form.";
       bol=0;
    } 
    
    else if (ab!=ac&&ab!=bc&&ac!=bc){
        cout<<"Given points make a scalene triangle.\n";
    }
    
    else{
       cout<<"Given points does not make a scalene triangle.\n";
   
    }
   
   //check for right triangle using Pythagoras theorem

if(bol==1){           //check for triangle
    
    if (ac>bc && ac>ab){
        
        if(ac==ab+bc){
            cout<<"Given points make right triangle.";  //if value is in decimals
        }
        else if (c_sq==a_sq+b_sq){                      //if value is whole number
            cout<<"Given pionts make right triangle.";  
            }
        else{
            cout<<"Given points does not form a right triangle.";
            }
        
    }
    
    else if (ab>bc && ab>ac){
            if(ab==bc+ac){                           //if value is in decimals
            cout<<"Given points make right triangle."; 
            }
            else if(a_sq==b_sq+c_sq){                   //if value is whole number
                cout<<"Given points make right triangle.";
            }
            else {
                cout<<"Given points does not form a right triangle.";
            }
        
    }
    else if (bc>ab && bc>ac){
            if(bc==ab+ac){                                //if value is in decimals
            cout<<"Given points make right triangle.";  
            }
            else if (b_sq==a_sq+c_sq){                      //if value is whole number
               cout<<"Given pionts make right triangle.";
            }
            else{
                cout<<"Given points does not form a right triangle.";
            }
        
    }
    else{
        cout<<"Given points does not form a right triangle.";
    }
}
    getchar();

    return 0;
}
