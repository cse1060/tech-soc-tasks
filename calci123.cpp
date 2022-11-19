#include <iostream>

using namespace std;
int main()
{
    double num1, num2 ,x,fac,pow,s;
    string ops;
    double result;
    cout << "operators accepted:\n";
    cout << "1: add\n";
    cout << "2: substract\n";
    cout << "3: multiply\n";
    cout << "4: divide\n";
    cout << "5: raising to power ^\n";
    cout << "6: factorial\n";
    cout << "7: exponential e^x\n";
    cout << "8: sine\n";
    cout << "9: cosine\n";
    cout << "10: tangent\n";
    cout << "11: cosec\n";
    cout << "12: secant\n";
    cout << "13: cotangent\n";
    cout << "14: inverse sine\n";
    cout << "15: inverse cosine\n";
    cout << "16: inverse tangent\n";
    cout << "17: inverse cosec\n";
    cout << "18: inverse secant\n";
    cout << "19: inverse cotangent\n";
     cout << "20: natural logarithmic function loge(x)\n";
    cout << "enter the operator number :";
    cin>> ops;
        if (ops == "1"){
                cout <<"enter first number:";
        cin>> num1;
        cout <<"enter second number:";
        cin>> num2;
        result= num1 + num2;
    }
    else if (ops == "2"){
                cout <<"enter first number:";
        cin>> num1;
        cout <<"enter second number:";
        cin>> num2;
        result= num1 - num2;
    }
    else if(ops == "3"){
                cout <<"enter first number:";
        cin>> num1;
        cout <<"enter second number:";
        cin>> num2;
        result= num1 * num2;
    }
    else if(ops == "4"){
                cout <<"enter first number:";
        cin>> num1;
        cout <<"enter second number:";
        cin>> num2;
        result= num1 / num2;
    }
    else if (ops=="5"){
        cout << "enter base number:";
        cin >> num1;
         cout << "enter power number:";
        cin >> num2;
        result=1;
        for (int i=0; i<num2; i++){
            result=result*num1;
        }
    }
    else if ( ops== "6"){
         cout << "enter number:";
    cin >> num1;
    result=1;
    for (int i=1;i<=num1 ;i++){
        result=result*i;
    }
    }
    else if(ops =="7"){
        cout<< "enter the exponential factor";
        cin >> x;
        num1=1;
        for(int i=1; i<50; i++){
            pow=1;
            fac=1;
            for(int j=1;j<=i;j++){
                pow=pow*x;
            }
            for(int t=1;t<=i;t++){
                fac=fac*t;
            }
            num1= num1 + pow/fac;
        }
        result= num1;
    }
    else if(ops == "8"){
        cout << " enter the value (in degrees)";
        cin >> num1;
        if (num1 <= 90 && num1 >=0){
            x = num1*3.14/180;
            result=0;
             for(int i=1; i<50; i+=2){
            pow=1;
            fac=1;
            s=-1;
            for(int j=1;j<=i;j++){
                pow=pow*x;
            }
            for(int t=1;t<=i;t++){
                fac=fac*t;
            }
             for(int k=1;k<=i; k+=2){
                s=s*(-1);
            }
            result =result + s*pow/fac;
        }
        }else if (num1 >90 && num1<=180){
            num2=180-num1;
            x= num2*3.14/180;
             result=0;
             for(int i=1; i<50; i+=2){
            pow=1;
            fac=1;
            s=-1;
            for(int j=1;j<=i;j++){
                pow=pow*x;
            }
            for(int t=1;t<=i;t++){
                fac=fac*t;
            }
             for(int k=1;k<=i; k+=2){
                s=s*(-1);
            }
            result =result + s*pow/fac;
        }
        }else if (num1 >180 && num1<=270){
            num2=num1 -180;
            x= num2*3.14/180;
             result=0;
             for(int i=1; i<50; i+=2){
            pow=1;
            fac=1;
            s=1;
            for(int j=1;j<=i;j++){
                pow=pow*x;
            }
            for(int t=1;t<=i;t++){
                fac=fac*t;
            }
             for(int k=1;k<=i; k+=2){
                s=s*(-1);
            }
            result =result + s*pow/fac;
        }
        }else if (num1 >270 && num1<=360){
            num2=360-num1;
            x= num2*3.14/180;
            result=0;
             for(int i=1; i<50; i+=2){
            pow=1;
            fac=1;
            s=-1;
            for(int j=1;j<=i;j++){
                pow=pow*x;
            }
            for(int t=1;t<=i;t++){
                fac=fac*t;
            }
             for(int k=1;k<=i; k+=2){
                s=s*(-1);
            }
            result =result + s*pow/fac;
        }
        }else{
            cout << "value must be less than 360 degrees";
        }
    }
    else if(ops == "9"){
        cout << " enter the value (in degrees)";
        cin >> num1;
        if (num1 <= 90 && num1 >=0){
            x = num1*3.14/180;
            result=1;
             for(int i=1; i<50; i+=2){
            pow=1;
            fac=1;
            s=1;
            for(int j=1;j<=i+1;j++){
                pow=pow*x;
            }
            for(int t=1;t<=i+1;t++){
                fac=fac*t;
            }
             for(int k=1;k<=i; k+=2){
                s=s*(-1);
            }
            result =result + s*pow/fac;
        }
        }else if (num1 >90 && num1<=180){
            num2=180-num1;
            x= num2*3.14/180;
            result=1;
             for(int i=1; i<50; i+=2){
            pow=1;
            fac=1;
            s=1;
            for(int j=1;j<=i+1;j++){
                pow=pow*x;
            }
            for(int t=1;t<=i+1;t++){
                fac=fac*t;
            }
             for(int k=1;k<=i; k+=2){
                s=s*(-1);
            }
            result =result + s*pow/fac;
        }
        result=-1*result;
        }else if (num1 >180 && num1<=270){
            num2=num1 -180;
            x= num2*3.14/180;
             result=1;
             for(int i=1; i<50; i+=2){
            pow=1;
            fac=1;
            s=1;
            for(int j=1;j<=i+1;j++){
                pow=pow*x;
            }
            for(int t=1;t<=i+1;t++){
                fac=fac*t;
            }
             for(int k=1;k<=i; k+=2){
                s=s*(-1);
            }
            result =result + s*pow/fac;
        }
        result=-1*result;
        }else if (num1 >270 && num1<=360){
            num2=360-num1;
            x= num2*3.14/180;
         result=1;
             for(int i=1; i<50; i+=2){
            pow=1;
            fac=1;
            s=1;
            for(int j=1;j<=i+1;j++){
                pow=pow*x;
            }
            for(int t=1;t<=i+1;t++){
                fac=fac*t;
            }
             for(int k=1;k<=i; k+=2){
                s=s*(-1);
            }
            result =result + s*pow/fac;
        }    
        }else{
            cout << "value must be less than 360 degrees";
        }
    }else if(ops == "10"){
        cout << " enter the value (in degrees)";
        cin >> num1;
        if (num1 <= 90 && num1 >=0){
            x = num1*3.14/180;
            result = x + x*x*x/3 +2*x*x*x*x*x/15 +17*x*x*x*x*x*x*x/315 + 62*x*x*x*x*x*x*x*x*x/2835;
        }else if (num1 >90 && num1<=180){
            num2=180-num1;
            x= num2*3.14/180;
            result =  -x - x*x*x/3 -2*x*x*x*x*x/15-17*x*x*x*x*x*x*x/315 - 62*x*x*x*x*x*x*x*x*x/2835;
        }else if (num1 >180 && num1<=270){
            num2=num1 -180;
            x= num2*3.14/180;
            result = x + x*x*x/3 +2*x*x*x*x*x/15+17*x*x*x*x*x*x*x/315 + 62*x*x*x*x*x*x*x*x*x/2835;
        }else if (num1 >270 && num1<=360){
            num2=360-num1;
            x= num2*3.14/180;
            result =  -x - x*x*x/3 -2*x*x*x*x*x/15-17*x*x*x*x*x*x*x/315 -62*x*x*x*x*x*x*x*x*x/2835;
        }else{
            cout << "value must be less than 360 degrees";
        }
    }else if(ops == "11"){
        cout << " enter the value (in degrees)";
        cin >> num1;
        if (num1 <= 90 && num1 >=0){
            x = num1*3.14/180;
             result=0;
             for(int i=1; i<50; i+=2){
            pow=1;
            fac=1;
            s=-1;
            for(int j=1;j<=i;j++){
                pow=pow*x;
            }
            for(int t=1;t<=i;t++){
                fac=fac*t;
            }
             for(int k=1;k<=i; k+=2){
                s=s*(-1);
            }
            result =result + s*pow/fac;
        }
        result=1/result;
        }else if (num1 >90 && num1<=180){
            num2=180-num1;
            x= num2*3.14/180;
          result=0;
             for(int i=1; i<50; i+=2){
            pow=1;
            fac=1;
            s=-1;
            for(int j=1;j<=i;j++){
                pow=pow*x;
            }
            for(int t=1;t<=i;t++){
                fac=fac*t;
            }
             for(int k=1;k<=i; k+=2){
                s=s*(-1);
            }
            result =result + s*pow/fac;
        }
        result=1/result;
        }else if (num1 >180 && num1<=270){
            num2=num1 -180;
            x= num2*3.14/180;
         result=0;
             for(int i=1; i<50; i+=2){
            pow=1;
            fac=1;
            s=-1;
            for(int j=1;j<=i;j++){
                pow=pow*x;
            }
            for(int t=1;t<=i;t++){
                fac=fac*t;
            }
             for(int k=1;k<=i; k+=2){
                s=s*(-1);
            }
            result =result + s*pow/fac;
        }
        result=-1/result;
        }else if (num1 >270 && num1<=360){
            num2=360-num1;
            x= num2*3.14/180;
         result=0;
             for(int i=1; i<50; i+=2){
            pow=1;
            fac=1;
            s=-1;
            for(int j=1;j<=i;j++){
                pow=pow*x;
            }
            for(int t=1;t<=i;t++){
                fac=fac*t;
            }
             for(int k=1;k<=i; k+=2){
                s=s*(-1);
            }
            result =result + s*pow/fac;
        }
        result=-1/result;
        }else{
            cout << "value must be less than 360 degrees";
        }
    }else if(ops == "12"){
        cout << " enter the value (in degrees)";
        cin >> num1;
        if (num1 <= 90 && num1 >=0){
            x = num1*3.14/180;
         result=1;
             for(int i=1; i<50; i+=2){
            pow=1;
            fac=1;
            s=1;
            for(int j=1;j<=i+1;j++){
                pow=pow*x;
            }
            for(int t=1;t<=i+1;t++){
                fac=fac*t;
            }
             for(int k=1;k<=i; k+=2){
                s=s*(-1);
            }
            result =result + s*pow/fac;
        } 
        result=1/result;
        }else if (num1 >90 && num1<=180){
            num2=180-num1;
            x= num2*3.14/180;
         result=1;
             for(int i=1; i<50; i+=2){
            pow=1;
            fac=1;
            s=1;
            for(int j=1;j<=i+1;j++){
                pow=pow*x;
            }
            for(int t=1;t<=i+1;t++){
                fac=fac*t;
            }
             for(int k=1;k<=i; k+=2){
                s=s*(-1);
            }
            result =result + s*pow/fac;
        } 
        result=-1/result;
        }else if (num1 >180 && num1<=270){
            num2=num1 -180;
            x= num2*3.14/180;
         result=1;
             for(int i=1; i<50; i+=2){
            pow=1;
            fac=1;
            s=1;
            for(int j=1;j<=i+1;j++){
                pow=pow*x;
            }
            for(int t=1;t<=i+1;t++){
                fac=fac*t;
            }
             for(int k=1;k<=i; k+=2){
                s=s*(-1);
            }
            result =result + s*pow/fac;
        } 
        result=-1/result;
        }else if (num1 >270 && num1<=360){
            num2=360-num1;
            x= num2*3.14/180;
         result=1;
             for(int i=1; i<50; i+=2){
            pow=1;
            fac=1;
            s=1;
            for(int j=1;j<=i+1;j++){
                pow=pow*x;
            }
            for(int t=1;t<=i+1;t++){
                fac=fac*t;
            }
             for(int k=1;k<=i; k+=2){
                s=s*(-1);
            }
            result =result + s*pow/fac;
        } 
        result=1/result;
        }else{
            cout << "value must be less than 360 degrees";
        }
    }else if(ops == "13"){
        cout << " enter the value (in degrees)";
        cin >> num1;
        if (num1 <= 90 && num1 >=0){
            x = num1*3.14/180;
            result = 1/(x + x*x*x/3 +2*x*x*x*x*x/15 +17*x*x*x*x*x*x*x/315 + 62*x*x*x*x*x*x*x*x*x/2835);
        }else if (num1 >90 && num1<=180){
            num2=180-num1;
            x= num2*3.14/180;
            result =  1/(-x - x*x*x/3 -2*x*x*x*x*x/15-17*x*x*x*x*x*x*x/315 - 62*x*x*x*x*x*x*x*x*x/2835);
        }else if (num1 >180 && num1<=270){
            num2=num1 -180;
            x= num2*3.14/180;
            result = 1/(x + x*x*x/3 +2*x*x*x*x*x/15+17*x*x*x*x*x*x*x/315 + 62*x*x*x*x*x*x*x*x*x/2835);
        }else if (num1 >270 && num1<=360){
            num2=360-num1;
            x= num2*3.14/180;
            result =  1/(-x - x*x*x/3 -2*x*x*x*x*x/15-17*x*x*x*x*x*x*x/315 -62*x*x*x*x*x*x*x*x*x/2835);
        }else{
            cout << "value must be less than 360 degrees";
        }
    }else if ( ops == "14"){
        cout << "enter no. in range of -1 to 1:";
        cin >>x;
        result = x + x*x*x/6 +3*x*x*x*x*x/40 + 15*x*x*x*x*x*x*x/336;
        result=result*180/3.14;
        cout << "the given value is in degrees :";
    }else if ( ops == "15"){
        cout << "enter no. in range of -1 to 1:";
        cin >>x;
        result =3.14/2 - (x + x*x*x/6 + 3*x*x*x*x*x/40 + 15*x*x*x*x*x*x*x/336);
        result=result*180/3.14;
        cout << "the given value is in degrees :";
    }else if ( ops == "16"){
        cout << "enter any number :";
        cin >>x;
        if (x>-1 && x< 1){
            result=0;
            pow=1;
            s=-1;
            for(int i=1;i<=500;i+=2){
                for (int j=1;j<=i ;j++){
                    pow=pow*x;
                }
                for(int t=1; t<=i;t++){
                    s= -1*s;
                }
                result=result + pow*s/i;
            }
            result=result*180/3.14;
        }else if (x>1){
         result=0;
            pow=1;
            s=-1;
            for(int i=1;i<=500;i+=2){
                for (int j=1;j<=i ;j++){
                    pow=pow*x;
                }
                for(int t=1; t<=i;t++){
                    s= -1*s;
                }
                result=result + s/(i*pow);
            }
            result=(1.57-result)*180/3.14;
        }
        else if (x==1){
            result=45;
        } else if (x==-1){
            result=-45;
        }
        else if (x<-1){
       result=0;
            pow=1;
            s=-1;
            x=-1*x;
            for(int i=1;i<=500;i+=2){
                for (int j=1;j<=i ;j++){
                    pow=pow*x;
                }
                for(int t=1; t<=i;t++){
                    s= -1*s;
                }
                result=result + s/(i*pow);
            }
            result=-(1.57-result)*180/3.14;
        }
        cout << "the given value is in degrees (approx) :";
    }else if ( ops == "17"){
        cout << "enter no.except in range of -1 to 1:";
        cin >>num1;
        x=1/num1;
        result = x + x*x*x/6 + 3*x*x*x*x*x/40 + 15*x*x*x*x*x*x*x/336;
        result=result*180/3.14;
        cout << "the given value is in degrees :";
    }else if ( ops == "18"){
        cout << "enter no. except in range of -1 to 1:";
        cin >>num1;
        x=1/num1;
        result =3.14/2 - (x + x*x*x/6 + 3*x*x*x*x*x/40 + 15*x*x*x*x*x*x*x/336);
        result=result*180/3.14;
        cout << "the given value is in degrees :";
    }else if ( ops == "19"){
        cout << "enter any number :";
        cin >>x;

          if (x>-1 && x< 1){
            fac=0;
            pow=1;
            s=-1;
            for(int i=1;i<=500;i+=2){
                for (int j=1;j<=i ;j++){
                    pow=pow*x;
                }
                for(int t=1; t<=i;t++){
                    s= -1*s;
                }
                fac=fac + pow*s/i;
            }
            result=90 -(fac)*180/3.14;
        }else if (x>1){
         result=0;
            pow=1;
            s=-1;
            for(int i=1;i<=500;i+=2){
                for (int j=1;j<=i ;j++){
                    pow=pow*x;
                }
                for(int t=1; t<=i;t++){
                    s= -1*s;
                }
                result=result + s/(i*pow);
            }
            result=90-(1.57-result)*180/3.14;
        }
        else if (x<-1){
       result=0;
            pow=1;
            s=-1;
            x=-1*x;
            for(int i=1;i<=500;i+=2){
                for (int j=1;j<=i ;j++){
                    pow=pow*x;
                }
                for(int t=1; t<=i;t++){
                    s= -1*s;
                }
                result=result + s/(i*pow);
            }
            result=-90 +(1.57-result)*180/3.14;
        } else if (x==1){
            result=45;
        } else if (x==-1){
            result=135;
        }
        cout << "the given value is in degrees :";
    }else if (ops == "20"){
        cout << "insert any number greater than 0 :";
        cin >> num1;
        x= (num1 -1)/(num1 +1);
        num2=0;
        for(int i=1; i<100; i+=2){
            pow=1;
            for(int j=1;j<=i;j++){
                pow=pow*x;
            }
            for(int t=1;t<=i;t++){
                fac=fac*t;
            }
            num2= num2 + pow/i;
        }
        result= 2*num2;
    }
    else{
    cout << "invalid operator " ;
    }
    cout << result;
    return 0;
}
