

//Jane McPheron

#include <iostream>
#include <chrono>
#include "MyBag_String.h"

using namespace std;
using namespace std::chrono;




/* 
TESTS BEFORE SORTING WAS IMPLEMENTED
That MyBag add zipped by in 0.000334 milliseconds.
That MyBag add zipped by in 4.2e-05 milliseconds.
That MyBag add zipped by in 4.1e-05 milliseconds.
That MyBag add zipped by in 4.1e-05 milliseconds.
That MyBag removal zipped by in 0.000292 milliseconds.
That MyBag removal zipped by in 0.000292 milliseconds.
That MyBag removal zipped by in 0.000208 milliseconds.
That MyBag removal zipped by in 0 milliseconds.
That MyBag removal zipped by in 0.000458 milliseconds.
That MyBag removal zipped by in 0.00025 milliseconds.
That MyBag removal zipped by in 0.000208 milliseconds.
That MyBag removal zipped by in 0.00025 milliseconds.
That MyBag add zipped by in 4.1e-05 milliseconds.
That MyBag add zipped by in 4.1e-05 milliseconds.
That MyBag add zipped by in 4.1e-05 milliseconds.
That MyBag add zipped by in 0 milliseconds.
That MyBag add zipped by in 4.1e-05 milliseconds.
That MyBag add zipped by in 0 milliseconds.
That MyBag add zipped by in 4.2e-05 milliseconds.
That MyBag add zipped by in 4.2e-05 milliseconds.
That MyBag add zipped by in 4.2e-05 milliseconds.
That MyBag add zipped by in 4.2e-05 milliseconds.
That MyBag add zipped by in 4.2e-05 milliseconds.
That MyBag add zipped by in 4.1e-05 milliseconds.
That MyBag add zipped by in 4.1e-05 milliseconds.
That MyBag add zipped by in 4.2e-05 milliseconds.
That MyBag add zipped by in 4.2e-05 milliseconds.
That MyBag add zipped by in 0.016541 milliseconds.
That MyBag add zipped by in 4.1e-05 milliseconds.
That MyBag add zipped by in 4.2e-05 milliseconds.
That MyBag add zipped by in 0 milliseconds.
That MyBag add zipped by in 0 milliseconds.
That MyBag add zipped by in 4.2e-05 milliseconds.
That MyBag add zipped by in 4.2e-05 milliseconds.
That MyBag add zipped by in 0 milliseconds.
That MyBag add zipped by in 4.2e-05 milliseconds.
That MyBag add zipped by in 4.1e-05 milliseconds.
That MyBag add zipped by in 4.2e-05 milliseconds.
That MyBag add zipped by in 0 milliseconds.
That MyBag add zipped by in 4.2e-05 milliseconds.
That MyBag add zipped by in 4.2e-05 milliseconds.
That MyBag add zipped by in 0.000334 milliseconds.
That MyBag add zipped by in 8.3e-05 milliseconds.
That MyBag add zipped by in 0.025625 milliseconds.
That MyBag add zipped by in 8.3e-05 milliseconds.
That MyBag add zipped by in 8.4e-05 milliseconds.
That MyBag add zipped by in 4.2e-05 milliseconds.
That MyBag add zipped by in 8.3e-05 milliseconds.
That MyBag add zipped by in 8.3e-05 milliseconds.
That MyBag add zipped by in 4.2e-05 milliseconds.
That MyBag add zipped by in 8.3e-05 milliseconds.
That MyBag add zipped by in 4.1e-05 milliseconds.
That MyBag add zipped by in 8.3e-05 milliseconds.
That MyBag add zipped by in 4.2e-05 milliseconds.
That MyBag add zipped by in 8.3e-05 milliseconds.
That MyBag add zipped by in 4.2e-05 milliseconds.
That MyBag add zipped by in 8.4e-05 milliseconds.
That MyBag add zipped by in 8.3e-05 milliseconds.
That MyBag add zipped by in 8.3e-05 milliseconds.
That MyBag add zipped by in 8.3e-05 milliseconds.
That MyBag add zipped by in 8.4e-05 milliseconds.
That MyBag add zipped by in 0.000125 milliseconds.
That MyBag add zipped by in 0.000125 milliseconds.
That MyBag add zipped by in 4.2e-05 milliseconds.
That MyBag add zipped by in 8.3e-05 milliseconds.
That MyBag add zipped by in 8.3e-05 milliseconds.
That MyBag add zipped by in 8.3e-05 milliseconds.
That MyBag add zipped by in 8.4e-05 milliseconds.
That MyBag add zipped by in 8.3e-05 milliseconds.
That MyBag add zipped by in 8.4e-05 milliseconds.
That MyBag add zipped by in 8.4e-05 milliseconds.
That MyBag add zipped by in 4.2e-05 milliseconds.
That MyBag add zipped by in 4.1e-05 milliseconds.
That MyBag add zipped by in 8.3e-05 milliseconds.
That MyBag add zipped by in 8.3e-05 milliseconds.
That MyBag add zipped by in 0.005333 milliseconds.
That MyBag add zipped by in 4.1e-05 milliseconds.
That MyBag add zipped by in 4.2e-05 milliseconds.
That MyBag add zipped by in 4.2e-05 milliseconds.
That MyBag add zipped by in 4.1e-05 milliseconds.
That MyBag add zipped by in 8.4e-05 milliseconds.
That MyBag add zipped by in 0.000375 milliseconds.
That MyBag add zipped by in 4.2e-05 milliseconds.
That MyBag add zipped by in 4.2e-05 milliseconds.
That MyBag add zipped by in 8.3e-05 milliseconds.
That MyBag add zipped by in 8.3e-05 milliseconds.
That MyBag add zipped by in 8.3e-05 milliseconds.
That MyBag add zipped by in 8.3e-05 milliseconds.
That MyBag add zipped by in 4.2e-05 milliseconds.
That MyBag add zipped by in 4.1e-05 milliseconds.
That MyBag add zipped by in 8.3e-05 milliseconds.
That MyBag add zipped by in 4.2e-05 milliseconds.
That MyBag add zipped by in 4.2e-05 milliseconds.
That MyBag add zipped by in 8.3e-05 milliseconds.
That MyBag add zipped by in 4.1e-05 milliseconds.
That MyBag add zipped by in 8.3e-05 milliseconds.
That MyBag add zipped by in 4.2e-05 milliseconds.
That MyBag add zipped by in 8.4e-05 milliseconds.
That MyBag add zipped by in 4.2e-05 milliseconds.
That MyBag add zipped by in 4.2e-05 milliseconds.
That MyBag add zipped by in 8.3e-05 milliseconds.
That MyBag add zipped by in 8.4e-05 milliseconds.
That MyBag add zipped by in 4.2e-05 milliseconds.
That MyBag add zipped by in 4.1e-05 milliseconds.
That MyBag add zipped by in 4.1e-05 milliseconds.
That MyBag add zipped by in 4.2e-05 milliseconds.
That MyBag add zipped by in 8.3e-05 milliseconds.
That MyBag add zipped by in 4.2e-05 milliseconds.
That MyBag add zipped by in 8.4e-05 milliseconds.
That MyBag add zipped by in 8.3e-05 milliseconds.
That MyBag add zipped by in 4.2e-05 milliseconds.
That MyBag add zipped by in 4.1e-05 milliseconds.
That MyBag frequency of zipped by in 0.014 milliseconds.
That MyBag frequency of zipped by in 0.012917 milliseconds.
That MyBag frequency of zipped by in 0.013375 milliseconds.
That MyBag frequency of zipped by in 0.015042 milliseconds.
That MyBag frequency of zipped by in 0.014084 milliseconds.
That MyBag frequency of zipped by in 0.013666 milliseconds.
That MyBag frequency of zipped by in 0.013583 milliseconds.
That MyBag frequency of zipped by in 0.014959 milliseconds.
That MyBag frequency of zipped by in 0.01425 milliseconds.
That MyBag frequency of zipped by in 0.013917 milliseconds.
That MyBag frequency of zipped by in 0.01325 milliseconds.
That MyBag removal of all zipped by in 0.013084 milliseconds.
That MyBag removal of all zipped by in 0.014125 milliseconds.
That MyBag removal of all zipped by in 0.012 milliseconds.
That MyBag removal of all zipped by in 0.011083 milliseconds.
That MyBag removal of all zipped by in 0.010917 milliseconds.
That MyBag removal of all zipped by in 0.007167 milliseconds.
That MyBag removal of all zipped by in 0.005667 milliseconds.
That MyBag removal of all zipped by in 0.005 milliseconds.
That MyBag removal of all zipped by in 0.003875 milliseconds.
That MyBag removal of all zipped by in 0.002417 milliseconds.
That MyBag removal of all zipped by in 0.001334 milliseconds.
That MyBag add zipped by in 4.1e-05 milliseconds.
That MyBag removal of all zipped by in 0.011 milliseconds.





*/



int main(){
    MyBag_String newBag = MyBag_String(3);
    newBag.unitTest();

}



//GOOD
MyBag_String::MyBag_String(int sz) {
    numInBag = 0;
        if (sz < 16) {
        sz = 16;
    }
    numAllocated = sz;
    bagStrings = new string[numAllocated];
}


//GOOD
MyBag_String::MyBag_String(const MyBag_String &oldB) {
    numInBag = oldB.numInBag;
    numAllocated = oldB.numAllocated;
    bagStrings = new string[numAllocated];
    for (int i = 0; i < numInBag; i++) {
        bagStrings[i] = oldB.bagStrings[i];
    }
}

//GOOD
MyBag_String MyBag_String::operator=(const MyBag_String& srcB) {
    numInBag = srcB.numInBag;
    numAllocated = srcB.numAllocated;
    bagStrings = new string[numAllocated];
    for (int i = 0; i < numInBag; i++) {
        bagStrings[i] = srcB.bagStrings[i];
    }
    return *this;
}

//GOOD
MyBag_String::~MyBag_String() {
    delete [] bagStrings;
}

//GOOD
int MyBag_String::getCurrentSize() {
    return numInBag;
}

//GOOD
bool MyBag_String::isEmpty() {
    return (numInBag == 0);
}

//MAKE SORTED
void MyBag_String::add(string s) {
    high_resolution_clock::time_point startTime = high_resolution_clock::now();

    if ((numInBag+1) >= numAllocated) {
        numAllocated *= 2;
        string *oldStrings = bagStrings;
        bagStrings = new string[numAllocated];
        for (int i = 0; i < numInBag; i++){
            bagStrings[i] = oldStrings[i];
        }
        delete [] oldStrings;
    }
    bagStrings[numInBag] = s;
    numInBag++;
    high_resolution_clock::time_point stopTime = high_resolution_clock::now();
    duration<double, std::milli> timeTaken = (stopTime - startTime);
    cout << "That MyBag add zipped by in " << timeTaken.count() << " milliseconds.\n";
}

//BINARY SEARCH
bool MyBag_String::contains(string s) {
    for (int i = 0; i < numInBag; i++) {
        if (s.compare(bagStrings[i]) == 0) {
            return true;
        }
    }
    return false;
}

//GOOD
string MyBag_String::getByIndex(int index) {
    if ((index < 0) || (index >= numInBag)) {
        return "ERROR: index out of bounds";
    }
    return bagStrings[index];
}

//BINARY SEARCH
int MyBag_String::getFrequencyOf(string s) {
    high_resolution_clock::time_point startTime = high_resolution_clock::now();
    int count = 0;
    for (int i = 0; i < numInBag; i++) {
        if (s.compare(bagStrings[i]) == 0) {
            count++;
        }
    }
    high_resolution_clock::time_point stopTime = high_resolution_clock::now();
    duration<double, std::milli> timeTaken = (stopTime - startTime);
    cout << "That MyBag frequency of zipped by in " << timeTaken.count() << " milliseconds.\n";
    return count;
}

//BINARY SEARCH
bool MyBag_String::remove(string s) {
    high_resolution_clock::time_point startTime = high_resolution_clock::now();
    int i = 0;
    while (i < numInBag) {
        if (s.compare(bagStrings[i]) == 0) {
            for (int j = i + 1; j < numInBag; j++) {
                bagStrings[j-1] = bagStrings[j];
            }
            numInBag--;
            high_resolution_clock::time_point stopTime = high_resolution_clock::now();
            duration<double, std::milli> timeTaken = (stopTime - startTime);
            cout << "That MyBag removal zipped by in " << timeTaken.count() << " milliseconds.\n";
            return true;
        }
        i++;
    }
    high_resolution_clock::time_point stopTime = high_resolution_clock::now();
    duration<double, std::milli> timeTaken = (stopTime - startTime);
    cout << "That MyBag removal zipped by in " << timeTaken.count() << " milliseconds.\n";
    return false;
}


//BINARY SEARCH
int MyBag_String::removeAll(string s) {
    high_resolution_clock::time_point startTime = high_resolution_clock::now();
    int numRemoved = 0;
    int i = 0;
    while ((i < numInBag) && (s.compare(bagStrings[i]) != 0)) {
        i++;
    }
    if (i < numInBag) {
        int numRemoved = 1;
        int j = i;
        i++;
    while (i < numInBag) {
        if (s.compare(bagStrings[i]) != 0) {
            bagStrings[j] = bagStrings[i];
            j++;
            i++;
        }
        else {
            numRemoved++;
            i++;
        }
    }
    numInBag = j;
    high_resolution_clock::time_point stopTime = high_resolution_clock::now();
    duration<double, std::milli> timeTaken = (stopTime - startTime);
    cout << "That MyBag removal of all zipped by in " << timeTaken.count() << " milliseconds.\n";
    return numRemoved;
    }
    else {
    high_resolution_clock::time_point stopTime = high_resolution_clock::now();
    duration<double, std::milli> timeTaken = (stopTime - startTime);
    cout << "That MyBag removal of all zipped by in " << timeTaken.count() << " milliseconds.\n";
    return 0;
    }
}

//GOOD
void MyBag_String::showBagContents() {
    high_resolution_clock::time_point startTime = high_resolution_clock::now();
    cout << "Current size is " << getCurrentSize() << endl;
    for (int i = 0; i < getCurrentSize(); i++) {
        cout << i << " " << getByIndex(i) << endl;
    }
    high_resolution_clock::time_point stopTime = high_resolution_clock::now();
    duration<double, std::milli> timeTaken = (stopTime - startTime);
    cout << "That MyBag show all zipped by in " << timeTaken.count() << " milliseconds.\n";
}




bool MyBag_String::doTest() {
    MyBag_String myBag1;
    MyBag_String myBag2(20);
    string simpleNumbers[10] = { "zero", "one", "two", "three", "four", "five",
    "six", "seven", "eight", "nine"};
    srand(time(0));
    if ((myBag1.getCurrentSize() != 0) || (myBag2.getCurrentSize() != 0)) {
        cerr << "myBag1 or myBag2 not initially size 0" << endl;
        return false;
    }
    if ((!myBag1.isEmpty()) || (!myBag2.isEmpty())) {
        cerr << "myBag1 or myBag2 not initially empty" << endl;
        return false;
    }
    myBag1.add("first string");
    myBag2.add("second string");
    if ((myBag1.getCurrentSize() != 1) || (myBag2.getCurrentSize() != 1)) {
        cerr << "myBag1 or myBag2 not size 1 after initial insert" << endl;
        return false;
    }
    if ((myBag1.isEmpty()) || (myBag2.isEmpty())) {
        cerr << "myBag1 or myBag2 empty after initial insert" << endl;
        return false;
    }
    myBag1.add("third string");
    myBag2.add("fourth string");
    if ((myBag1.getCurrentSize() != 2) || (myBag2.getCurrentSize() != 2)) {
        cerr << "myBag1 or myBag2 not size 2 after second insert" << endl;
        return false;
    }
    if ((myBag1.isEmpty()) || (myBag2.isEmpty())) {
        cerr << "myBag1 or myBag2 empty after second insert" << endl;
        return false;
    }
    if (!myBag1.contains("first string") || myBag1.contains("second string") ||
    !myBag1.contains("third string") || myBag1.contains("fourth string")) {
        cerr << "problem with contains on myBag1" << endl;
        return false;
    }
    if (myBag2.contains("first string") || !myBag2.contains("second string") ||
    myBag2.contains("third string") || !myBag2.contains("fourth string")) {
        cerr << "problem with contains on myBag2" << endl;
        return false;
    }
    if (!myBag1.remove("first string") || myBag1.remove("second string") || !
    myBag1.remove("third string") || myBag1.remove("fourth string")) {
        cerr << "problem with remove on myBag1" << endl;
        return false;
    }
    if (myBag2.remove("first string") || !myBag2.remove("second string") ||
    myBag2.remove("third string") || !myBag2.remove("fourth string")) {
        cerr << "problem with remove on myBag2" << endl;
        return false;
    }
    if ((!myBag1.isEmpty()) || (!myBag2.isEmpty())) {
        cerr << "myBag1 or myBag2 not empty after removes" << endl;
        return false;
    }
    for (int i = 0; i < 100; i++) {
        myBag1.add(simpleNumbers[i%10]);
        if (myBag1.getCurrentSize() != (i+1)) {
            cerr << "problem with add at index " << i << endl;
            return false;
        }
    }
    for (int i = 0; i < 100; i++) {
        if (simpleNumbers[i%10].compare(myBag1.getByIndex(i)) != 0) {
            cerr << "problem with getByIndex at index " << i << endl;
            return false;
        }
    }
    if (myBag1.getByIndex(-1).compare("ERROR: index out of bounds") != 0) {
        cerr << "problem with getByIndex at index -1" << endl;
        return false;
    }
    if (myBag1.getByIndex(myBag1.getCurrentSize()).compare("ERROR: index out of bounds") != 0) {
        cerr << "problem with getByIndex at index -1" << endl;
        return false;
    }
    for (int i = 0; i < 10; i++) {
        if (myBag1.getFrequencyOf(simpleNumbers[i]) != 10) {
            cerr << "problem with getFrequencyOf at index " << i << endl;
            return false;
        }
    }
    if (myBag1.getFrequencyOf("not a number") != 0) {
        cerr << "problem with getFrequencyOf of non existent string" << endl;
        return false;
    }
    if (myBag1.removeAll("not in Bag") != 0) {
        cerr << "wrong number reported for removal that gets no strings" <<
        endl;
        return false;
    }
    MyBag_String myBag3;
    myBag2 = myBag1;
    myBag3 = myBag1;
    for (int i = 0; i < 10; i++) {
        if (myBag1.removeAll(simpleNumbers[i]) != 10) {
            cerr << "Incorrect number reported for removal of string " <<
            simpleNumbers[i] << endl;
            return false;
        }
        if (myBag1.getCurrentSize() != (100 - ((i+1)*10))) {
            cerr << "Incorrect size reported after removal of string " <<
            simpleNumbers[i] << endl;
            return false;
        }
        // showBagContents(myBag1);
    }

    //TESTING CONTAINS AND REMOVE ALL

    myBag2.add("twenty");
    if (!myBag2.contains("twenty")){
        cerr << "Incorrect contains function";
        return false;
    }
    myBag2.removeAll("twenty");
    if (myBag2.contains("twenty")){
        cerr << "Incorrect remove all function";
        return false;
    }



    return true;
}

void MyBag_String::unitTest() {
    if (MyBag_String::doTest()) {
        cout << "No test issues reported" << endl;
    }
}