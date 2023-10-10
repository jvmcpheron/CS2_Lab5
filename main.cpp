

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

TESTS AFTER SORTING AND INCOORPERATING BINARY SEARCH
jvmcpheron@dyn-10-140-246-187 CS2_Lab5 % ./main
That MyBag add zipped by in 0.000667 milliseconds.
That MyBag add zipped by in 0.000209 milliseconds.
That MyBag add zipped by in 0.00075 milliseconds.
That MyBag add zipped by in 0.0005 milliseconds.
That MyBag add zipped by in 0.000167 milliseconds.
That MyBag add zipped by in 0.0005 milliseconds.
That MyBag add zipped by in 0.000833 milliseconds.
That MyBag add zipped by in 0.0015 milliseconds.
That MyBag add zipped by in 0.002 milliseconds.
That MyBag add zipped by in 0.0025 milliseconds.
That MyBag add zipped by in 0.003542 milliseconds.
That MyBag add zipped by in 0.004125 milliseconds.
That MyBag add zipped by in 0.006208 milliseconds.
That MyBag add zipped by in 0.005375 milliseconds.
That MyBag add zipped by in 0.003833 milliseconds.
That MyBag add zipped by in 0.007167 milliseconds.
That MyBag add zipped by in 0.005125 milliseconds.
That MyBag add zipped by in 0.006041 milliseconds.
That MyBag add zipped by in 0.010125 milliseconds.
That MyBag add zipped by in 0.014792 milliseconds.
That MyBag add zipped by in 0.006709 milliseconds.
That MyBag add zipped by in 0.012167 milliseconds.
That MyBag add zipped by in 0.019625 milliseconds.
That MyBag add zipped by in 0.01325 milliseconds.
That MyBag add zipped by in 0.006458 milliseconds.
That MyBag add zipped by in 0.015792 milliseconds.
That MyBag add zipped by in 0.008042 milliseconds.
That MyBag add zipped by in 0.009375 milliseconds.
That MyBag add zipped by in 0.01975 milliseconds.
That MyBag add zipped by in 0.024084 milliseconds.
That MyBag add zipped by in 0.010375 milliseconds.
That MyBag add zipped by in 0.012 milliseconds.
That MyBag add zipped by in 0.0335 milliseconds.
That MyBag add zipped by in 0.022334 milliseconds.
That MyBag add zipped by in 0.00925 milliseconds.
That MyBag add zipped by in 0.026167 milliseconds.
That MyBag add zipped by in 0.011125 milliseconds.
That MyBag add zipped by in 0.012834 milliseconds.
That MyBag add zipped by in 0.029667 milliseconds.
That MyBag add zipped by in 0.032583 milliseconds.
That MyBag add zipped by in 0.013667 milliseconds.
That MyBag add zipped by in 0.015541 milliseconds.
That MyBag add zipped by in 0.044917 milliseconds.
That MyBag add zipped by in 0.033667 milliseconds.
That MyBag add zipped by in 0.012167 milliseconds.
That MyBag add zipped by in 0.031208 milliseconds.
That MyBag add zipped by in 0.013875 milliseconds.
That MyBag add zipped by in 0.015709 milliseconds.
That MyBag add zipped by in 0.038625 milliseconds.
That MyBag add zipped by in 0.04425 milliseconds.
That MyBag add zipped by in 0.016792 milliseconds.
That MyBag add zipped by in 0.019 milliseconds.
That MyBag add zipped by in 0.055083 milliseconds.
That MyBag add zipped by in 0.040792 milliseconds.
That MyBag add zipped by in 0.014792 milliseconds.
That MyBag add zipped by in 0.0405 milliseconds.
That MyBag add zipped by in 0.016834 milliseconds.
That MyBag add zipped by in 0.018834 milliseconds.
That MyBag add zipped by in 0.049875 milliseconds.
That MyBag add zipped by in 0.056625 milliseconds.
That MyBag add zipped by in 0.02 milliseconds.
That MyBag add zipped by in 0.022416 milliseconds.
That MyBag add zipped by in 0.064375 milliseconds.
That MyBag add zipped by in 0.047958 milliseconds.
That MyBag add zipped by in 0.017375 milliseconds.
That MyBag add zipped by in 0.048041 milliseconds.
That MyBag add zipped by in 0.019791 milliseconds.
That MyBag add zipped by in 0.027125 milliseconds.
That MyBag add zipped by in 0.059959 milliseconds.
That MyBag add zipped by in 0.067667 milliseconds.
That MyBag add zipped by in 0.025458 milliseconds.
That MyBag add zipped by in 0.025875 milliseconds.
That MyBag add zipped by in 0.075375 milliseconds.
That MyBag add zipped by in 0.056833 milliseconds.
That MyBag add zipped by in 0.020042 milliseconds.
That MyBag add zipped by in 0.056625 milliseconds.
That MyBag add zipped by in 0.0225 milliseconds.
That MyBag add zipped by in 0.024833 milliseconds.
That MyBag add zipped by in 0.068292 milliseconds.
That MyBag add zipped by in 0.08 milliseconds.
That MyBag add zipped by in 0.026459 milliseconds.
That MyBag add zipped by in 0.029083 milliseconds.
That MyBag add zipped by in 0.085667 milliseconds.
That MyBag add zipped by in 0.066833 milliseconds.
That MyBag add zipped by in 0.022458 milliseconds.
That MyBag add zipped by in 0.062625 milliseconds.
That MyBag add zipped by in 0.025125 milliseconds.
That MyBag add zipped by in 0.027625 milliseconds.
That MyBag add zipped by in 0.07775 milliseconds.
That MyBag add zipped by in 0.087916 milliseconds.
That MyBag add zipped by in 0.029667 milliseconds.
That MyBag add zipped by in 0.032667 milliseconds.
That MyBag add zipped by in 0.094459 milliseconds.
That MyBag add zipped by in 0.073666 milliseconds.
That MyBag add zipped by in 0.025375 milliseconds.
That MyBag add zipped by in 0.068584 milliseconds.
That MyBag add zipped by in 0.028042 milliseconds.
That MyBag add zipped by in 0.030583 milliseconds.
That MyBag add zipped by in 0.085625 milliseconds.
That MyBag add zipped by in 0.096583 milliseconds.
That MyBag add zipped by in 0.032708 milliseconds.
That MyBag add zipped by in 0.035542 milliseconds.
That MyBag add zipped by in 0.10375 milliseconds.
That MyBag add zipped by in 0.0805 milliseconds.





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

//GOOD
void MyBag_String::add(string s) {
    high_resolution_clock::time_point startTime = high_resolution_clock::now();

    if ((numInBag + 1) >= numAllocated) {
        numAllocated *= 2;
        string* oldStrings = bagStrings;
        bagStrings = new string[numAllocated];
        for (int i = 0; i < numInBag; i++) {
            bagStrings[i] = oldStrings[i];
        }
        delete[] oldStrings;
    }
    bagStrings[numInBag] = s;
    numInBag++;

    // Sort the bagStrings array in alphabetical order
    sort(bagStrings, bagStrings + numInBag);

    high_resolution_clock::time_point stopTime = high_resolution_clock::now();
    duration<double, std::milli> timeTaken = (stopTime - startTime);
    cout << "That MyBag add zipped by in " << timeTaken.count() << " milliseconds.\n";
}


//GOOD
bool MyBag_String::contains(string s) {


    int left = 0;
    int right = numInBag - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        int cmp = s.compare(bagStrings[mid]);

        if (cmp == 0) {
            return true; 
        } else if (cmp < 0) {
            right = mid - 1;  
        } else {
            left = mid + 1;  
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

//GOOD
int MyBag_String::getFrequencyOf(string s) {


    int left = 0;
    int right = numInBag - 1;
    int count = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        int cmp = s.compare(bagStrings[mid]);

        if (cmp == 0) {
            // String found; increment the count
            count++;

            // Check for other occurrences to the left
            int i = mid - 1;
            while (i >= 0 && s.compare(bagStrings[i]) == 0) {
                count++;
                i--;
            }

            // Check for other occurrences to the right
            i = mid + 1;
            while (i < numInBag && s.compare(bagStrings[i]) == 0) {
                count++;
                i++;
            }

            return count;
        } else if (cmp < 0) {
            right = mid - 1;  
        } else {
            left = mid + 1;  
        }
    }

    return count;  // String not found
}


//GOOD
bool MyBag_String::remove(string s) {

    int left = 0;
    int right = numInBag - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        int cmp = s.compare(bagStrings[mid]);

        if (cmp == 0) {
            // String found at index mid; remove it efficiently
            for (int i = mid; i < numInBag - 1; i++) {
                bagStrings[i] = bagStrings[i + 1];
            }
            numInBag--;
            return true;
        } else if (cmp < 0) {
            right = mid - 1;  
        } else {
            left = mid + 1;  
        }
    }

    return false;  // String not found
}



//GOOD
int MyBag_String::removeAll(string s) {
    // Ensure that bagStrings is sorted in alphabetical order
    sort(bagStrings, bagStrings + numInBag);

    int left = 0;
    int right = numInBag - 1;
    int numRemoved = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        int cmp = s.compare(bagStrings[mid]);

        if (cmp == 0) {
            // String found at index mid; remove all occurrences efficiently
            int j = mid;
            while (j < numInBag - 1 && s.compare(bagStrings[j + 1]) == 0) {
                j++;
            }

            // Shift elements to remove all occurrences
            for (int i = j + 1; i < numInBag; i++) {
                bagStrings[i - (j - mid + 1)] = bagStrings[i];
            }

            numInBag -= (j - mid + 1);
            numRemoved += (j - mid + 1);

            // Update search range for binary search
            right -= (j - mid + 1);
        } else if (cmp < 0) {
            right = mid - 1;  // Search the left half
        } else {
            left = mid + 1;  // Search the right half
        }
    }

    return numRemoved;
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