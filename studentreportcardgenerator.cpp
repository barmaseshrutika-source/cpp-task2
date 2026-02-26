
#include <iostream>
using namespace std;

int calculateTotal(int marks[], int n) {
    int total = 0;
    for(int i = 0; i < n; i++) {
        total += marks[i];
    }
    return total;
}


char calculateGrade(float percentage) {
    if(percentage >= 75)
        return 'A';
    else if(percentage >= 60)
        return 'B';
    else if(percentage >= 50)
        return 'C';
    else if(percentage >= 40)
        return 'D';
    else
        return 'F';
}

int main() {
    int n;

    cout << "Enter number of subjects (3 to 5): ";
    cin >> n;

    int marks[n];

    cout << "Enter marks:\n";
    for(int i = 0; i < n; i++) {
        cout << "Subject " << i+1 << ": ";
        cin >> marks[i];
    }

    int total = calculateTotal(marks, n);
    float percentage = total / (float)n;
    char grade = calculateGrade(percentage);

    cout << "\n===== Report Card =====\n";
    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}

