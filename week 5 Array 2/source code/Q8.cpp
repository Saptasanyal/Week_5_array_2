// Find the error.
// double getAverage(int arr[], int size);
// int main () {
// int balance[5] = {1000, 2, 3, 17, 50};
// double avg;
// avg = getAverage( balance[0], 5 ) ;
// cout << "Average value is: " << avg << endl;
// return 0;
// }
//sol: instead of passing the entire array we are just passing the index 0 value of 
//balance, so if we write avg= getAverage(balance,5); it will fix the error.