#include<iostream>
using namespace std ;
float sum (){
    int a ;
    cout << "Enter the first number :";
    cin >> a ;
    int b ;
    cout << "Enter the second number : ";
    cin >> b ;
    cout << "The sum is : " << a+b << endl ;
    return a + b;
}
float diff(){
    int c ;
    cout << "Enter the first number : ";
    cin >> c ;
    int d ;
    cout << "Enter the second number : ";
    cin >> d ;
    cout << "The difference of the 2 numbers is : " << c-d << endl ;
    return c-d;
}
float product (){
    int f ;
    cout << "Enter the first number : ";
    cin >> f ;
    int g ; 
    cout << "Enter the second number : ";
    cin >> g ;
    cout << "The product of the 2 numbers is  " << f*g << endl ;
    return f*g;

}
float divide(){
    double h ;
    cout << "Enter the numerator : ";
    cin >> h ;
    double i ;
    cout << "Enter the denominator : ";
    cin >> i ;
    if (i==0){
        cout << "Cannot divide by zero : ";
    }
    else {
        cout << "The quotient is : " << float(h/i) << endl;
    }
    return h/i;
    
}

int main(){
    cout << "THIS IS A CALCULATOR PROGRAM "<<endl;
    cout << "1 . ADDITION "<<endl;
    cout << "2 . SUBTRACTION "<<endl;
    cout << "3 . MULTIPLICATION "<<endl;
    cout << "4 . DIVISION  "<<endl;
    cout << "5. EXIT :"<<endl;
    int t =1;
    while(t==1){
        int choice ;
    cout << "Enter your choice : " << endl ;
    cin >> choice ;
    if (choice ==1 ){
        sum();
    }
    else if(choice == 2){
        diff();
    }
    else if (choice ==3 ){
        product ();
    }
    else if (choice == 4){
        divide();
    }
    else if (choice == 5 ){
        t = 0;
        cout << "Exiting ... ";
    }
    else{
        cout << "Enter a valid choice :";
    }
    

}
return 0;
}
    