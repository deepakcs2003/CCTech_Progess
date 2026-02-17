#include <iostream>
#include "cad.h"
using namespace std;

int main() {

    Document doc;
    int manu;

    while(true){

        cout<<"\nplease select number: \n"
            <<"for add line press 1: \n"
            <<"for add circle press 2: \n"
            <<"for add text press 3: \n"
            <<"for delete shapes press 4 and pass id: \n"
            <<"for show all shape press 5: \n"
            <<"for clone shape press 6 and pass id: \n"
            <<"for exit press 0: \n";

        cin>>manu;

        if(manu==1){
            double x1,y1,x2,y2;
            cout<<"enter x1 y1 x2 y2: \n";
            cin>>x1>>y1>>x2>>y2;
            doc.addLine(x1,y1,x2,y2);
        }
        else if(manu==2){
            double r,x,y;
            cout<<"enter radius and x and y: \n";
            cin>>r>>x>>y;
            doc.addCircle(r,x,y); 
        }
        else if(manu==3){
            string text;
            cout<<"enter text: \n";
            cin.ignore();
            getline(cin,text);
            doc.addText(text);
        }
        else if(manu==4){
            int id;
            cout<<"enter id: \n";
            cin>>id;
            doc.deleteObject(id);
        }
        else if(manu==5){
            doc.listObject();
        }
        else if(manu==6){
            int id;
            cout<<"enter id: \n";
            cin>>id;
            doc.cloneShape(id);
        }
        else if(manu==0){
            break;
        }
        else{
            cout<<"invalid input\n";
        }
    }

    return 0;
}