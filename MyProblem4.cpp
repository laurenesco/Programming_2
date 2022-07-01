//
//  Program Name:     MyProblem3.cpp
//  Last Modified:    07/01/22
//  Modified By:      Lauren Escobedo
//  Program Desc.:    Contents of review problem 4.
//

#include <iostream>

using namespace std;

//funtion declarations
int add(int n);
int mult(int n);

int main()  {
  int n, sum, prod;

  //gather user input
  cout << "n? ";
  cin >> n;
  cout << endl;

  //find values
  sum = add(n);
  prod = mult(n);

  //print results
  cout << "Sum     = " << sum << endl;
  cout << "Product = " << prod << endl;
  return 0;
}

//adding function
int add(int n) {
  int sum = 0;
  for(int i=1; i<=n; i++) {
    sum += i;
  }
  return sum;
}

//multiply function
int mult(int n) {
  int prod = 1;
  for(int i=1; i<=n; i++) {
    prod *= i;
  }
  return prod;
}


//////////////////////////// questions ///////////////////////////////////

// 1. product must equal 0, sum must equal 1.
//
// 2. true, but can be left blank.
//
// 3. sum += i
//
// 4. after the loop terminates the variable is erased.
//
// 5. for(int i=n; i>=n; i--)
