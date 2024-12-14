#include<iostream>
#include<string>
#include<limits>// For clearing input buffer
#include<windows.h>
using namespace std;
//Function to set console text color
void setColor(int Color)
{
	HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole,Color);
}
//colors
 
#define COLOR_BLACK 0 
#define COLOR_GREEN 2 
#define COLOR_RED 4 
#define COLOR_BLUE 1 
#define COLOR_YELLOW 6 
#define COLOR_WHITE 15 
#define COLOR_yellow 14
#define COLOR_PURPLE 5
#define COLOR_CYAN 3
#define COLOR_PINK 13
#define COLOR_GRAY 8
// structure for staff management
struct Staff{
	int id;
	string name;
	string role;
	float salary;
};
// structure for managing bookings
struct Booking{
	int bookingId;
	string customerName;
	string roomType;
	int days;
	float totalAmount;
};
// Room structure
struct Room {
	string roomNumber;
    string roomType;
    double price;
    bool isAvailable;
    string review;
};
// Guest structure
struct Guest {
    string name;         // Guest's name
    string guestID;         // Unique ID for the guest
    string checkInDate;  // Check-in date
    string contactInfo;
    string roomNumber;      // Room number assigned to the guest
    bool isCheckedIn;    // Check-isn status
};
//billing structure
struct Billing{
int billId;
string name;
double amount;
string paymentStatus;
string billingDate;
};
//Global arrray and count
Staff staffArray[100];
Booking bookingArray[100];
Billing billingArray[100]; 
//Room roomArray[100];
Room roomsArray[100];
Guest guests[100];
// Counters to track current number of staff and booking
int staffCount=0;
int bookingCount=0;
// Counters to track current number of rooms and guests
int roomCount = 0;
int guestCount = 0;
// Counters to track current number of billing
int billingCount=0;
//int maxBills=100;
//  functions
void manageStaff();
void manageBooking();
void manageRooms();
void manageGuest();
void manageBilling();
void manageReview();
//Staff function
void addStaff();
void deleteStaff();
void updateStaff();
void searchStaff();
void showStaff();
//Booking functions
void addBooking();
void deleteBooking();
void updateBooking();
void searchBooking();
void showBooking();
//Room functions
void addRoom();
void deleteRoom();
void searchRoom();
void updateRoom();
void showRoomRecords();
//Guest functions
void addGuest();
void editGuest();
void checkInGuest();
void checkOutGuest();
void searchGuest();
void showGuestRecords();
//void manageBilling();
void addBill(Billing billingArray[], int &billingCount);
void updateBill(Billing billingArray[],int billingCount);
void deleteBill(Billing billingArray[],int billingCount);
void searchBill(Billing billingArray[],int billingCount);
void showAllBills(Billing billingArray[],int billingCount);
//Review functions
void addReview();
void viewReviews();
void updateReview();
void deleteReview();
int main()
{
	int choice;
	while(true)
	{
		setColor(COLOR_BLUE);
		cout<<"\n============================= HOTEL MANAGEMENT SYSTEM ============================="<<endl;
		setColor(COLOR_PINK);
		cout<<"1. Manage Staff\n";
		cout<<"2. Manage Booking\n";
		cout<<"3. Manage Rooms\n";
		cout<<"4. Manage Guests\n";
		cout<<"5. Manage Billing\n";
		cout<<"6. Manage Review\n";
		cout<<"7. Exit\n";
		setColor(COLOR_WHITE);
		cout<<"********************************\n";
		setColor(COLOR_GREEN);
		cout<<"Enter your choice: "<<endl;
		cin>>choice;
		setColor(COLOR_WHITE);
		cout<<"********************************\n";
		switch(choice)
		{
			case 1:
				manageStaff();
				break;
			case 2:
				manageBooking();
				break;
			case 3:
				manageRooms();
				break;
			case 4:
				manageGuest();
				break;
			case 5:
				manageBilling();
				break;
			case 6:
				manageReview();
				break;
			case 7:
				setColor(COLOR_RED);
				cout<<"Exit.....\n";
				return 0;
			default:
				setColor(COLOR_YELLOW);
				cout<<"Invalid choice! Try again.\n ";
				
		}
		
	}
	
}
void manageStaff()
{
	int choice;
	while(true)
	{
		setColor(COLOR_PINK);
		cout << "\n===== Manage Staff =====\n";
		setColor(COLOR_GRAY);
        cout << "1. Add Staff\n";
        setColor(COLOR_GRAY);
        cout << "2. Delete Staff\n";
        setColor(COLOR_GRAY);
        cout << "3. Update Staff\n";
        setColor(COLOR_GRAY);
        cout << "4. Search Staff\n";
        setColor(COLOR_GRAY);
        cout << "5. Show All Staff\n";
        setColor(COLOR_GREEN);
        cout << "6. Back to Main Menu\n";
        setColor(COLOR_WHITE);
		cout<<"********************************\n";
		setColor(COLOR_PURPLE);
        cout << "Enter your choice: ";
        cin >> choice;
        setColor(COLOR_WHITE);
        cout<<"********************************\n";
        switch (choice) {
            case 1:
                addStaff();
                break;
            case 2:
                deleteStaff();
                break;
            case 3:
                updateStaff();
                break;
            case 4:
                searchStaff();
                break;
            case 5:
                showStaff();
                break;
            case 6:
                return;
            default:
            	setColor(COLOR_YELLOW);
                cout << "Invalid choice! Try again.\n";
        }
    }
}

void manageBooking() {
    int choice;
    while (true) {
    	setColor(COLOR_PINK);
        cout << "\n===== Manage Booking =====\n";
        setColor(COLOR_GRAY);
        cout << "1. Add Booking\n";
        cout << "2. Delete Booking\n";
        cout << "3. Update Booking\n";
        cout << "4. Search Booking\n";
        cout << "5. Show All Bookings\n";
        setColor(COLOR_GREEN);
        cout << "6. Back to Main Menu\n";
        setColor(COLOR_WHITE);
		cout<<"********************************\n";
        setColor(COLOR_PURPLE);
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"********************************\n";

        switch (choice) {
            case 1:
                addBooking();
                break;
            case 2:
                deleteBooking();
                break;
            case 3:
                updateBooking();
                break;
            case 4:
                searchBooking();
                break;
            case 5:
                showBooking();
                break;
            case 6:
                return;
            default:
            	setColor(COLOR_RED);
                cout << "Invalid choice! Try again.\n";
        }
    }
}
void manageRooms()
{
	int choice;
	while(true)
	{
		setColor(COLOR_PINK);
		cout << "\n===== Manage Rooms =====\n";
		setColor(COLOR_GRAY);
        cout << "1. Add Room\n";
        cout << "2. Delete Room\n";
        cout << "3. Update Room \n";
        cout << "4. Search Room\n";
        cout << "5. Show Room Records\n";
        setColor(COLOR_GREEN);
        cout << "6. Back to Main Menu\n";
        setColor(COLOR_WHITE);
		cout<<"********************************\n";
		setColor(COLOR_PURPLE);
        cout << "Enter your choice: ";
        cin >> choice;
        setColor(COLOR_WHITE);
        cout<<"********************************\n";
        switch (choice) {
            case 1:
                //addRoom(Room roomsArray[],int roomCount);
                addRoom();
                break;
            case 2:
                //deleteRoom(Room roomArray[],int roomCount);
                deleteRoom();
                break;
            case 3:
               // updateRoom(Room roomArray[],int roomCount);
               updateRoom();
                break;
            case 4:
                //searchRoom(Room roomArray[],int roomCount);
                searchRoom();
                break;
            case 5:
            	//showRoomRecords(Room roomArray[],int roomCount);
            	showRoomRecords();
            	break;
            case 6:
                return;
            default:
            	setColor(COLOR_YELLOW);
                cout << "Invalid choice! Try again.\n";
        }
    }
}

void manageGuest() {
    int choice;
    while (true) {
    	setColor(COLOR_PINK);
        cout << "\n===== Manage Guest =====\n";
        setColor(COLOR_GRAY);
        cout << "1. Add Guest\n";
        cout << "2. Edit Guest\n";
        cout << "3. Check in Guest\n";
        cout << "4. Check out Guest\n";
        cout << "5. Search Guest\n";
        cout << "6. Show  Guest Records\n";
        setColor(COLOR_GREEN);
        cout << "7. Back to Main Menu\n";
        setColor(COLOR_WHITE);
		cout<<"********************************\n";
        setColor(COLOR_PURPLE);
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"********************************\n";

        switch (choice) {
            case 1:
                addGuest();
                break;
            case 2:
                editGuest();
                break;
            case 3:
                checkInGuest();
                break;
            case 4:
               checkOutGuest();
                break;
            case 5:
               searchGuest();
                break;
            case 6:
            	showGuestRecords();
            	break;
            case 7:
                return;
            default:
            	setColor(COLOR_RED);
                cout << "Invalid choice! Try again.\n";
        }
    }
}
void manageBilling()
{           
            
    int choice;

    while (true) {
    	setColor(COLOR_GREEN);
        cout << "\n--- Manage Billing ---\n";
        cout << "1. Add Bill\n";
        cout << "2. Update Bill\n";
        cout << "3. Delete Bill\n";
        cout << "4. Search Bill\n";
        cout << "5. Show All Bills\n";
        cout << "6. Return to Main Menu\n";
        setColor(COLOR_WHITE);
		cout<<"********************************\n";
        cout << "Enter your choice: ";
        cin >> choice;
        setColor(COLOR_WHITE);
		cout<<"********************************\n";
        switch (choice) {
            case 1:
                addBill(billingArray, billingCount);
                break;
            case 2:
                updateBill(billingArray, billingCount);
                break;
            case 3:
                deleteBill(billingArray, billingCount);
                break;
            case 4:
                searchBill(billingArray, billingCount);
                break;
            case 5:
                showAllBills(billingArray, billingCount);
                break;
            case 6:
                return ; // Exit to main menu
            default:
                cout << "Invalid choice. Try again.\n";
        }
    }
}
void manageReview()
{
	int choice;
	while(true)
	{
		setColor(COLOR_PINK);
		cout << "\n===== Manage Review =====\n";
		setColor(COLOR_GRAY);
        cout << "1. Add Review\n";
        setColor(COLOR_GRAY);
        cout << "2. View Review\n";
        setColor(COLOR_GRAY);
        cout << "3. Update Review\n";
        setColor(COLOR_GRAY);
        cout << "4. Delete Review\n";
        setColor(COLOR_GREEN);
        cout << "5. Back to Main Menu\n";
        setColor(COLOR_WHITE);
		cout<<"********************************\n";
		setColor(COLOR_PURPLE);
        cout << "Enter your choice: ";
        cin >> choice;
        setColor(COLOR_WHITE);
        cout<<"********************************\n";
        switch (choice) {
            case 1:
                addReview();
                break;
            case 2:
                viewReviews();
                break;
            case 3:
                updateReview();
                break;
            case 4:
                deleteReview();
                break;
            case 5:
                return;
            default:
            	setColor(COLOR_YELLOW);
                cout << "Invalid choice! Try again.\n";
        }
    }
}
// Function implementations
void addStaff() {
    if (staffCount < 100) {
    	setColor(COLOR_CYAN);
        cout << "\nEnter Staff ID: ";
        cin >> staffArray[staffCount].id;
        cin.ignore();
        cout << "Enter Staff Name: ";
        getline(cin,staffArray[staffCount].name);
        cout << "Enter Staff Role: ";
        getline(cin,staffArray[staffCount].role);
        cout << "Enter Salary: ";
        cin >> staffArray[staffCount].salary;
        staffCount++;
        setColor(COLOR_GREEN);
        cout << "Staff added successfully!\n";
    } else {
    	setColor(COLOR_RED);
        cout << "Staff list is full!\n";
    }
    setColor(COLOR_WHITE);
    cout<<"********************************\n";
}

void deleteStaff() {
    int id, index = -1;
    setColor(COLOR_PURPLE);
    cout << "\nEnter Staff ID to delete: ";
    cin >> id;
    for (int i = 0; i < staffCount; i++) {
        if (staffArray[i].id == id) {
            index = i;
            break;
        }
    }
    if (index != -1) {
        for (int i = index; i < staffCount - 1; i++) {
            staffArray[i] = staffArray[i + 1];
        }
        staffCount--;
        setColor(COLOR_GREEN);
        cout << "Staff deleted successfully!\n";
    } else {
    	setColor(COLOR_RED);
        cout << "Staff ID not found!\n";
    }
    setColor(COLOR_BLACK);
    cout<<"********************************\n";
}

void updateStaff() {
    int id, index = -1;
    setColor(COLOR_YELLOW);
    cout << "\nEnter Staff ID to update: ";
    cin >> id;
    for (int i = 0; i < staffCount; i++) {
        if (staffArray[i].id == id) {
            index = i;
            break;
        }
    }
    if (index != -1) {
    	setColor(COLOR_BLUE);
        cout << "Enter New Staff Name: ";
        cin.ignore();
        getline(cin,staffArray[index].name);
        cout << "Enter New Staff Role: ";
        getline(cin,staffArray[index].role);
        cout << "Enter New Salary: ";
        cin >> staffArray[index].salary;
        setColor(COLOR_GREEN);
        cout << "Staff updated successfully!\n";
    } else {
    	setColor(COLOR_RED);
        cout << "Staff ID not found!\n";
    }
    setColor(COLOR_WHITE);
    cout<<"********************************\n";
}

void searchStaff() {
    int id;
    setColor(COLOR_PINK);
    cout << "\nEnter Staff ID to search: ";
    cin >> id;
    for (int i = 0; i < staffCount; i++) {
        if (staffArray[i].id == id) {
        	setColor(COLOR_CYAN);
            cout << "\nStaff ID: " << staffArray[i].id << "\n";
            cout << "Name: " << staffArray[i].name << "\n";
            cout << "Role: " << staffArray[i].role << "\n";
            cout << "Salary: " << staffArray[i].salary << "\n";
            return;
        }
    }
    setColor(COLOR_RED);
    cout << "Staff ID not found!\n";
    setColor(COLOR_WHITE);
    cout<<"********************************\n";
}
void showStaff() {
    if (staffCount == 0) {
    	setColor(COLOR_RED);
        cout << "\nNo staff records found!\n";
        return;
    }
    for (int i = 0; i < staffCount; i++) {
    	setColor(COLOR_YELLOW);
        cout << "\nStaff ID: " << staffArray[i].id << "\n";
        cout << "Name: " << staffArray[i].name << "\n";
        cout << "Role: " << staffArray[i].role << "\n";
        cout << "Salary: " << staffArray[i].salary << "\n";
    }
    setColor(COLOR_WHITE);
    cout<<"********************************\n";
}
void addBooking() {
    if (bookingCount < 100) {
    	setColor(COLOR_GREEN);
        cout << "\nEnter Booking ID: ";
        cin >> bookingArray[bookingCount].bookingId;
        cin.ignore();
        cout << "Enter Customer Name: ";
        getline(cin,bookingArray[bookingCount].customerName);
        cout << "Enter Room Type: ";
        getline(cin,bookingArray[bookingCount].roomType);
        cout << "Enter Duration (days): ";
        cin >> bookingArray[bookingCount].days;
        cout << "Enter Total Amount: ";
        cin >> bookingArray[bookingCount].totalAmount;
        bookingCount++;
        setColor(COLOR_yellow);
        cout << "Booking added successfully!\n";
    } else {
    	setColor(COLOR_PINK);
        cout << "Booking list is full!\n";
    }
    setColor(COLOR_WHITE);
    cout<<"********************************\n";
}

void deleteBooking() {
    int id, index = -1;
    setColor(COLOR_CYAN);
    cout << "\nEnter Booking ID to delete: ";
    cin >> id;
    for (int i = 0; i < bookingCount; i++) {
        if (bookingArray[i].bookingId == id) {
            index = i;
            break;
        }
    }
    if (index != -1) {
        for (int i = index; i < bookingCount - 1; i++) {
            bookingArray[i] = bookingArray[i + 1];
        }
        bookingCount--;
        setColor(COLOR_GRAY);
        cout << "Booking deleted successfully!\n";
    } else {
    	setColor(COLOR_RED);
        cout << "Booking ID not found!\n";
    }
    setColor(COLOR_WHITE);
    cout<<"********************************\n";
}

void updateBooking() {
    int id, index = -1;
    setColor(COLOR_CYAN);
    cout << "\nEnter Booking ID to update: ";
    cin >> id;
    for (int i = 0; i < bookingCount; i++) {
        if (bookingArray[i].bookingId == id) {
            index = i;
            break;
        }
    }
    if (index != -1) {
    	setColor(COLOR_PINK);
        cout << "Enter New Customer Name: ";
        cin.ignore();
        getline(cin,bookingArray[index].customerName);
        cout << "Enter New Room Type: ";
        getline(cin,bookingArray[index].roomType);
        cout << "Enter New Duration (days): ";
        cin >> bookingArray[index].days;
        cout << "Enter New Total Amount: ";
        cin >> bookingArray[index].totalAmount;
        setColor(COLOR_BLUE);
        cout << "Booking updated successfully!\n";
    } else {
    	setColor(COLOR_RED);
        cout << "Booking ID not found!\n";
    }
    setColor(COLOR_WHITE);
    cout<<"********************************\n";
}

void searchBooking() {
    int id;
    setColor(COLOR_PINK);
    cout << "\nEnter Booking ID to search: ";
    cin >> id;
    for (int i = 0; i < bookingCount; i++) {
        if (bookingArray[i].bookingId == id) {
        	setColor(COLOR_PURPLE);
            cout << "\nBooking ID: " << bookingArray[i].bookingId << "\n";
            cout << "Customer Name: " << bookingArray[i].customerName << "\n";
            cout << "Room Type: " << bookingArray[i].roomType << "\n";
            cout << "Duration: " << bookingArray[i].days << " days\n";
            cout << "Total Amount: " << bookingArray[i].totalAmount << "\n";
            return;
        }
    }
    setColor(COLOR_RED);
    cout << "Booking ID not found!\n";
    setColor(COLOR_WHITE);
    cout<<"********************************\n";
}

void showBooking() {
    if (bookingCount == 0) {
    	setColor(COLOR_GREEN);
        cout << "\nNo booking records found!\n";
        return;
    }
    for (int i = 0; i < bookingCount; i++) {
    	setColor(COLOR_CYAN);
        cout << "\nBooking ID: " << bookingArray[i].bookingId << "\n";
        cout << "Customer Name: " << bookingArray[i].customerName << "\n";
        cout << "Room Type: " << bookingArray[i].roomType << "\n";
        cout << "Duration: " << bookingArray[i].days << " days\n";
        cout << "Total Amount: " << bookingArray[i].totalAmount << "\n";
    }
    setColor(COLOR_WHITE);
    cout<<"********************************\n";
}
void addRoom() {
    	setColor(COLOR_CYAN);
    cout << "Enter Room Number: ";
    cin >> roomsArray[roomCount].roomNumber;
    cout << "Enter Room Type: ";
    cin >> roomsArray[roomCount].roomType;
    cout << "Enter Room Price: ";
    cin >> roomsArray[roomCount].price;
    roomsArray[roomCount].isAvailable = true;
    roomCount++;
    	setColor(COLOR_GREEN);
    cout << "Room added successfully.\n";
    setColor(COLOR_WHITE);
    cout<<"********************************\n";
}
void editRoom() {
    string roomNumber;
    setColor(COLOR_YELLOW);
    cout << "Enter Room Number to edit: ";
    cin >> roomNumber;
    for (int i = 0; i < roomCount; ++i) {
        if (roomsArray[i].roomNumber == roomNumber) {
            cout << "Enter new Room Type: ";
            cin >> roomsArray[i].roomType;
            cout << "Enter new Room Price: ";
            cin >> roomsArray[i].price;
            setColor(COLOR_WHITE);
    cout<<"********************************\n";
    
            cout << "Room updated successfully.\n";
            	setColor(COLOR_WHITE);
    cout<<"********************************\n";
            return;
        }
    }
    cout << "Room not found.\n";
}
void deleteRoom() {
    string roomNumber;
    setColor(COLOR_GREEN);
    cout << "Enter Room Number to delete: ";
    cin >> roomNumber;
    for (int i = 0; i < roomCount; ++i) {
        if (roomsArray[i].roomNumber == roomNumber) {
            // Shift all elements after the found room to the left
            for (int j = i; j < roomCount - 1; ++j) {
                roomsArray[j] = roomsArray[j + 1];
            }
            --roomCount;
            setColor(COLOR_WHITE);
    cout<<"********************************\n";
            cout << "Room deleted successfully.\n";
            setColor(COLOR_WHITE);
    cout<<"********************************\n";
            return;
        }
    }
    cout << "Room not found.\n";
}
void searchRoom() {
    string roomNumber;
    setColor(COLOR_PURPLE);
    cout << "Enter Room Number to search: ";
    cin >> roomNumber;
    for (int i = 0; i < roomCount; ++i) {
        if (roomsArray[i].roomNumber == roomNumber) {
            cout << "Room Number: " << roomsArray[i].roomNumber<<endl << " Type: " << roomsArray[i].roomType<<endl
                 << " Price: " << roomsArray[i].price<<endl << " Available: " << (roomsArray[i].isAvailable ? "Yes" : "No") << endl;
                 setColor(COLOR_WHITE);
    cout<<"********************************\n";
            return;
        }
    }
    setColor(COLOR_RED);
    cout << "Room not found.\n";
}
void updateRoom() {
    string roomNumber;
    setColor(COLOR_CYAN);
    cout << "Enter Room Number to update price: ";
    cin >> roomNumber;
    for (int i = 0; i < roomCount; ++i) {
        if (roomsArray[i].roomNumber == roomNumber) {
            cout << "Enter new Price: ";
            cin >> roomsArray[i].price;
            cout << "Room pricing updated successfully.\n";
             setColor(COLOR_WHITE);
    cout<<"********************************\n";
            return;
        }
    }
    setColor(COLOR_RED);
    cout << "Room not found.\n";
}
void showRoomRecords() {
    if (roomCount == 0) {
    	setColor(COLOR_PINK);
        cout << "No room records available.\n";
        return;
    }
    cout << "\n*** Room Records ***\n";
    for (int i = 0; i < roomCount; ++i) {
        cout << " Room Number: " << roomsArray[i].roomNumber<<endl;
        cout << " Type: " << roomsArray[i].roomType<<endl;
        cout << " Price: " << roomsArray[i].price<<endl;
        cout << " Available: " << (roomsArray[i].isAvailable ? "Yes" : "No") << endl;
         setColor(COLOR_WHITE);
    cout<<"********************************\n";
    }
}
void addGuest() {
    if (guestCount >=100) {
    	setColor(COLOR_GRAY);
        cout << "Guest capacity reached. Cannot add more guests.\n";
        return;
    }
    // Access the current guest object directly 
    cout << "Enter Guest Name: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    getline(cin, guests[guestCount].name);
    cout << "Enter Guest ID: ";
    cin >> guests[guestCount].guestID;
    cout << "Enter Check-In Date (YYYY-MM-DD): ";
    cin >> guests[guestCount].checkInDate;
    cout<<"Enter Contact Number: ";
    cin>> guests[guestCount].contactInfo;    
    cout << "Enter Room Number: ";
    cin >> guests[guestCount].roomNumber;
    // Set the guest's check-in status
    guests[guestCount].isCheckedIn = true;
    // Increment the guest count after completing the assignment
    guestCount++;
    cout << "Guest added successfully.\n";
     setColor(COLOR_WHITE);
    cout<<"********************************\n";
}
void editGuest() {
    setColor(COLOR_PURPLE);
    string guestID;
    bool found=false;
    cout << "Enter Guest ID to edit: ";
    cin >> guestID;

    for (int i = 0; i < guestCount; ++i) {
        if (guests[i].guestID == guestID) {  // Correct comparison
            cout << "Enter new Name: ";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  
            getline(cin, guests[i].name);
            cout << "Enter new Contact Info: ";
            cin >> guests[i].contactInfo; 
            cout << "Enter new room number: ";
            cin >> guests[i].roomNumber; 
            cout << "Guest information updated successfully.\n";
             setColor(COLOR_WHITE);
    cout<<"********************************\n";
            return;
        }
    }
    setColor(COLOR_RED);
    cout << "Guest not found.\n";
}
void checkInGuest() {
    setColor(COLOR_PINK);
    string guestID;
    bool found=false;
    cout << "Enter Guest ID to check-in: ";
    cin >> guestID;
    for (int i = 0; i < guestCount; ++i) {
        if (guests[i].guestID == guestID) //&& !guests[i].isCheckedIn) {  // Correct comparison
        {
        	if(guests[i].isCheckedIn){
        		cout<<"Guest is already checkedin.\n";
			} else{
				guests[i].isCheckedIn=true;
				cout<<"Guest checked in successfully.\n";
			}
			found=true;
			return;
		}
	}
	if (!found){
		cout<<"Guest not found.\n";
}
	}
void checkOutGuest() {
	setColor(COLOR_CYAN);
    string guestID;
    bool found=false;
    cout << "Enter Guest ID to check-out: ";
    cin >> guestID;
    for (int i = 0; i < guestCount; ++i) {
        if (guests[i].guestID == guestID) {
        	if(!guests[i].isCheckedIn){
        		cout<<"Guest is already checked out.\n";
			} else{
				guests[i].isCheckedIn=false;
				cout<<"Guest checked out successfully.\n";
			}
			found=true;
			return;
		}
	}
	if(!found){
		cout<<"Guest not found.\n";
	}
}
void searchGuest() {
	setColor(COLOR_PURPLE);
    string guestID;
    cout << "Enter Guest ID to search: ";
    cin >> guestID;
    for (int i = 0; i < guestCount; ++i) {
        if (guests[i].guestID == guestID) {
        	setColor(COLOR_PINK);
        	cout<<"\nGuest Datails:\n";
        	setColor(COLOR_PURPLE);
        	cout<< "Name: " << guests[i].name<<endl;
            cout << "Guest ID: " << guests[i].guestID<<endl; 
            cout<< "Checked In Date: " <<guests[i].checkInDate<<endl;
            cout<< "Contact Info: " << guests[i].contactInfo<<endl;
			cout<< "Room Number: " << guests[i].roomNumber<<endl;
			cout<<"Status: "<<(guests[i].isCheckedIn ? "Checked In" : "Checked Out")<<endl;
            return;
             setColor(COLOR_WHITE);
    cout<<"********************************\n";
        }
    }
    setColor(COLOR_RED);
    cout << "Guest not found.\n";
}
void showGuestRecords() {
    if (guestCount == 0) {
    	setColor(COLOR_BLUE);
        cout << "No guest records available.\n";
        return;
    }
    cout << "\n*** Guest Records ***\n";
    for (int i = 0; i < guestCount; ++i) {
    	cout<<"\nGuest "<<(i + 1)<<":\n";
        cout << " \nGuest ID: " << guests[i].guestID<<endl;
        cout << " Name: " << guests[i].name<<endl;
        cout << " Contact Info: " << guests[i].contactInfo<<endl;
        cout << " Room Number: " << guests[i].roomNumber<<endl;
        cout << " Checked-In Date: " << guests[i].checkInDate << endl;
        cout<<"Status: "<<(guests[i].isCheckedIn ? "Checked In" : "Checked Out")<<endl;
         setColor(COLOR_WHITE);
    cout<<"********************************\n";
    }
}

void addBill(Billing billingArray[], int &billingCount) {
	setColor(COLOR_CYAN);
    cout << "Enter Bill ID: ";
    cin >> billingArray[billingCount].billId;
    cin.ignore();  // To ignore the newline character from the previous input
    cout << "Enter Name: ";
    getline(cin, billingArray[billingCount].name);
    cout << "Enter Amount: ";
    cin >> billingArray[billingCount].amount;
    cin.ignore();
    cout << "Enter Payment Status (Paid/Unpaid): ";
    getline(cin, billingArray[billingCount].paymentStatus);
    cout << "Enter Billing Date (dd/mm/yyyy): ";
    getline(cin, billingArray[billingCount].billingDate);

    billingCount++;  // Increment the bill count
    cout << "Bill added successfully." << endl;
     setColor(COLOR_WHITE);
    cout<<"********************************\n";
}
void updateBill(Billing billingArray[], int billingCount) {
    int billId;
    setColor(COLOR_PINK);
    cout << "Enter Bill ID to update: ";
    cin >> billId;

    bool found = false;
    for (int i = 0; i < billingCount; i++) {
        if (billingArray[i].billId == billId) {
            found = true;
            cout << "Enter new Name: ";
            cin.ignore();  // Ignore the newline character
            getline(cin, billingArray[i].name);
            cout << "Enter new Amount: ";
            cin >> billingArray[i].amount;
            cin.ignore();
            cout << "Enter new Payment Status (Paid/Unpaid): ";
            getline(cin, billingArray[i].paymentStatus);
            cout << "Enter new Billing Date (dd/mm/yyyy): ";
            getline(cin, billingArray[i].billingDate);
            cout << "Bill updated successfully." << endl;
            break;
        }
    }

    if (!found) {
        cout << "Bill with ID " << billId << " not found." << endl;
    }
}
void deleteBill(Billing billingArray[], int billingCount) {
     int billId;
     setColor(COLOR_YELLOW);
    cout << "Enter Bill ID to delete: ";
    cin >> billId;

    bool found = false;
    for (int i = 0; i < billingCount; i++) {
        if (billingArray[i].billId == billId) {
            found = true;

            // Shift all subsequent bills one step left to "delete" the bill
            for (int j = i; j < billingCount - 1; j++) {
                billingArray[j] = billingArray[j + 1];
            }
            billingCount--;  // Decrease the count
            cout << "Bill deleted successfully.\n";
            break;
        }
    }

    if (!found) {
        cout << "Bill with ID " << billId << " not found.\n";
    }
     setColor(COLOR_WHITE);
    cout<<"********************************\n";
}
void searchBill(Billing billingArray[], int billingCount) {
     int billId;
     setColor(COLOR_GREEN);
    cout << "Enter Bill ID to search: ";
    cin >> billId;

    bool found = false;
    for (int i = 0; i < billingCount; i++) {
        if (billingArray[i].billId == billId) {
            found = true;
            cout << "Bill found:\n";
            cout << "ID: " << billingArray[i].billId << "\n";
            cout << "Name: " << billingArray[i].name << "\n";
            cout << "Amount: " << billingArray[i].amount << "\n";
            cout << "Payment Status: " << billingArray[i].paymentStatus << "\n";
            cout << "Billing Date: " << billingArray[i].billingDate << "\n";
            break;
        }
    }

    if (!found) {
        cout << "Bill with ID " << billId << " not found.\n";
    }
     setColor(COLOR_WHITE);
    cout<<"********************************\n";
}
void showAllBills(Billing billingArray[], int billingCount) {
    if (billingCount == 0) {
    	setColor(COLOR_RED);
        cout << "No bills to display.\n";
        return;
    }
setColor(COLOR_PURPLE);
    cout << "\n--- All Bills ---\n";
    for (int i = 0; i < billingCount; i++) {
        cout << "Bill ID: " << billingArray[i].billId << endl;
        cout << "Guest Name: " << billingArray[i].name << endl;
        cout << "Amount: " << billingArray[i].amount << endl;
        cout << "Payment Status: " << billingArray[i].paymentStatus << endl;
        cout << "Billing Date: " << billingArray[i].billingDate << endl;
        cout << "------------------\n";
         setColor(COLOR_WHITE);
    cout<<"********************************\n";
    }
}
void addReview() {
    if (roomCount < 100) {
    	setColor(COLOR_PINK);
        cout << "Enter room number: ";
        cin >> roomsArray[roomCount].roomNumber;
        cout << "Enter review: ";
        cin.ignore(); 
        getline(cin, roomsArray[roomCount].review);
        roomCount++;
        cout << "Review added successfully!" << endl;
    } else {
    	setColor(COLOR_RED);
        cout << "Room limit reached. Cannot add more reviews." << endl;
    }
     setColor(COLOR_WHITE);
    cout<<"********************************\n";
}

void viewReviews() {
    if (roomCount == 0) {
    	setColor(COLOR_CYAN);
        cout << "No reviews available." << endl;
        return;
    }
    for (int i = 0; i < roomCount; i++) {
        cout << "Room " << roomsArray[i].roomNumber << ": " << roomsArray[i].review << endl;
    }
     setColor(COLOR_WHITE);
    cout<<"********************************\n";
}
void updateReview() {
    string roomNumber;
    setColor(COLOR_GRAY);
    cout << "Enter room number to update: ";
    cin >> roomNumber;
    for (int i = 0; i < roomCount; i++) {
        if (roomsArray[i].roomNumber == roomNumber) {
            cout << "Current review: " << roomsArray[i].review << endl;
            cout << "Enter new review: ";
            cin.ignore(); 
            getline(cin, roomsArray[i].review);
            cout << "Review updated successfully!" << endl;
            return;
        }
         setColor(COLOR_WHITE);
    cout<<"********************************\n";
    }
    setColor(COLOR_RED);
    cout << "Room not found." << endl;}

void deleteReview() {
    string roomNumber;
    setColor(COLOR_PINK);
    cout << "Enter room number to delete: ";
    cin >> roomNumber;
    for (int i = 0; i < roomCount; i++) {
        if (roomsArray[i].roomNumber == roomNumber) {
            for (int j = i; j < roomCount - 1; j++) {
                roomsArray[j] = roomsArray[j + 1]; 
            }
            roomCount--;
            cout << "Review deleted successfully!" << endl;
            return;
             setColor(COLOR_WHITE);
    cout<<"********************************\n";
        }
    }
    setColor(COLOR_RED);
    cout << "Room not found." << endl;
}



		