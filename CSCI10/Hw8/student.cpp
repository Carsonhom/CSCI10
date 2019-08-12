
#include <iostream>
#include <cmath>

using namespace std;

// Date
struct Date {
    int month;
    int day;
    int year;
};

// Transcript
struct Transcript {
    string classes[100];
    double grades[100];
    int class_count;
    double gpa;
};

// student
struct Student {
    string name;
    int id;
    string major;
    Transcript tran;
    int age;
    Date dob;
};

// function declarations
Student mergeStudent(Student s1, Student s2);
void printStudent(Student s);
void initializeStudent(Student& st);

// for testing
int main() {
    
    const int n = 100; //You may wish to make this smaller for testing.
    Student freshmen[n];
    
    for(int i = 0; i < n; i++) {
        initializeStudent(freshmen[i]);
    }
    
    cout << freshmen[0].name << endl;
    for(int i = 0; i < n; i++){
        printStudent(freshmen[i]);
    }
    cout << endl;
    return 0;
}

// printing student information
void printStudent(Student s) {
    cout << "Name is: " << s.name << endl;
    cout << "ID is: " << s.id << endl;
    cout << "major is:" << s.major << endl;
    cout << "Birthday is: " << s.dob.month << "/" << s.dob.day << "/" << s.dob.year << endl;
    cout << "Age is: " << s.age << endl;
    
    //Add stuff for transcript
    // TODO
    cout << "Classes are: "; // Print out all classes on a students transcript
    int i = 0;
    while (s.tran.classes[i] != "" && i <= 100)
    {
        cout << s.tran.classes[i] << ", ";
        i++;
    }
    cout << "\b\b" << endl; // Delete the last comma and space
    cout << "Grades are: "; // Print out all the students grades
    for (int i = 0; i < s.tran.class_count; i++)
    {
        cout << s.tran.grades[i] << ", ";
    }
    cout << "\b\b" << endl; // Delete the last comma and space
    cout << "GPA is: " << s.tran.gpa << endl; // Print out the students gpa

}


// initializing student
void initializeStudent(Student& st) {
    string dummy;
    cout << "Enter a name" << endl;
    getline(cin, st.name); // getline reads a line
    cout << "Enter an id" << endl;
    cin >> st.id;
    getline(cin, dummy);
    cout << "enter a major" << endl;
    getline(cin, st.major);
    cout << "Enter age: " << endl;
    cin >> st.age;
    cout << "Enter birthday month, day, year as numbers: " << endl;
    cin >> st.dob.month >> st.dob.day >> st.dob.year;
    
    //Fill in stuff for transcript
    // TODO
    cout << "Enter number of classes: "; 
    cin >> st.tran.class_count; // Assign the number of classes the student will have
    cin.ignore(); // Remove the \n from the previous cin statement
    cout << "Enter classes: "; 
    for (int i = 0; i < st.tran.class_count; i++) // Add the classes that the student has taken to their transcript
    {
        getline(cin, st.tran.classes[i]);
    }
    cout << "Enter grades: "; 
    for (int i = 0; i < st.tran.class_count; i++) // Add the students grades to their transcript
    {
        cin >> st.tran.grades[i];
        st.tran.gpa = st.tran.grades[i]; // Add each grade to the total gpa
    }
    st.tran.gpa /= st.tran.class_count; // Divide the students gpa by the number of classes they are taking
    
}

// Merging
Student mergeStudent(Student s1, Student s2) {
    Student ret = {"no name", 0, ""};
    if(s1.id == s2.id){
        ret.id = s1.id;
        if(s1.age > s2.age) {
            ret.major = s1.major;
        }
        else {
            ret.major = s2.major;
        }
        if(s1.name.length() > s2.name.length())
            ret.name = s1.name;
        else
            ret.name = s2.name;
        //Fill in stuff for transcript
        // TODO
        ret.tran.gpa = 0; // Set the new students gpa to 0
        ret.tran.class_count = 0; // Set the new students class count to 0
        for (int i = 0; i < s1.tran.class_count; i++) 
        {
            ret.tran.classes[i] = s1.tran.classes[i]; // Place all classes on s1's transcript onto new students transcript
            ret.tran.grades[i] = s1.tran.grades[i]; // Place all of s1's grades onto new students transcript
            ret.tran.gpa += s1.tran.grades[i]; // Add the grade to the total gpa
            ret.tran.class_count++; // Add 1 to the new students total number of classes
        }
        for (int j = 0; j < s2.tran.class_count; j++)
        {
            int countr = 0; // Counter which is equal to 0 if the class is not a duplicate and any other number if it is a duplicate
            int offset = 0; // Position in new students classes or grades that skips the duplicates
            for (int k = 0; k < s1.tran.class_count; k++)
            {
                if (s2.tran.classes[j] == s1.tran.classes[k]) // If a class in s2 is a duplicate of another in s1, flag it
                {
                    countr++;
                }
            }
            if (countr == 0) // If the class in s2 is not a duplicate
            {
                ret.tran.classes[s1.tran.class_count + offset] = s2.tran.classes[j]; // Add it to the new students transcript
                ret.tran.grades[s1.tran.class_count + offset] = s2.tran.grades[j]; // Add the corresponding grade to the new students transcript
                ret.tran.gpa += s2.tran.grades[j]; // Add that grade to the total gpa
                ret.tran.class_count++; // Add 1 to the number of classes they are taking
                offset++; // Add 1 to the offset
            }
        }
        ret.tran.gpa /= ret.tran.class_count; // Divide the sum of all the new students classes by the total number of classes they are taking
    }
    return ret;
}
