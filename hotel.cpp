// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;

struct customer{
    string name;
    int phoneno;
 
};
int qrooms,qparatha, qnoodles,qjuices,qrotis,qcurry;





int main(){
   struct customer custo; 
 cout<<"\n\tPlease Enter your Name: " ;  
 cin>>custo.name;
 cout<<"\n\tPlease Enter your Phone Number: " ;
cin>>custo.phoneno;
 int quantity;
 string Administrator_id;
 string Password;

//  int qrooms=1,qparatha=2, qnoodles=9,qjuices=9,qrotis=9,qcurry=8;

 int srooms=0,sparatha=0, snoodles=0,sjuices=0,srotis=0,scurry=0;
 int total_rooms=0, total_paratha=0, total_noodles=0,total_juices=0,total_rotis=0,total_curry=0;               
int choice;


// cout<<"\n\t              Quantity of items we have \n" ;
// cout<<"Rooms available: ";
// cin>>qrooms;
// cout<<"\nQuantity of Paratha available: ";
// cin>>qparatha;
// cout<<"\nQuantity of Noodles available: ";
// cin>>qnoodles;
// cout<<"\nNumber of Roti available: ";
// cin>>qrotis;
// cout<<"\nQuantity of Curry available: ";
// cin>>qcurry;
// cout<<"\nQuantity of Shakes available: ";
// cin>>qjuices;

m:
cout<<"\n\t\t\t Please select from the Menu options";

cout<<"\n 1 - Rooms ";
cout<<"\n 2 - Paratha";
cout<<"\n 3 - Noodles ";
cout<<"\n 4 - shakes ";
cout<<"\n 5 - Curry ";
cout<<"\n 6 - roti";
cout<<"\n 7 - Administrator Login   ";
cout<<"\n 8 - Exit   ";

cout << "\n\t   Please Enter Your Choice: ";
cin>> choice;




switch(choice){

case 1: 
        cout<<"Enter the Number of rooms you want:"<<endl;
         cin>>quantity;

         if( (qrooms - srooms) >= quantity){

               srooms= srooms+quantity;
               total_rooms= total_rooms +1200*quantity;
            cout<<"\n\n\t\t"<<quantity<<"\troom/rooms are alloted to you!";
         }  
         else{

            cout<<"Only "<<(qrooms- srooms)<<"\t Room/Rooms are only available";
            break;
         }

case 2: 
        cout<<"\n\tEnter the Number of paratha you want:"<<endl;
         cin>>quantity;

         if( (qparatha - sparatha) >= quantity){

               sparatha=sparatha +quantity;
               total_paratha= total_paratha+ 300*quantity;
            cout<<"\n\n\t\t"<<quantity<<"\t Paratha is the order";
         }  
         else{

            cout<<"Only "<<(qparatha - sparatha)<<"\t paratha are only available\n";
            break;
         }

case 3: 
        cout<<"\n\tEnter the quantity of noodles you want:"<<endl;
         cin>>quantity;

         if( (qnoodles - snoodles) >= quantity){

               snoodles=snoodles+quantity;
               total_noodles=total_noodles+1200*quantity;
            cout<<"\n\n\t\t"<<quantity<<"\1 tnoodles is the order";
            
         }  
         else{

            cout<<"Only "<<(qnoodles - snoodles)<<"\t noodles are only available";
            break;
         }

case 4: 
        cout<<"\n\tEnter the Number of shakes you want:"<<endl;
         cin>>quantity;

         if( (qjuices - sjuices)>= quantity){

               sjuices= sjuices +quantity;
               total_juices+=150*quantity;
            cout<<"\n\n\t\t"<<quantity<<"\t Shakes is the order";
         }  
         else{

            cout<<"Only "<<(qjuices - sjuices)<<"\t shakes are only available";
            break;
         }

case 5: 
        cout<<"\n\tEnter the Number of curry items you want:"<<endl;
         cin>>quantity;

         if( (qcurry - qcurry)>= quantity){

               qcurry+=quantity;
               total_curry+=1200*quantity;
            cout<<"\n\n\t\t"<<quantity<<"\t curry is the order";
         }  
         else{

            cout<<"Only "<<(qcurry - qcurry)<<"\t curry are only available";
            break;
         }

case 6: 
        cout<<"\n\tEnter the Number of rotis you want:"<<endl;
         cin>>quantity;

         if( (qrotis - srotis) >= quantity){

               srotis+=quantity;
               total_rotis+=1200*quantity;
            cout<<"\n\n\t\t"<<quantity<<"\trotis is the order";
         }  
         else{

            cout<<"Only "<<(qrotis - srotis)<<"\trotis are only available";
            break;
         }


case 8: 
        cout<<"\n\t\t Thank You! visit Again ";
        
        exit(0);

case 7:
      cout<<"\n\t\t  Please Login if Administrator \n";
      cout<<"\n\t\t  Please Enter your Email \n" ;
      cin>>Administrator_id;
        cout<<"\n\t\t  Please Enter your password \n" ;
        cin>> Password;
        if( Administrator_id =="vinay" && Password=="@123" ){
              cout<<"\n\t              Quantity of items we have \n" ;
              cout<<"Rooms available: ";
              cin>>qrooms;
              cout<<"\nQuantity of Paratha available: ";
              cin>>qparatha;
              cout<<"\nQuantity of Noodles available: ";
              cin>>qnoodles;
              cout<<"\nNumber of Roti available: ";
              cin>>qrotis;
              cout<<"\nQuantity of Curry available: ";
              cin>>qcurry;
              cout<<"\nQuantity of Shakes available: ";
          cin>>qjuices;
  
        }
        else{
            cout<<"\n\t\t please Enter a Valid Email id";
            break;
        }
        
default:
       cout<<"\n\t  Please Enter your Choice from given Options";
             break;
}
goto m;



return 0;
}