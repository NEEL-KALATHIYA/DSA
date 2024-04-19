#include <iostream>
#include <string>

using namespace std;

class Admin
{
protected:
    string company_name;
    float manager_salary;
    float employee_salary;
    int total_staff;
    float total_annual_revenue;
    bool can_terminate;

public:
    Admin(string cname, float msalary, float esalary, int staff, float revenue, bool terminate)
        : company_name(cname), manager_salary(msalary), employee_salary(esalary), total_staff(staff),
          total_annual_revenue(revenue), can_terminate(terminate) {}

    virtual void myAccess()
    {
        cout << "Company Name: " << company_name << endl;
        cout << "Manager Salary: " << manager_salary << endl;
        cout << "Employee Salary: " << employee_salary << endl;
        cout << "Total Staff: " << total_staff << endl;
        cout << "Total Annual Revenue: " << total_annual_revenue << endl;
        cout << "Can Terminate: " << (can_terminate ? "Yes" : "No") << endl;
    }
};

class Manager : public Admin
{
public:
    Manager(string cname, float msalary, float esalary, int staff, float revenue, bool terminate)
        : Admin(cname, msalary, esalary, staff, revenue, terminate) {}

    void myAccess()
    {
        cout << "Company Name: " << company_name << endl;
        cout << "Manager Salary: " << manager_salary << endl;
    }
};

class Employee : public Manager
{
public:
    Employee(string cname, float msalary, float esalary, int staff, float revenue, bool terminate)
        : Manager(cname, msalary, esalary, staff, revenue, terminate) {}

    void myAccess()
    {
        cout << "Company Name: " << company_name << endl;
        cout << "Employee Salary: " << employee_salary << endl;
    }
};

int main()
{
    string cname;
    float msalary, esalary, revenue;
    int staff;
    bool terminate;

    cout << "Enter Company Name: ";
    getline(cin, cname);
    cout << "Enter Manager Salary: ";
    cin >> msalary;
    cout << "Enter Employee Salary: ";
    cin >> esalary;
    cout << "Enter Total Staff: ";
    cin >> staff;
    cout << "Enter Total Annual Revenue: ";
    cin >> revenue;
    cout << "Can Terminate? (1 for Yes, 0 for No): ";
    cin >> terminate;

    Admin *admin = new Admin(cname, msalary, esalary, staff, revenue, terminate);
    cout << "\nAdmin:" << endl;
    admin->myAccess();
    delete admin;

    Manager *manager = new Manager(cname, msalary, esalary, staff, revenue, terminate);
    cout << "\nManager:" << endl;
    manager->myAccess();
    delete manager;

    Employee *employee = new Employee(cname, msalary, esalary, staff, revenue, terminate);
    cout << "\nEmployee:" << endl;
    employee->myAccess();
    delete employee;

    return 0;
}
