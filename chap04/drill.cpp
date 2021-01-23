#include "../std_lib_facilities.h"

bool is_legal_unit(string unit) {
    return (unit == "cm" || unit == "m" || unit == "in" || unit == "ft");
}

double convert_to_meter(double num, string unit) {
    constexpr double m_per_cm = 0.01;
    constexpr double cm_per_inch = 2.54;
    constexpr double inch_per_fit = 12.0;
    double result = 0.0;

    // only four units (cm, in, ft, and m) are accepted for this function.
    if (unit == "cm")
        result = num * m_per_cm;
    else if (unit == "in")
        result = num * m_per_cm * cm_per_inch;
    else if (unit == "ft")
        result = num * m_per_cm * cm_per_inch * inch_per_fit;
    else  // "m"
        result = num;

    return result;
}

void print_vector(vector<double> v) {
    size_t v_size = v.size();

    for (size_t i = 0; i < v_size; i++) {
        if (i == v_size - 1) 
            cout << v[i] << endl;
        else
            cout << v[i] << ' ';
    }
}

int main() {
    double num = 0.0;
    string unit = "";
    double num_meter = 0.0;
    
    double s = 0.0;
    string s_unit = "";
    double s_meter = 0.0;

    double l = 0.0;
    string l_unit = "";
    double l_meter = 0.0;
    
    int cnt = 0;
    double sum = 0.0;
    vector<double> meters;
    
    bool first_read = true;

    // You should put a whitespace between the number and the unit 
    // so you can put the number and the unit into these variables 
    // appropriately.
    cout << "Enter your number with its unit (cm, m, in, or ft)" << endl;
    cout << "e.g. 12 cm, 2 ft, etc. (Note: the spacing is essential)" << endl;
    while (cin >> num >> unit) {
        if (!is_legal_unit(unit)) {
            cout << "The unit '" << unit << "' is illegal." << endl;
            break;
        }
        num_meter = convert_to_meter(num, unit);
        meters.push_back(num_meter);
        sort(meters);

        if (first_read) {  // Initialize the smallest and the largert numbers
            s = num;
            s_unit = unit;
            s_meter = num_meter;

            l = num;
            l_unit = unit;
            l_meter = num_meter;

            first_read = false;
        }

        if (s_meter >= num_meter) {
            s = num;
            s_unit = unit;
            s_meter = num_meter;
        }
        if (l_meter <= num_meter) {
            l = num;
            l_unit = unit;
            l_meter = num_meter;
        }
        cnt += 1;
        sum += num_meter;

        cout << "The smallest value: " << s << " " << s_unit << endl;
        cout << "The largest value: " << l << " " << l_unit << endl;
        cout << "The number of values: " << cnt << endl;
        cout << "The sum of values: " << sum << " m" << endl;
        cout << "The list of all sorted values (Unit: meters)" << endl;
        print_vector(meters);
        cout << endl;
    }
}
