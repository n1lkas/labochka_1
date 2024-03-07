#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

struct Student {
    char fullName[100]; 
    char gender;
    int groupNumber;
    int listNumber;
    float examGrades[3];
    float differentialGrades[5];
};

struct Student person32[] = { {"Belochkina Yana",'w', 3372, 1, {4,4,4}, {4, 5, 3, 4, 5}}, {"Vlasyuk Eduard",'m', 3372, 2, {5,5,5}, {5, 5, 5, 5, 5}},{"Gozhenko Valery",'m', 3372, 3, {3,3,3}, {5, 4, 3, 3, 4}},\
{"Degtyareva Margarita", 'w', 3372, 4, {4,4,3 }, { 4, 5, 3, 4, 5 }}, { "Demidov Dmitry",'m', 3372, 5, {4,5,3}, {4, 5, 3, 4, 5} }, { "Zhukov Ilya",'m', 3372, 6, {3,3,3}, {4, 5, 3, 4, 5} }, \
{"Karpenko Dmitry", 'm', 3372, 7, {5,5,5 }, { 4, 5, 3, 4, 5 }}, { "Kozlov Nikita",'m', 3372, 8, {5,4,4}, {4, 5, 3, 4, 5} }, { "Kozlov Roman",'m', 3372, 9, {5,4,5}, {4, 5, 3, 4, 5} }, \
{"Konstantinov Rodion", 'm', 3372, 10, {5,5,4 }, { 4, 5, 3, 4, 5 }}, { "Markov Grigory",'m', 3372, 11, {4,4,4}, {4, 5, 3, 4, 5} }, { "Mikhailov Nikita",'m', 3372, 12, {3,3,3}, {4, 5, 3, 4, 5} }, \
{"Pavlov Grigory", 'm', 3372, 13, {5,5,5}, { 4, 5, 3, 4, 5 }}, { "Pletneva Irina",'w', 3372, 14, {4,4,4}, {4, 5, 3, 4, 5} }, { "Proshunina Sofia",'w', 3372, 15, {4,3,4}, {4, 5, 3, 4, 5} }, \
{ "Savchuk Rodion", 'm', 3372, 16, {4,5,3}, { 4, 5, 3, 4, 5 } }, { "Svyatoho Vadim",'m', 3372, 17, {3,4,5}, {4, 5, 3, 4, 5} }, { "Semin Vadim",'m', 3372, 18, {4,4,5}, {4, 5, 3, 4, 5} },\
{ "Sudan Shivangi", 'm', 3372, 19, {3,4,3}, { 4, 5, 3, 4, 5 } }, { "Tochiev Salman",'m', 3372, 20, {4,3,4}, {4, 5, 3, 4, 5} }, { "Trubnikova Alena",'w', 3372, 21, {5,4,4}, {4, 5, 3, 4, 5} }, \
{ "Ustinov Lev", 'm', 3372, 22, {4,3,5}, { 4, 5, 3, 4, 5 } }, { "Khadzhikulov Asadbek",'m', 3372, 23, {4,4,4}, {4, 5, 3, 4, 5} }, { "Hanganu Alisa",'w', 3372, 24, {5,5,5}, {4, 5, 3, 4, 5} }, \
{ "Khusnutdinov Ruslan", 'm', 3372, 25, {3,3,4}, { 4, 5, 3, 4, 5 } }, { "Czech Maria",'w', 3372, 26, {4,4,3}, {4, 5, 3, 4, 5} }, { "Shaposhnikov Artyom",'m', 3372, 27, {5,5,5}, {4, 5, 3, 4, 5} }, \
{ "Yablokov Alexey", 'm', 3372, 28, {4,4,5}, { 4, 5, 3, 4, 5 } }, { "Yaskiev Magomed",'m', 3372, 29, {5,5,4}, {4, 5, 3, 4, 5} }, { "Yashkov Arseniy",'m', 3372, 30, {4,4,4}, {4, 5, 3, 4, 5} } };

struct Student person33[] = { {"Altukhov Nikita",'m', 3373, 1, {4,4,4}, {4, 5, 3, 4, 5}}, {"Andrianov Arseniy",'m', 3373, 2, {3,3,3}, {5, 5, 5, 5, 5}},{"Belskaya Veronica",'w', 3373, 3, {5,5,5}, {5,5,5,5,5}},\
{"Bugrov Saveliy", 'm', 3373, 4, {4,4,3 }, { 4, 5, 3, 4, 5 }}, { "Voronina Svetlana",'w', 3373, 5, {4,5,3}, {4, 5, 3, 4, 5} }, { "Gladkikh Oleg",'m', 3373, 6, {3,3,3}, {4, 5, 3, 4, 5} }, \
{"Golubev Pavel", 'm', 3373, 7, {5,5,5 }, { 4, 5, 3, 4, 5 }}, { "Gusarov Nikita",'m', 3373, 8, {5,4,4}, {4, 5, 3, 4, 5} }, { "Dvorkin Maxim",'m', 3373, 9, {5,4,5}, {4, 5, 3, 4, 5} }, \
{"Long Alexey", 'm', 3373, 10, {5,5,4 }, { 4, 5, 3, 4, 5 }}, { "Druzhkov Vladimir",'m', 3373, 11, {4,4,4}, {4, 5, 3, 4, 5} }, { "Elistratov Vsevolod",'m', 3373, 12, {3,3,3}, {4, 5, 3, 4, 5} }, \
{"Zhurukhin Nikita", 'm', 3373, 13, {5,5,5}, { 4, 5, 3, 4, 5 }}, { "Zantman Nikita",'m', 3373, 14, {4,4,4}, {4, 5, 3, 4, 5} }, { "Karvosenoya Artem",'m', 3373, 15, {4,3,4}, {4, 5, 3, 4, 5} }, \
{ "Kasatkin Roman", 'm', 3373, 16, { 4,5,3 }, { 4, 5, 3, 4, 5 } }, { "Kasatkina Anastasia",'w', 3373, 17, {5,5,5}, {5,5,5,5,5} }, { "Kislov Alexey",'m', 3373, 18, {4,4,5}, {4, 5, 3, 4, 5} }, \
{ "Kovrizhnykh Alexey", 'm', 3373, 19, {3,4,3}, { 4, 5, 3, 4, 5 } }, { "Kostin Anton",'m', 3373, 20, {4,3,4}, {4, 5, 3, 4, 5} }, { "Krivonosov Makar",'m', 3373, 21, {5,4,4}, {4, 5, 3, 4, 5} }, \
{ "Kropocheva Polina", 'w', 3373, 22, {4,3,5}, { 4, 5, 3, 4, 5 } }, { "Kubasov Dmitry",'m', 3373, 23, {4,4,4}, {4, 5, 3, 4, 5} }, { "Ogorodnikova Vladislava",'w', 3373, 24, {5,5,5}, {4, 5, 3, 4, 5} }, \
{ "Postanogov Dmitry", 'm', 3373, 25, {3,3,4}, { 4, 5, 3, 4, 5 } }, { "Sinitsyna Tatyana",'w', 3373, 26, {4,4,3}, {4, 5, 3, 4, 5} }, { "Chvanov Maxim",'m', 3373, 27, {5,5,5}, {4, 5, 3, 4, 5} }, \
{ "Chistyakov Stepan", 'm', 3373, 28, {4,4,5}, { 4, 5, 3, 4, 5 } }, { "Shatkova Varvara",'w', 3373, 29, {5,5,4}, {4, 5, 3, 4, 5} } };

struct Student person34[] = { {"Borovkov Pavel",'m', 3374, 1, {4,4,4}, {4, 5, 3, 4, 5}}, {"Demyanchuk Yaroslav",'m', 3374, 2, {5,5,5}, {5, 5, 5, 5, 5}},{"Derevenkov Dmitry",'m', 3374, 3, {3,3,3}, {5, 4, 3, 3, 4}},\
{"Dubenetsky Nikita", 'm', 3374, 4, {4,4,3 }, { 4, 5, 3, 4, 5 }}, { "Ivankov Kirill",'m', 3374, 5, {4,5,3}, {4, 5, 3, 4, 5} }, { "Ilyashenko Philip",'m', 3374, 6, {3,3,3}, {4, 5, 3, 4, 5} }, \
{"Kalinyuk Stepan", 'm', 3374, 7, {5,5,5}, {4, 5, 3, 4, 5}}, {"Kashmanova Varvara",'w', 3374, 8, {5,4,4}, {4, 5, 3, 4, 5}}, {"Kornya Igor",'m', 3374, 9, {5,4,5}, {4, 5, 3, 4, 5}}, \
{"Kuznetsov Roman", 'm', 3374, 10, {5,5,4 }, { 4, 5, 3, 4, 5 }}, { "Lysova Ekaterina",'w', 3374, 11, {4,4,4}, {4, 5, 3, 4, 5} }, { "Mehdiev David",'m', 3374, 12, {3,3,3}, {4, 5, 3, 4, 5} }, \
{"Pavlov Alexander", 'm', 3374, 13, {5,5,5}, { 4, 5, 3, 4, 5 }}, { "Porofiev Egor",'m', 3374, 14, {4,4,4}, {4, 5, 3, 4, 5} }, { "Postobaev Mikhail",'m', 3374, 15, {4,3,4}, {4, 5, 3, 4, 5} }, \
{ "Romanov Alexey", 'm', 3374, 16, {4,5,3}, { 4, 5, 3, 4, 5 } }, { "Rybochkin Maxim",'m', 3374, 17, {3,4,5}, {4, 5, 3, 4, 5} }, { "Sapozhnikov Anton",'m', 3374, 18, {4,4,5}, {4, 5, 3, 4, 5} },\
{ "Svitelman Alexandra", 'w', 3374, 19, {3,4,3}, { 4, 5, 3, 4, 5 } }, { "Sedakova Ulyana",'w', 3374, 20, {4,3,4}, {4, 5, 3, 4, 5} }, { "Sulima Daniel",'m', 3374, 21, {5,4,4}, {4, 5, 3, 4, 5} }, \
{ "Turner Irina", 'w', 3374, 22, {4,3,5}, { 4, 5, 3, 4, 5 } }, { "Torokhov Sergey",'m', 3374, 23, {4,4,4}, {4, 5, 3, 4, 5} }, { "Totmin Maxim",'m', 3374, 24, {5,5,5}, {4, 5, 3, 4, 5} }, \
{ "Khomskov Maxim", 'm', 3374, 25, {3,3,4}, { 4, 5, 3, 4, 5 } }, { "Tsvetkov Mikhail",'m', 3374, 26, {4,4,3}, {4, 5, 3, 4, 5} }, { "Shavgeninia Anastasia",'w', 3374, 27, {5,5,5}, {4, 5, 3, 4, 5} }, \
{ "Shestova Polina", 'w', 3374, 28, { 4,4,5 }, { 4, 5, 3, 4, 5 } } };

//idz
struct Volleyball {
    char fullName[100];
    char gender;
    int age;
    char size[3];
    bool volleyballRank;
    int courseNumber;

};

//1.   Создание новой записи о студенте.

bool compareByName( Student& a, Student& b) {
    return strcmp(a.fullName, b.fullName) < 0;
}
bool compareByListNumber( Student& a,  Student& b) {
    return a.listNumber < b.listNumber;
}
void addStudent32(Student person32[], int& studentCount,  Student& newStudent) {
    
    if (studentCount >= 30) {
        cout << "Error: Group is full." << endl;
        return;
    }
        person32[studentCount] = newStudent;
        studentCount++;
        sort(person32, person32 + studentCount, compareByName);

        for (int i = 0; i < studentCount; ++i) {
            person32[i].listNumber = i + 1;
        }
}
void addStudent(Student person33[], int& studentCount,  Student& newStudent) {
    
    if (studentCount> 30) {
        cout << "Error: Group is full." << endl;
        return;
    }
    person33[studentCount] = newStudent;
    studentCount++;
    sort(person33, person33 + studentCount, compareByName);

    for (int i = 0; i < studentCount; ++i) {
        person33[i].listNumber = i + 1;
    }

    sort(person33, person33 + studentCount, compareByListNumber);
}
void updateListNumbers(Student person[], int studentCount) {
    for (int i = 0; i < studentCount; ++i) {
        person[i].listNumber = i + 1;
    }
}

// 2. Функция для изменения записи о студенте
void modifyFullName(Student& student) {
    cout << "Enter the new Full Name: ";
    cin.ignore();
    cin.getline(student.fullName, 100);
}
void modifyGender(Student& student) {
    cout << "Enter the new Gender (M/F): ";
    cin >> student.gender;
}
void modifyExamGrades(Student& student) {
    cout << "Enter the new Exam Grades (3 grades): ";
    for (int i = 0; i < 3; ++i) {
        cin >> student.examGrades[i];
    }
}
void modifyDifferentialGrades( Student& student) {
    cout << "Enter the new Differential Grades (5 grades): ";
    for (int i = 0; i < 5; ++i) {
        cin >> student.differentialGrades[i];
    }
}

//3.   Вывод всех данных о студентах.
void displayGroup( Student person[], int studentCount, int groupNumber) {
    
    cout << "Students in group " << groupNumber << ":" << endl;
    for (int i = 0; i < studentCount; ++i) {
        if (person[i].groupNumber == groupNumber) {
            cout << "Full Name: " << person[i].fullName << endl;
            cout << "Gender: " << person[i].gender << endl;
            cout << "Group Number: " << person[i].groupNumber << endl;
            cout << "List Number in Group: " << person[i].listNumber << endl;
            cout << "Exam Grades: ";
            for (int j = 0; j < 3; ++j) {
                cout << person[i].examGrades[j] << " ";
            }
            cout << endl;
            cout << "Differential Grades: ";
            for (int j = 0; j < 5; ++j) {
                cout << person[i].differentialGrades[j] << " ";
            }
            cout << endl << endl;
        }
    }
}

// 4. Функция для вывода информации обо всех студентах группы N
void printAllStudents() {
    int a;
    cout << "Введите номер группы (3372, 3373, 3374):";
    cin >> a;
    cout << "Данные о студентах:" << endl;
    if (a == 3372) {
        for (int i = 0; i < 30; ++i) {
            cout << "Студент #" << i + 1 << ":" << endl;
            cout << "ФИО: " << person32[i].fullName << endl;
            cout << "Пол: " << person32[i].gender << endl;
            cout << "Номер группы: " << person32[i].groupNumber << endl;
            cout << "Номер в списке группы: " << person32[i].listNumber << endl;
            cout << "Оценки за экзамены: ";
            for (int j = 0; j < 3; ++j) {
                cout << person32[i].examGrades[j] << " ";
            }
            cout << endl;
            cout << "Оценки за дифференцированные зачеты: ";
            for (int j = 0; j < 5; ++j) {
                cout << person32[i].differentialGrades[j] << " ";
            }
        }
    }
    if (a == 3373) {
        for (int i = 0; i < 29; ++i) {
            cout << "Студент #" << i + 1 << ":" << endl;
            cout << "ФИО: " << person33[i].fullName << endl;
            cout << "Пол: " << person33[i].gender << endl;
            cout << "Номер группы: " << person33[i].groupNumber << endl;
            cout << "Номер в списке группы: " << person33[i].listNumber << endl;
            cout << "Оценки за экзамены: ";
            for (int j = 0; j < 3; ++j) {
                cout << person33[i].examGrades[j] << " ";
            }
            cout << endl;
            cout << "Оценки за дифференцированные зачеты: ";
            for (int j = 0; j < 5; ++j) {
                cout << person33[i].differentialGrades[j] << " ";
            }
        }
    }
    if (a == 3374) {
        for (int i = 0; i < 28; ++i) {
            cout << "Студент #" << i + 1 << ":" << endl;
            cout << "ФИО: " << person34[i].fullName << endl;
            cout << "Пол: " << person34[i].gender << endl;
            cout << "Номер группы: " << person34[i].groupNumber << endl;
            cout << "Номер в списке группы: " << person34[i].listNumber << endl;
            cout << "Оценки за экзамены: ";
            for (int j = 0; j < 3; ++j) {
                cout << person34[i].examGrades[j] << " ";
            }
            cout << endl;
            cout << "Оценки за дифференцированные зачеты: ";
            for (int j = 0; j < 5; ++j) {
                cout << person34[i].differentialGrades[j] << " ";
            }
        }
    }

}

//5.   Вывод топа самых успешных студентов с наивысшим по рейтингу средним баллом за прошедшую сессию.
float calculateAverageGrade( Student& student) {
    float totalExamGrade = 0;
    float totalDifferentialGrade = 0;
    for (int i = 0; i < 3; ++i) {
        totalExamGrade += student.examGrades[i];
    }
    for (int i = 0; i < 5; ++i) {
        totalDifferentialGrade += student.differentialGrades[i];
    }
    return (totalExamGrade + totalDifferentialGrade) / 8.0f;
}
bool compareByAverageGrade( Student& a,  Student& b) {
    return calculateAverageGrade(a) > calculateAverageGrade(b);
}

//6.   Вывод количества студентов мужского и женского пола.

//7.   Вывод данных о студентах, которые не получают стипендию; учатся только на «хорошо» и «отлично»; учатся только на «отлично»;
void checkScholarship(const Student& student) {
    bool hasScholarship = true;
    for (int i = 0; i < 3; ++i) {
        if (student.examGrades[i] == 3.0) {
            hasScholarship = false;
            break;
        }
    }
    for (int i = 0; i < 5; ++i) {
        if (student.differentialGrades[i] == 3.0) {
            hasScholarship = false;
            break;
        }
    }
    if (hasScholarship) {
        cout << "Student " << student.fullName << ": YES scholarship." << endl;
    }
    else {
        cout << "Student " << student.fullName << ": NO scholarship." << endl;
    }
}
bool isExcellentStudent(const Student& student) {
    for (int i = 0; i < 3; ++i) {
        if (student.examGrades[i] != 4 && student.examGrades[i] != 5) {
            return false;
        }
    }
    for (int i = 0; i < 5; ++i) {
        if (student.differentialGrades[i] != 4 && student.differentialGrades[i] != 5) {
            return false;
        }
    }
    return true;
}

//8.   Вывод данных о студентах, имеющих номер в списке – k.
void displayStudentInfo(Student& student) {
    cout << "Full Name: " << student.fullName << endl;
    cout << "Gender: " << student.gender << endl;
    cout << "Group Number: " << student.groupNumber << endl;
    cout << "List Number: " << student.listNumber << endl;
    cout << "Exam Grades: ";
    for (int i = 0; i < 3; ++i) {
        cout << student.examGrades[i] << " ";
    }
    cout << endl;
    cout << "Differential Grades: ";
    for (int i = 0; i < 5; ++i) {
        cout << student.differentialGrades[i] << " ";
    }
    cout << endl;
}

int main() {

    int count = 0;
    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Create a new student record" << endl;
        cout << "2. Make changes to an existing record" << endl;
        cout << "3. Output all student data" << endl;
        cout << "4. Display information about all students in group N" << endl;
        cout << "5. Bring out the top most successful students" << endl;
        cout << "6. Print the number of male and female students" << endl;
        cout << "7. Output data on students who do not receive a scholarship" << endl;
        cout << "8. Output data about students with a number in the k list" << endl;
        cout << "9. IDZ" << endl;

        cout << "Select an action: ";

        int choice;
        cin >> choice;
        cin.ignore(); 

        int studentCount32 = 30;
        int studentCount33 = 29;
        int studentCount34 = 28;
        const int maxStudents = 100;
        Student students[maxStudents] = { {"Belochkina Yana",'w', 3372, 1, {4,4,4}, {4, 5, 3, 4, 5}}, {"Vlasyuk Eduard",'m', 3372, 2, {5,5,5}, {5, 5, 5, 5, 5}},{"Gozhenko Valery",'m', 3372, 3, {3,3,3}, {5, 4, 3, 3, 4}},\
{"Degtyareva Margarita", 'w', 3372, 4, {4,4,3 }, { 4, 5, 3, 4, 5 }}, { "Demidov Dmitry",'m', 3372, 5, {4,5,3}, {4, 5, 3, 4, 5} }, { "Zhukov Ilya",'m', 3372, 6, {3,3,3}, {4, 5, 3, 4, 5} }, \
{"Karpenko Dmitry", 'm', 3372, 7, {5,5,5 }, { 4, 5, 3, 4, 5 }}, { "Kozlov Nikita",'m', 3372, 8, {5,4,4}, {4, 5, 3, 4, 5} }, { "Kozlov Roman",'m', 3372, 9, {5,4,5}, {4, 5, 3, 4, 5} }, \
{"Konstantinov Rodion", 'm', 3372, 10, {5,5,4 }, { 4, 5, 3, 4, 5 }}, { "Markov Grigory",'m', 3372, 11, {4,4,4}, {4, 5, 3, 4, 5} }, { "Mikhailov Nikita",'m', 3372, 12, {3,3,3}, {4, 5, 3, 4, 5} }, \
{"Pavlov Grigory", 'm', 3372, 13, {5,5,5}, { 4, 5, 3, 4, 5 }}, { "Pletneva Irina",'w', 3372, 14, {4,4,4}, {4, 5, 3, 4, 5} }, { "Proshunina Sofia",'w', 3372, 15, {4,3,4}, {4, 5, 3, 4, 5} }, \
{ "Savchuk Rodion", 'm', 3372, 16, {4,5,3}, { 4, 5, 3, 4, 5 } }, { "Svyatoho Vadim",'m', 3372, 17, {3,4,5}, {4, 5, 3, 4, 5} }, { "Semin Vadim",'m', 3372, 18, {4,4,5}, {4, 5, 3, 4, 5} },\
{ "Sudan Shivangi", 'm', 3372, 19, {3,4,3}, { 4, 5, 3, 4, 5 } }, { "Tochiev Salman",'m', 3372, 20, {4,3,4}, {4, 5, 3, 4, 5} }, { "Trubnikova Alena",'w', 3372, 21, {5,4,4}, {4, 5, 3, 4, 5} }, \
{ "Ustinov Lev", 'm', 3372, 22, {4,3,5}, { 4, 5, 3, 4, 5 } }, { "Khadzhikulov Asadbek",'m', 3372, 23, {4,4,4}, {4, 5, 3, 4, 5} }, { "Hanganu Alisa",'w', 3372, 24, {5,5,5}, {4, 5, 3, 4, 5} }, \
{ "Khusnutdinov Ruslan", 'm', 3372, 25, {3,3,4}, { 4, 5, 3, 4, 5 } }, { "Czech Maria",'w', 3372, 26, {4,4,3}, {4, 5, 3, 4, 5} }, { "Shaposhnikov Artyom",'m', 3372, 27, {5,5,5}, {4, 5, 3, 4, 5} }, \
{ "Yablokov Alexey", 'm', 3372, 28, {4,4,5}, { 4, 5, 3, 4, 5 } }, { "Yaskiev Magomed",'m', 3372, 29, {5,5,4}, {4, 5, 3, 4, 5} }, { "Yashkov Arseniy",'m', 3372, 30, {4,4,4}, {4, 5, 3, 4, 5} } ,\
        {"Altukhov Nikita", 'm', 3373, 1, { 4,4,4 }, { 4, 5, 3, 4, 5 }}, { "Andrianov Arseniy",'m', 3373, 2, {5,5,5}, {5, 5, 5, 5, 5} }, { "Belskaya Veronica",'w', 3373, 3, {3,3,3}, {5, 4, 3, 3, 4} }, \
        {"Bugrov Saveliy", 'm', 3373, 4, { 4,4,3 }, { 4, 5, 3, 4, 5 }}, { "Voronina Svetlana",'w', 3373, 5, {4,5,3}, {4, 5, 3, 4, 5} }, { "Gladkikh Oleg",'m', 3373, 6, {3,3,3}, {4, 5, 3, 4, 5} }, \
        {"Golubev Pavel", 'm', 3373, 7, { 5,5,5 }, { 4, 5, 3, 4, 5 }}, { "Gusarov Nikita",'m', 3373, 8, {5,4,4}, {4, 5, 3, 4, 5} }, { "Dvorkin Maxim",'m', 3373, 9, {5,4,5}, {4, 5, 3, 4, 5} }, \
        {"Long Alexey", 'm', 3373, 10, { 5,5,4 }, { 4, 5, 3, 4, 5 }}, { "Druzhkov Vladimir",'m', 3373, 11, {4,4,4}, {4, 5, 3, 4, 5} }, { "Elistratov Vsevolod",'m', 3373, 12, {3,3,3}, {4, 5, 3, 4, 5} }, \
        {"Zhurukhin Nikita", 'm', 3373, 13, { 5,5,5 }, { 4, 5, 3, 4, 5 }}, { "Zantman Nikita",'m', 3373, 14, {4,4,4}, {4, 5, 3, 4, 5} }, { "Karvosenoya Artem",'m', 3373, 15, {4,3,4}, {4, 5, 3, 4, 5} }, \
        { "Kasatkin Roman", 'm', 3373, 16, { 4,5,3 }, { 4, 5, 3, 4, 5 } }, { "Kasatkina Anastasia",'w', 3373, 17, {3,4,5}, {4, 5, 3, 4, 5} }, { "Kislov Alexey",'m', 3373, 18, {4,4,5}, {4, 5, 3, 4, 5} }, \
        { "Kovrizhnykh Alexey", 'm', 3373, 19, { 3,4,3 }, { 4, 5, 3, 4, 5 } }, { "Kostin Anton",'m', 3373, 20, {4,3,4}, {4, 5, 3, 4, 5} }, { "Krivonosov Makar",'m', 3373, 21, {5,4,4}, {4, 5, 3, 4, 5} }, \
        { "Kropocheva Polina", 'w', 3373, 22, { 4,3,5 }, { 4, 5, 3, 4, 5 } }, { "Kubasov Dmitry",'m', 3373, 23, {4,4,4}, {4, 5, 3, 4, 5} }, { "Ogorodnikova Vladislava",'w', 3373, 24, {5,5,5}, {4, 5, 3, 4, 5} }, \
        { "Postanogov Dmitry", 'm', 3373, 25, { 3,3,4 }, { 4, 5, 3, 4, 5 } }, { "Sinitsyna Tatyana",'w', 3373, 26, {4,4,3}, {4, 5, 3, 4, 5} }, { "Chvanov Maxim",'m', 3373, 27, {5,5,5}, {4, 5, 3, 4, 5} }, \
        { "Chistyakov Stepan", 'm', 3373, 28, { 4,4,5 }, { 4, 5, 3, 4, 5 } }, { "Shatkova Varvara",'w', 3373, 29, {5,5,4}, {4, 5, 3, 4, 5} },\
            {"Borovkov Pavel", 'm', 3374, 1, { 4,4,4 }, { 4, 5, 3, 4, 5 }}, { "Demyanchuk Yaroslav",'m', 3374, 2, {5,5,5}, {5, 5, 5, 5, 5} }, { "Derevenkov Dmitry",'m', 3374, 3, {3,3,3}, {5, 4, 3, 3, 4} }, \
            {"Nikita Dubenetsky", 'm', 3374, 4, { 4,4,3 }, { 4, 5, 3, 4, 5 }}, { "Ivankov Kirill",'m', 3374, 5, {4,5,3}, {4, 5, 3, 4, 5} }, { "Ilyashenko Philip",'m', 3374, 6, {3,3,3}, {4, 5, 3, 4, 5} }, \
            {"Kalinyuk Stepan", 'm', 3374, 7, { 5,5,5 }, { 4, 5, 3, 4, 5 }}, { "Kashmanova Varvara",'w', 3374, 8, {5,4,4}, {4, 5, 3, 4, 5} }, { "Kornya Igor",'m', 3374, 9, {5,4,5}, {4, 5, 3, 4, 5} }, \
            {"Kuznetsov Roman", 'm', 3374, 10, { 5,5,4 }, { 4, 5, 3, 4, 5 }}, { "Lysova Ekaterina",'w', 3374, 11, {4,4,4}, {4, 5, 3, 4, 5} }, { "Mehdiev David",'m', 3374, 12, {3,3,3}, {4, 5, 3, 4, 5} }, \
            {"Pavlov Alexander", 'm', 3374, 13, { 5,5,5 }, { 4, 5, 3, 4, 5 }}, { "Porofiev Egor",'m', 3374, 14, {4,4,4}, {4, 5, 3, 4, 5} }, { "Postobaev Mikhail",'m', 3374, 15, {4,3,4}, {4, 5, 3, 4, 5} }, \
            { "Romanov Alexey", 'm', 3374, 16, { 4,5,3 }, { 4, 5, 3, 4, 5 } }, { "Rybochkin Maxim",'m', 3374, 17, {3,4,5}, {4, 5, 3, 4, 5} }, { "Sapozhnikov Anton",'m', 3374, 18, {4,4,5}, {4, 5, 3, 4, 5} }, \
            { "Svitelman Alexandra", 'w', 3374, 19, { 3,4,3 }, { 4, 5, 3, 4, 5 } }, { "Sedakova Ulyana",'w', 3374, 20, {4,3,4}, {4, 5, 3, 4, 5} }, { "Sulima Daniel",'m', 3374, 21, {5,4,4}, {4, 5, 3, 4, 5} }, \
            { "Turner Irina", 'w', 3374, 22, { 4,3,5 }, { 4, 5, 3, 4, 5 } }, { "Torokhov Sergey",'m', 3374, 23, {4,4,4}, {4, 5, 3, 4, 5} }, { "Totmin Maxim",'m', 3374, 24, {5,5,5}, {4, 5, 3, 4, 5} }, \
            { "Khomskov Maxim", 'm', 3374, 25, { 3,3,4 }, { 4, 5, 3, 4, 5 } }, { "Tsvetkov Mikhail",'m', 3374, 26, {4,4,3}, {4, 5, 3, 4, 5} }, { "Shavgeninia Anastasia",'w', 3374, 27, {5,5,5}, {4, 5, 3, 4, 5} }, \
            { "Shestova Polina", 'w', 3374, 28, { 4,4,5 }, { 4, 5, 3, 4, 5 } } };

        int maleCount3372 = 0;
        int femaleCount3372 = 0;
        int maleCount3373 = 0;
        int femaleCount3373 = 0;
        int maleCount3374 = 0;
        int femaleCount3374 = 0;
        int size = sizeof(students) / sizeof(students[0]);
        bool found = false;
        bool found1 = false;

        switch (choice) {
        case 1:

            Student newStudent;
            cout << "Enter the details of the new student:" << endl;
            cout << "Enter the student's FI: ";
            cin.getline(newStudent.fullName, 100);
            cout << "Enter the gender of the student (m/w):";
            cin >> newStudent.gender;
            cout << "Enter the group number:";
            cin >> newStudent.groupNumber;

            cout << "Grades for exams:";
            for (int j = 0; j < 3; ++j) {
                cin >> newStudent.examGrades[j];
            }
            cout << endl;
            cout << "Grades for differentiated credits:";
            for (int j = 0; j < 5; ++j) {
                cin >> newStudent.differentialGrades[j];
            }

            if (newStudent.groupNumber == 3372) {
                for (int j = 0; j < 5; ++j) {
                    if (newStudent.examGrades[j] == 2 or newStudent.differentialGrades[j] == 2) {
                        cout << "Error: This student should be expelled." << endl;
                    }
                    break;
                }
                addStudent32(person32, studentCount32, newStudent);
                sort(person32, person32 + studentCount32, compareByName);
                updateListNumbers(person32, studentCount32);

                for (int i = 0; i < studentCount32; ++i) {
                    if (person32[i].groupNumber != 0) {
                        cout << "FI: " << person32[i].fullName << endl;
                        cout << "Gender:" << person32[i].gender << endl;
                        cout << "Group number:" << person32[i].groupNumber << endl;
                        cout << "The number in the group list:" << person32[i].listNumber << endl;
                        cout << "Grades for exams:";
                        for (int j = 0; j < 3; ++j) {
                            cout << person32[i].examGrades[j] << " ";
                        }
                        cout << endl;
                        cout << "Grades for differentiated credits:";
                        for (int j = 0; j < 5; ++j) {
                            cout << person32[i].differentialGrades[j] << " ";
                        }
                        cout << endl << endl;
                    }
                }
            }
            if (newStudent.groupNumber == 3373) {
                for (int j = 0; j < 5; ++j) {
                    if (newStudent.examGrades[j] == 2 or newStudent.differentialGrades[j] == 2) {
                        cout << "Error: This student should be expelled." << endl;
                    }
                    break;
                }
                addStudent(person33, studentCount33, newStudent);
                sort(person33, person33 + studentCount33, compareByName);
                
                for (int i = 0; i < studentCount33; ++i) {
                    cout << "FI: " << person33[i].fullName << endl;
                    cout << "Gender:" << person33[i].gender << endl;
                    cout << "Group number:" << person33[i].groupNumber << endl;
                    cout << "The number in the group list:" << person33[i].listNumber << endl;
                    cout << "Grades for exams:";
                    for (int j = 0; j < 3; ++j) {
                        cout << person33[i].examGrades[j] << " ";
                    }
                    cout << endl;
                    cout << "Grades for differentiated credits:";
                    for (int j = 0; j < 5; ++j) {
                        cout << person33[i].differentialGrades[j] << " ";
                    }
                    cout << endl << endl;
                }
            }
            if (newStudent.groupNumber == 3374) {
                for (int j = 0; j < 5; ++j) {
                    if (newStudent.examGrades[j] == 2 or newStudent.differentialGrades[j] == 2) {
                        cout << "Error: This student should be expelled." << endl;
                    }
                    break;
                }
                addStudent(person34, studentCount34, newStudent);
                sort(person34, person34 + studentCount34, compareByName);
                
                for (int i = 0; i < studentCount34; ++i) {
                    cout << "FI: " << person34[i].fullName << endl;
                    cout << "Gender:" << person34[i].gender << endl;
                    cout << "Group number:" << person34[i].groupNumber << endl;
                    cout << "The number in the group list:" << person34[i].listNumber << endl;
                    cout << "Grades for exams:";
                    for (int j = 0; j < 3; ++j) {
                        cout << person34[i].examGrades[j] << " ";
                    }
                    cout << endl;
                    cout << "Grades for differentiated credits:";
                    for (int j = 0; j < 5; ++j) {
                        cout << person34[i].differentialGrades[j] << " ";
                    }
                    cout << endl << endl;
                }
            }

            break;
        case 2:
            int groupNumber;
            cout << "Enter the group number: ";
            cin >> groupNumber;
            int listNumber;
            cout << "Enter the list number of the student: ";
            cin >> listNumber;

            for (int i = 0; i < 100; ++i) {
                if (students[i].groupNumber == groupNumber && students[i].listNumber == listNumber) {
                    
                    displayStudentInfo(students[i]);

                    int choice;
                    cout << "Choose what information you want to modify:" << endl;
                    cout << "1. Full Name" << endl;
                    cout << "2. Gender" << endl;
                    cout << "3. Exam Grades" << endl;
                    cout << "4. Differential Grades" << endl;
                    cout << "Enter your choice (1-4): ";
                    cin >> choice;

                    switch (choice) {
                    case 1:
                        modifyFullName(students[i]);
                        break;
                    case 2:
                        modifyGender(students[i]);
                        break;
                    case 3:
                        modifyExamGrades(students[i]);
                        break;
                    case 4:
                        modifyDifferentialGrades(students[i]);
                        break;
                    default:
                        cout << "Invalid choice. No changes made." << endl;
                    }

                    cout << "Updated Student Information:" << endl;
                    displayStudentInfo(students[i]);

                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Student not found." << endl;
            }
            break;
        case 3:
            displayGroup(person32, studentCount32, 3372);
            displayGroup(person33, studentCount33, 3373);
            displayGroup(person34, studentCount34, 3374);
            break;
        case 4:
            int groupNumber1;
            cout << "Enter the group number: ";
            cin >> groupNumber1;
            
            if (groupNumber1 == 3372) {
                displayGroup(person32, studentCount32, groupNumber1);
            }
            if (groupNumber1 == 3373) {
                displayGroup(person33, studentCount33, groupNumber1);
            }
            if (groupNumber1 == 3374) {
                displayGroup(person34, studentCount34, groupNumber1);
            }
            break;
        case 5:
            sort(students, students + maxStudents, compareByAverageGrade);
            
            cout << "Top performing students from all groups:" << endl;
            cout << "---------------------------------------------" << endl;
            cout << setw(20) << "Full Name" << setw(10) << "Gender" << setw(10) << "Group" << setw(10) << "List #" << setw(15) << "Average Grade" << endl;
            cout << "---------------------------------------------" << endl;
            for (int i = 0; i < min(5, maxStudents); ++i) {
                cout << setw(20) << students[i].fullName << setw(10) << students[i].gender << setw(10) << students[i].groupNumber << setw(10) << students[i].listNumber << setw(15) << setprecision(2) << calculateAverageGrade(students[i]) << endl;
            }
            cout << "---------------------------------------------" << endl;

            break;
        case 6:
            for (int i = 0; i < maxStudents; ++i) {
                if (students[i].groupNumber == 3372) {
                    if (students[i].gender == 'm') {
                        maleCount3372++;
                    }
                    else if (students[i].gender == 'w') {
                        femaleCount3372++;
                    }
                }
                if (students[i].groupNumber == 3373) {
                    if (students[i].gender == 'm') {
                        maleCount3373++;
                    }
                    else if (students[i].gender == 'w') {
                        femaleCount3373++;
                    }
                }
                if (students[i].groupNumber == 3374) {
                    if (students[i].gender == 'm') {
                        maleCount3374++;
                    }
                    else if (students[i].gender == 'w') {
                        femaleCount3374++;
                    }
                }
            }
            cout << "Number of man students in group 3372: " << maleCount3372 << endl;
            cout << "Number of woman students in group 3372: " << femaleCount3372 << endl;
            cout << "Number of man students in group 3373: " << maleCount3373 << endl;
            cout << "Number of woman students in group 3373: " << femaleCount3373 << endl;
            cout << "Number of man students in group 3374: " << maleCount3374 << endl;
            cout << "Number of woman students in group 3374: " << femaleCount3374 << endl;
            break;
        case 7:
            int groupNumber3;
            cout << "Enter the group number: ";
            cin >> groupNumber3;

            cout << "Scholarship Information for Group " << groupNumber3 << ":" << endl;
            for (int i = 0; i < size; ++i) {
                if (students[i].groupNumber == groupNumber3) {
                    checkScholarship(students[i]);
                }
            }

            cout << "Excellent Students:" << endl;
            for (int i = 0; i < 100; ++i) {
                if (isExcellentStudent(students[i])) {
                    cout << "Name: " << students[i].fullName << endl;
                    cout << "Gender: " << students[i].gender << endl;
                    cout << "Group Number: " << students[i].groupNumber << endl;
                    cout << "List Number: " << students[i].listNumber << endl;
                    cout << endl;
                }
            }

            cout << "Students from group " << groupNumber3 << " who study only on 5:" << endl;
            for ( Student &student : students) {
                if (student.groupNumber == groupNumber3) {
                    bool allGradesFive = true;
                    for (int i = 0; i < 3; ++i) {
                        if (student.examGrades[i] != 5) {
                            allGradesFive = false;
                            break;
                        }
                    }
                    for (int i = 0; i < 5; ++i) {
                        if (student.differentialGrades[i] != 5) {
                            allGradesFive = false;
                            break;
                        }
                    }
                    if (allGradesFive) {
                        displayStudentInfo(student);
                    }
                }
            }

            break;
        case 8:
            int groupNumber2;
            cout << "Enter the group number: ";
            cin >> groupNumber2;

            int listNumber1;
            cout << "Enter the list number of the student: ";
            cin >> listNumber1;

            for (int i = 0; i < size; ++i) {
                if (students[i].groupNumber == groupNumber2 && students[i].listNumber == listNumber1) {
                    displayStudentInfo(students[i]);
                    found1 = true;
                    break;
                }
            }
            if (!found1) {
                cout << "Student not found." << endl;
            }
            break;
        case 9:
        {
            Volleyball volleyballStudents[100];
            int numStudents = 0;
            int choice1;
            do {
                cout << "Enter the details of the student:" << endl;
                cout << "Full Name: ";
                cin.getline(volleyballStudents[numStudents].fullName, 100);

                cout << "Gender (m/w): ";
                cin >> volleyballStudents[numStudents].gender;

                cout << "Age: ";
                cin >> volleyballStudents[numStudents].age;

                cout << "Clothing Size: ";
                cin >> volleyballStudents[numStudents].size;

                cout << "Volleyball Rank (1 for Yes, 0 for No): ";
                cin >> volleyballStudents[numStudents].volleyballRank;

                cout << "Course Number: ";
                cin >> volleyballStudents[numStudents].courseNumber;

                numStudents++;

                cout << "Do you want to add another student? (1/0): ";
                cin >> choice1;
                cin.ignore();

            } while (choice1 == 1 && numStudents < 100);

            while (true) {
                cout << "1. Information about all students with a rank" << endl;
                cout << "2. Information about the women's volleyball sports section team" << endl;
                cout << "3. Information about all K course students" << endl;
                cout << "4. Information about male students whose clothing size is larger than S" << endl;

                cout << "Select an action: ";

                int choice;
                cin >> choice;
                cin.ignore();
                
                switch (choice) {
                case 1:
                    cout << "Students with volleyball rank:" << endl;
                    for (int i = 0; i < numStudents; ++i) {
                        if (volleyballStudents[i].volleyballRank) {
                            cout << "Full Name: " << volleyballStudents[i].fullName << endl;
                            cout << "Gender: " << volleyballStudents[i].gender << endl;
                            cout << "Age: " << volleyballStudents[i].age << endl;
                            cout << "Clothing Size: " << volleyballStudents[i].size << endl;
                            cout << "Volleyball Rank: Yes" << endl;
                            cout << "Course Number: " << volleyballStudents[i].courseNumber << endl;
                            cout << endl;
                        }
                    }
                    break;
                case 2:
                    cout << "Information about the woman volleyball team:" << endl;
                    for (int i = 0; i < numStudents; ++i) {
                        if (volleyballStudents[i].gender == 'w') {
                            cout << "Full Name: " << volleyballStudents[i].fullName << endl;
                            cout << "Gender: " << volleyballStudents[i].gender << endl;
                            cout << "Age: " << volleyballStudents[i].age << endl;
                            cout << "Clothing Size: " << volleyballStudents[i].size << endl;
                            cout << "Volleyball Rank: " << (volleyballStudents[i].volleyballRank ? "Yes" : "No") << endl;
                            cout << "Course Number: " << volleyballStudents[i].courseNumber << endl;
                            cout << endl;
                        }
                    }
                    break;
                case 3:
                    int course3;
                    cout << "Enter the course number (1-6): ";
                    cin >> course3;

                    cout << "Information about students from course " << course3 << ":" << endl;
                    for (int i = 0; i < numStudents; ++i) {
                        if (volleyballStudents[i].courseNumber == course3) {
                            cout << "Full Name: " << volleyballStudents[i].fullName << endl;
                            cout << "Gender: " << volleyballStudents[i].gender << endl;
                            cout << "Age: " << volleyballStudents[i].age << endl;
                            cout << "Clothing Size: " << volleyballStudents[i].size << endl;
                            cout << "Volleyball Rank: " << (volleyballStudents[i].volleyballRank ? "Yes" : "No") << endl;
                            cout << "Course Number: " << volleyballStudents[i].courseNumber << endl;
                            cout << endl;
                        }
                    }
                    break;
                case 4:
                    cout << "Information about male students with clothing size larger than S:" << endl;
                    for (int i = 0; i < numStudents; ++i) {
                        if (volleyballStudents[i].gender == 'm' && strcmp(volleyballStudents[i].size, "S") > 0) {
                            cout << "Full Name: " << volleyballStudents[i].fullName << endl;
                            cout << "Gender: " << volleyballStudents[i].gender << endl;
                            cout << "Age: " << volleyballStudents[i].age << endl;
                            cout << "Clothing Size: " << volleyballStudents[i].size << endl;
                            cout << "Volleyball Rank: " << (volleyballStudents[i].volleyballRank ? "Yes" : "No") << endl;
                            cout << "Course Number: " << volleyballStudents[i].courseNumber << endl;
                            cout << endl;
                        }
                    }
                    break;
                }
            }
        }
            default:
                cout << "Incorrect choice. Try again." << endl;
            }
        }
       return 0;
    }


