#include<iostream>
#include<math.h>
#include<random>
using namespace std;


main(){
    random_device rd;
    mt19937 gen(rd());

    // Define a distribution (e.g., for integers between 1 and 100)
    uniform_int_distribution<int> distribution(1, 100);

    // Generate a random number
    int random = distribution(gen);
    int count=0;
    for(int i=0;i<100;i++){ 
        int n;
        cout<<"enter number = ";
        cin>>n;
        count++;
        if(n==random) {
            cout<<"congrajulation you win you guss right number in = "<<count<<" intretion"<<endl;
            break;
        }
        else if(random<n){
            cout<<"number is less then input"<<endl;
        }
        else{
            cout<<"number is greter then input "<<endl;
        }
    }
}