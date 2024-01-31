#include <iostream>
#include <string>

class Department {
public:
    Department(std::string name) : name(name) {
    }

    std::string getName() const {
        return name;
    }

private:
    std::string name;
};

class University {
public:
    University(std::string name) : name(name), departmentCount(0), departments(NULL) {
    }

    void addDepartment(const Department& department) {
        Department** temp = new Department*[departmentCount + 1];
        for (int i = 0; i < departmentCount; ++i) {
            temp[i] = departments[i];
        }
        temp[departmentCount] = new Department(department);
        delete[] departments;
        departments = temp;
        ++departmentCount;
    }

    void displayDepartments() {
        std::cout << "Departments at " << name << ":\n";
        for (int i = 0; i < departmentCount; ++i) {
            std::cout << " - " << departments[i]->getName() << "\n";
        }
    }

    ~University() {
        for (int i = 0; i < departmentCount; ++i) {
            delete departments[i];
        }
        delete[] departments;
    }

private:
    std::string name;
    int departmentCount;
    Department** departments; // Aggregation: University has Departments (pointers)
};

int main() {
    Department dept1("Computer Science");
    Department dept2("Physics");
    Department dept3("Mathematics");

    University myUniversity("Example University");
    myUniversity.addDepartment(dept1);
    myUniversity.addDepartment(dept2);
    myUniversity.addDepartment(dept3);

    myUniversity.displayDepartments();

    return 0;
}