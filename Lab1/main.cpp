#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> scores;
    int n;
    cout << "How many students study in your class? \n ";
    cin >> n; 
    for(int i=0 ; i<n ; i++){
        int score;
        cout << "What is this student score? \n";
        cin >> score;
        scores.push_back(score);
    }
    int sum;
    int highest = 0;
    int lowest = 100;
    double average;
    for(int x : scores){
        if (highest < x){
            highest = x;
        }
        if (lowest > x){
            lowest = x;
        }
        sum += x;
        average = sum/n;
    }
    cout << "The average score of the class is " << average << "\n";
    cout << "The highest score of the class is " << highest << "\n";
    cout << "The lowest score of the class is " << lowest << "\n";
    return 0;
}