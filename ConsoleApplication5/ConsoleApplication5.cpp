#include <iostream> 
#include <cmath> 

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int a = 1;
    int b = 1;
    double area, perimeter;
    int radius, length, width;
    cout << "Exit - 0" << endl;
    while (true) {
        cout << "Choose a shape: 1 - Circle, 2 - Rectangle" << endl;
        cin >> a;
        switch (a) {

        case 0:
            return -1;
        }
        switch (b) {
        case 0:
            return -1;

        }
        if (a <= 2) {

            switch (a) {
            case (1): {

                cout << "Enter radius:";
                cin >> radius;
                switch (radius) {
                case 0:
                    return -1;
                }
                cout << "Enter the action number: 1 - area, 2 - perimeter." << endl;
                cin >> b;
                if (b == 1) {
                    area = 3.14 * radius * radius;
                    cout << "area =" << area << endl;

                }
                if (b == 2) {
                    perimeter = 2 * 3.14 * radius;
                    cout << "perimeter =" << perimeter << endl;
                }
                else {
                    cout << "error" << endl;
                }
            }
            case (2): {
                cout << "Enter the action number: 1 - area, 2 - perimeter.";
                cin >> b;
                cout << "Enter the length, then the width." << endl;
                cin >> length >> width;
                switch (width) {
                case 0:
                    return -1;
                }
                switch (length) {
                case 0:
                    return -1;
                }
                if (b == 1) {
                    double area = length * width;
                    cout << "area =" << area << endl;
                }
                if (b == 2) {
                    double perimeter = 2 * (length + width);
                    cout << "perimeter =" << perimeter << endl;
                }
                else {
                    cout << "error" << endl;
                }
            }
            }
        }
        else {
            cout << "Choose a shape: 1 - Circle, 2 - Rectangle" << endl;
            cin >> a;
        }

    }

    return 0;
}
