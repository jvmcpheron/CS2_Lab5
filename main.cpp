using namespace std;
using namespace std::chrono;

//
// Created by Richard Maclin on 9/9/23.
//
#include <MyBag_String.h>
#include <iostream>

MyBag_String::MyBag_String(int sz) {
    numInBag = 0;
        if (sz < 16) {
        sz = 16;
    }
    numAllocated = sz;
    bagStrings = new string[numAllocated];
}

MyBag_String::MyBag_String(const MyBag_String &oldB) {
    numInBag = oldB.numInBag;
    numAllocated = oldB.numAllocated;
    bagStrings = new string[numAllocated];
    for (int i = 0; i < numInBag; i++) {
        bagStrings[i] = oldB.bagStrings[i];
    }
}
MyBag_String MyBag_String::operator=(const MyBag_String& srcB) {
    numInBag = srcB.numInBag;
    numAllocated = srcB.numAllocated;
    bagStrings = new string[numAllocated];
    for (int i = 0; i < numInBag; i++) {
        bagStrings[i] = srcB.bagStrings[i];
    }
    return *this;
}

MyBag_String::~MyBag_String() {
    delete [] bagStrings;
}
int MyBag_String::getCurrentSize() {
    return numInBag;
}
bool MyBag_String::isEmpty() {
    return (numInBag == 0);
}

void MyBag_String::add(string s) {
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
}
bool MyBag_String::contains(string s) {
    for (int i = 0; i < numInBag; i++) {
        if (s.compare(bagStrings[i]) == 0) {
            return true;
        }
    }
    return false;
}
string MyBag_String::getByIndex(int index) {
    if ((index < 0) || (index >= numInBag)) {
        return "ERROR: index out of bounds";
    }
    return bagStrings[index];
}
int MyBag_String::getFrequencyOf(string s) {
    int count = 0;
    for (int i = 0; i < numInBag; i++) {
        if (s.compare(bagStrings[i]) == 0) {
            count++;
        }
    }
return count;
}
bool MyBag_String::remove(string s) {
    int i = 0;
    while (i < numInBag) {
        if (s.compare(bagStrings[i]) == 0) {
            for (int j = i + 1; j < numInBag; j++) {
                bagStrings[j-1] = bagStrings[j];
            }
            numInBag--;
            return true;
        }
        i++;
    }
    return false;
}
int MyBag_String::removeAll(string s) {
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
    return numRemoved;
    }
    else {
    return 0;
    }
}
void MyBag_String::showBagContents() {
    cout << "Current size is " << getCurrentSize() << endl;
    for (int i = 0; i < getCurrentSize(); i++) {
        cout << i << " " << getByIndex(i) << endl;
    }
}




int main(){



}