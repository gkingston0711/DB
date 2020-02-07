#include <string>

using namespace std;

class personType
{
    public:
        void print() const;
        void setName(string first, string last);
        string getFirstName();
        string getLastName();
        personType(string first = "", string last = "");
    private:
        string firstName;
        string lastName;
};
