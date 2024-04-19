#include <iostream>
#include <string>
using namespace std;

class Message{
private:
    string m1;

public:
    Message(const string &message = "Default ") : m1(message) {}
    void print(){
        cout << "Message 1 : " << m1 << endl;
    }
    void print(const string& additionalMessage) {
        cout << "Message 1 : " << m1 << endl;
        cout << "Additional  Message: " << additionalMessage << endl;
    }
};

int main() {
    Message m;

    cout << "Using printf : " << endl;
    m.print();
    cout << endl;

    Message customMessage("Custom New Message");

    cout << "With an additional message:" << endl;
    customMessage.print("This is an additional message.");
    return 0;
}