#include "person.h"

class employeeType: public personType
{
    public:
        employeeType(string first = "", string last = "", int id = 0);
        virtual void print() const = 0;
        virtual int calculatePay() const = 0;
        void setId(int id);
        int getId() const;
	void display();
    private:
        int personId;
};

class fullTimeEmployee: public employeeType
{
    public:
        fullTimeEmployee(string first, string last, int id, int salary, int bonus);
        void set(string first, string last, int id, int salary, int bonus);
        void setSalary(int salary);
        int getSalary();
        void setBonus(int bonus);
        int getBonus();
        void print() const;
        int calculatePay() const;
	void display();

    private:
        int my_salary;
        int my_bonus;
};

class partTimeEmployee: public employeeType
{
    public:
        partTimeEmployee(string first, string last, int id, int rate, int hour);
        void set(string first, string last, int id, int rate, int hour);
        int calculatePay() const;
        void setRate(int rate);
        int getRate();
        void setHour(int hour);
        int getHour();
        void print() const;
    private:
        int my_rate;
        int my_hour;
};
