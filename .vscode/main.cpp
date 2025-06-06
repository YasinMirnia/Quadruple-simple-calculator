#include <iostream>
using namespace std;

int main() {
    int choose, answer, cntr;
    int numbers;
    char oprator;
    cout << "Welcome to our calculator!" << endl;
    cout << "1. + & - & * & /" << endl;
    cout << "2. Calculate BMI" << endl;
    cout << "3. Temperature Converter" << endl;
    cout << "4. Convert Age to Month & Week & Day\n" << endl;
    cin >> choose;

    if (choose == 1) {
        cout << " Caclculator \n" << endl;
        cout << "First tell me how much numbers do you want to enter?\n" << endl;
        cin >> cntr;
        if (cntr == 1) {
            cout << "More than 1 number";
            return 0;
        }
        
        cout << "Enter Oprator what do u want to do with Numbers? (+ & - & * & /)\n" << endl;
        cin >> oprator;
        
        cout << "Enter the first number: \n" << endl;
        cin >> answer;
        for (int i = 2; i <= cntr ; i++){
            cout << "Enter number" << i << "\n" << endl;
            cin >> numbers;
            
            switch (oprator) {
                case '+':
                answer += numbers;
                break;
                case '-':
                answer -= numbers;
                break;
                case '*':
                answer *= numbers;
                break;
                case '/':
                if (numbers != 0){
                    answer -= numbers;
                    break;
                } else {
                    cout << "Can't taghsim On 0" << endl;
                    return 0;
                }
                default: 
                cout << "Ivalid action!" << endl;
                return 0;
            } 
        }
        cout << "Result is:" << answer;
    } else if (choose == 2) {
        cout << " Calculate BMI \n" << endl; 
        float weight, height, bmi;
        cout << "Enter Your Weight (kg) | Ex: 55\n" << endl;
        cin >> weight;
        cout << "Enter Your Height (m) | Ex: 1.76\n" << endl;
        cin >> height;
        bmi = (weight) / (height * height);
        cout << "Your BMI is: " << bmi << endl;
        if (bmi < 18.5) {
            cout << "Kambood Vazn" << endl;
        } else if (bmi >= 18.5 && bmi < 25) {
            cout << "Standard" << endl;
        } else if (bmi >= 25 && bmi < 30) {
            cout << "OverWight" << endl;
        } else {
            cout << "Extra OverWight" << endl;
        }
    } else if (choose == 3) {
        cout << " Temperature Converter\n" << endl;
        char baseTemp;
        int temperature, answerTemp;
        cout << "Enter The base you want to Convert: (C or F)" << endl;
        cin >> baseTemp;
        cout << "Enter the Temprature Based on "<< "(" << baseTemp << ")" << endl;
        cin >> temperature;

        if (baseTemp == 'c' || baseTemp == 'C') {
            answerTemp = (temperature * 18) + 32;
            cout << "Your base temprature " << temperature << baseTemp << "'" << endl;
            cout << "So its "<< answerTemp << "Farenheight" << endl;
        } else if (baseTemp == 'f' || baseTemp == 'F') {
            answerTemp = (temperature - 32) / 1.8;
            cout << "Your base temprature " << temperature << baseTemp << "'" << endl;
            cout << "So its "<< answerTemp << "Canti Grade" << endl;
        } else {
            cout << "Invalid Value.";
        } 
    } else if (choose == 4) {

    } else {
        cout << "Invalid Choice!" << endl;
    }
}