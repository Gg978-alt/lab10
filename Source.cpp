#include <iostream>
using namespace std;

// ======= Завдання 1 (Proc), варіант 75 =======
void ShiftRight3(int& A, int& B, int& C) {
    int temp = C;
    C = B;
    B = A;
    A = temp;
}

// ======= Завдання 2 (Begin), варіант 19 =======
void ConvertInchesToMeters() {
    double L_inch;
    cout << "Введіть довжину в дюймах: ";
    cin >> L_inch;

    double L_meters = L_inch * 2.54 / 100.0;
    cout << "Довжина в метрах: " << L_meters << " м" << endl;
}

// ======= Завдання 3 (Boolean), варіант 21 =======
void CheckHundredsEven() {
    int number;
    cout << "Введіть тризначне число: ";
    cin >> number;

    int hundreds_digit = (number / 100) % 10;
    bool is_even = (hundreds_digit % 2 == 0);

    cout << "Цифра в розряді сотень " << (is_even ? "парна." : "непарна.") << endl;
}

int main() {
    int choice;
    cout << "Виберіть завдання:\n";
    cout << "1 - ShiftRight3 (Proc, варіант 75)\n";
    cout << "2 - Переведення дюймів у метри (Begin, варіант 19)\n";
    cout << "3 - Перевірка парності сотень (Boolean, варіант 21)\n";
    cout << "Ваш вибір: ";
    cin >> choice;

    switch (choice) {
    case 1: {
        int A, B, C;
        cout << "Введіть A, B, C: ";
        cin >> A >> B >> C;
        ShiftRight3(A, B, C);
        cout << "Після зміщення: A=" << A << " B=" << B << " C=" << C << endl;
        break;
    }
    case 2:
        ConvertInchesToMeters();
        break;
    case 3:
        CheckHundredsEven();
        break;
    default:
        cout << "Невірний вибір!" << endl;
    }

    return 0;
}
