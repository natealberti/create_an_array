//author: Nate alberti
//date: september 2021
//purpose: this program utilizes methods to calculate the volume of a ring
//based on input gathered from the console.

#include <iostream>
#include <cmath>
using namespace std;

void introduction();
void get_parameters(int &ring_radius, int &cross_section_radius);
double calculate_value(int ring_radius, int cross_section_radius);
void display_results(double volume);

int main() {
    int ring_radius, cross_section_radius;

    introduction();
    get_parameters(ring_radius, cross_section_radius);
    double volume = calculate_value(ring_radius, cross_section_radius);
    display_results(volume);

    return 0;
}

void introduction() {
    cout << "Compute Ring Volume" << endl << endl;
}

void get_parameters(int &ring_radius, int &cross_section_radius) {
    do {
        cout << "Please enter the ring radius, in inches (positive integer): ";
        cin >> ring_radius;
        cout << endl;
    } while(ring_radius < 0);

    do {
        cout << "Please enter the cross section radius, in inches (positive integer): ";
        cin >> cross_section_radius;
        cout << endl;
    } while(cross_section_radius < 0);
}

double calculate_value(int ring_radius, int cross_section_radius) {
    double PI = 3.14159;
    return 2*pow(PI, 2)*ring_radius*pow(cross_section_radius, 2);
}

void display_results(double volume) {
    cout << endl;
    cout << "The ring has a volume of " + to_string(volume) + " cubic inches.";
}