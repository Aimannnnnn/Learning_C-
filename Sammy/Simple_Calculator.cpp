  #include <iostream>
  using namespace std;
  
  void lol () {
    cout << "lol";
}

  int main () {
    int num1, num2, addType;
    double sum;
    cout << "Type a number: ";
    cin >> num1;
    cout << "Type a second number: ";
    cin >> num2;
    cout << "Do you want to 1. add, 2. subtract, 3. divide or 4. multiply: ";
    cin >> addType;
    if (addType == 1) {
        sum = num1 + num2;
    }
    else if (addType == 2) {
        sum = num1 - num2;
    }

    else if (addType == 3) {
        sum = num1 / num2;
    }
    else if (addType == 4) {
        sum = num1 * num2;
    }
    lol();
    cout << "Your total is: " << sum << endl;
  return 0;
}