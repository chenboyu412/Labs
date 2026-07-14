#include <iostream>
#include <exception>
#include <vector>
#include <stdexcept>
#include "InvalidDurationException.h"
using namespace std;

int fetchTrackDuration(int trackId){
    if(trackId < 0){
    // Throw an invalid_argument exception if the track ID is negative
        throw invalid_argument("Track ID cannot be negative!");
    }

    if (trackId == 999){
    // Throw an InvalidDurationException if the track duration is equal to 999
        throw InvalidDurationException("Corrupted stream: Track duration is negative!");
    }
        
    return 190;//return a reasonable duration value
}

int main(){

    vector<int>IDs = {-5, 412, 999, 0};//std::vector<int> queue containing multiple IDs

    for(size_t i = 0 ; i < IDs.size() ; i++){//loop to process each track one by one

        try{
            fetchTrackDuration(IDs[i]);
        }

        catch(const exception& e ){
        //implement polymorphic catching by catching the exceptions via const reference to the base class
            cout << e.what();//call .what() to print the error messages
            cout << endl;
        }
    }
}
