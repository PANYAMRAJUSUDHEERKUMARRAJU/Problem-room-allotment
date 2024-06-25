    // show line to distinguish again
        design('#');

        hotel[0].position(a);  // also tells that how many chairs are still empty 

        int n = 1;
// we have 10 rows & 4 columns, showing the complete view of chairs
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                n++;
                if (strcmp(hotel[n].chair[i][j], "Empty") != 0)
                {
                    // -cout<<endl<<" The chair no."<<(n-1)<<"is reserved for : "<<hotel[a].chair[i][j]<<".";
                }
            }
        }
        break;
    }
// entered room number is not correct
    if (a > q)
        cout << "Enter correct room number :";
}

// to look for every position & used in show function
void reservation::position(int l)
{
    int s = 0, p = 0;    // s for serial number & p for counting empty chairs

    for (int i = 0; i < 10; i++)
    {
        cout << endl;

        for (int j = 0; j < 4; j++)
        {
            s++;

            // if chair is empty 
            if (strcmp(hotel[l].chair[i][j], "Empty") == 0)
            {
                cout.width(5);       // space between chair
                cout.fill(' ');
                cout << s << ".";    // serial no of chair
                cout.width(10);
                cout.fill(' ');
                cout << hotel[l].chair[i][j];   // if chair is empty then show empty
                p++;    // count the number of empty chairs 
            }
// if chair is not empty the again show space but this time show traveller's name
            else
            {
                cout.width(5);
                cout.fill(' ');
                cout << s << ".";
                cout.width(10);
                cout.fill(' ');
                cout << hotel[l].chair[i][j];
            }
        }
    }
    cout << "\n\nThere are " << p << " Chairs empty in Room No: " << hotel[l].room_number;
}

// show the installing data of room 
void reservation::avail()
{
    for (int n = 0; n < q; n++)
    {
        design('#');
        cout << "Room no: \t" << hotel[n].room_number << "\nHost: \t" << hotel[n].host << "\t\tStart time: \t" << hotel[n].start << "\tEnd  Time: \t"
             << hotel[n].send << "\nFrom: \t\t" << hotel[n].from << "\t\tTo: \t\t\t"
             << hotel[n].to << "\n";
        design('#');
        design('_');
    }
}

int main()
{
    system("cls");
    int w;
    
    while (1)
    {
        // system("cls");
        cout << "\n\n\n\n\n";
        design('#');
        cout << "\n\n";
        cout<<"\t\t\t\t\t\t\t\t\t Hotel Room Booking System";
        cout << "\n\n\n\t\t\t\t\t\t1.Booking\n\t\t\t\t\t\t"
             << "2.Reservation\n\t\t\t\t\t\t"
             << "3.Show\n\t\t\t\t\t\t"
             << "4.Rooms Available. \n\t\t\t\t\t\t"
             << "5.Exit";

        cout << "\n\t\t\t\t\t\tEnter your choice:-> ";
        cin >> w;    // our choice

        switch (w)
        {

        case 1:
            hotel[q].booking();     // installed the room & take data
            break;

        case 2:
            hotel[q].allotment();    // if entered room is already installed then allotment starts by taking chairs
            break;

        case 3:
            hotel[0].display();      // show the complete chair's view of required room
            break;

        case 4:
            hotel[0].avail();    // show the complete installing data
            break;

        case 5:
            exit(0);    // exit from the room 
        }
    }
    return 0;
}
