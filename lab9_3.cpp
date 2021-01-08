#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    double i,mean,sd,sum,sum1;
    sum=0;
    sum1=0;
    i=1;
    ifstream score;
    string tam;
    score.open("score.txt");
    while(getline(score,tam)){
        sum += stod(tam);
        sum1 += pow(stod(tam),2);
        i++;
    }
    
    cout << "Number of data = " << i-1 << endl;
    mean = sum/(i-1);
    cout << "Mean = " << setprecision(3) << mean << endl;
    sd = sqrt(((1/(i-1))*sum1)-pow(mean,2));
    cout << "Standard deviation = " << sd;
}