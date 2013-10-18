/*
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01
*@Author        : Pratik Mehta : : Batch : 4003-700-01
*@Version       : 1.0.1
*@LastModified  : 09/28/2012 1.25 PM
*
*/
#include "inventory.h"
#include "paperback.h"
#include "hardback.h"
#include "audiobook.h"
#include "electronic.h"
#include<vector>

int main()
{
    string buffer;
    ifstream FileRead;
    // File Open
    FileRead.open("input.txt");
    //Creating objects
    PaperBack PaperObject[10];
    PaperBack demo;
    HardBack HardObject[10];
    AudioBooks AudioObject[10];
    Ebooks EObject[10];
    //Count variables for no. of entities in each object
    int p=0,h=0,a=0,e=0;


    while(getline(FileRead,buffer))
    {   //Checks if type is Paperback and stores it in object
        if(!buffer.compare("Paperback"))
        {
            PaperObject[p].Paper=buffer;getline(FileRead,buffer);
            PaperObject[p].Title=buffer;getline(FileRead,buffer);
            PaperObject[p].Author=buffer;getline(FileRead,buffer);
            PaperObject[p].Price=buffer;
            p++;
        }
        //Checks if type is Hardcover and stores it in object
        if(!buffer.compare("Hardcover"))
        {

            HardObject[h].Hard=buffer;getline(FileRead,buffer);
            HardObject[h].Title=buffer;getline(FileRead,buffer);
            HardObject[h].Author=buffer;getline(FileRead,buffer);
            HardObject[h].Price=buffer;getline(FileRead,buffer);
            HardObject[h].SizeBook=buffer;
            h++;
        }
        //Checks if type is Audio and stores it in object
        if(!buffer.compare("Audio"))
        {
            AudioObject[a].Aud=buffer;getline(FileRead,buffer);
            AudioObject[a].Title=buffer;getline(FileRead,buffer);
            AudioObject[a].Author=buffer;getline(FileRead,buffer);
            AudioObject[a].Price=buffer;getline(FileRead,buffer);
            AudioObject[a].NoOfCD=buffer;
            a++;
        }

        //Checks if type is Electronic and stores it in object
        if(!buffer.compare("Electronic"))
        {

            EObject[e].Elec=buffer;getline(FileRead,buffer);
            EObject[e].Title=buffer;getline(FileRead,buffer);
            EObject[e].Author=buffer;getline(FileRead,buffer);
            EObject[e].Price=buffer;getline(FileRead,buffer);
            EObject[e].Provider=buffer;
            e++;
        }
    }
    // Storing in a single data structure : vector of array of object-array's
    vector<Inventory *> v(5);
    v[0]=PaperObject;
    v[1]=HardObject;
    v[2]=AudioObject;
    v[3]=EObject;


    //Accepts the user input
    cout<<"\nEnter author or title \n";
    string input;
    cin>>input;
    //Searching PaperObject
    PaperObject[0].Search(input,p,(PaperBack*)v[0]);
    //Searching HardObject
    HardObject[0].Search(input,h,(HardBack*)v[1]);
    //Searching AudioObject
    AudioObject[0].Search(input,a,(AudioBooks*)v[2]);
    //Searching Eobject
    EObject[0].Search(input,e,(Ebooks*)v[3]);




    FileRead.close();

}
