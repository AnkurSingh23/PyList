#include <bits/stdc++.h>
using namespace std;

enum Dtype{INT,FLOAT,DOUBLE,STRING,NONE,CHAR,BOOL};

struct Pynode
{
    int ival;
    float fval;
    double dval;
    bool bval;
    string sval;
    char cval;
    Dtype type;
    Pynode *next;
    // Constructors
    Pynode(int val) : ival(val), type(INT), next(nullptr) {}
    Pynode(float val) : fval(val), type(FLOAT), next(nullptr) {}
    Pynode(double val) : dval(val), type(DOUBLE), next(nullptr) {}
    Pynode(bool val) : bval(val), type(BOOL), next(nullptr) {}
    Pynode(string val) : sval(val), type(STRING), next(nullptr) {}
    Pynode(char val) : cval(val), type(CHAR), next(nullptr) {}
    Pynode()
    {
        type = NONE;
        next = nullptr;
    }
};

class PyList
{
private:
    Pynode *head, *tail;
    int size;

public:
    PyList()
    {
        tail = head = nullptr;
        size = 0;
    }
    void append(int data)
    {
        Pynode *newnode = new Pynode(data);
        if (!head)
            head = tail = newnode;
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
        size++;
    }
    // --------------------
    void append(float data)
    {
        Pynode *newnode = new Pynode(data);
        if (!head)
            head = tail = newnode;
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
        size++;
    }

    void append(double data)
    {
        Pynode *newnode = new Pynode(data);
        if (!head)
            head = tail = newnode;
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
        size++;
    }
    void append(bool data)
    {
        Pynode *newnode = new Pynode(data);
        if (!head)
            head = tail = newnode;
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
        size++;
    }

    void append(string data)
    {
        Pynode *newnode = new Pynode(data);
        if (!head)
            head = tail = newnode;
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
        size++;
    }

    void append(const char *data)
    {
        append(string(data));
    }

    void append(char data)
    {
        Pynode *newnode = new Pynode(data);
        if (!head)
            head = tail = newnode;
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
        size++;
    }

    // ----------

    void display()
    {
        if (!head)
            cout << "[]" << endl;
        else
        {
            Pynode *curr = head;

            cout << "\033[36m[\033[0m ";
            while (curr)
            {
                switch (curr->type)
                {
                case INT:
                    cout << "\033[31m" << curr->ival << "\033[0m";
                    break;
                case FLOAT:
                    cout << "\033[35m" << curr->fval << "\033[01m";
                    break;
                case DOUBLE:
                    cout << "\033[34m" << curr->dval << "\033[0m";
                    break;
                case CHAR:
                    cout << curr->cval;
                    break;
                case STRING:
                    cout << "\033[32m\"" << curr->sval << "\"\033[0m";
                    break;
                case BOOL:
                    cout << "\033[33m" << (curr->bval ? "True" : "False") << "\033[0m";
                    break;
                case NONE:
                    break;
                }
                if (curr->next)
                    if(curr->next) cout << "\033[36m, \033[0m";
                curr = curr->next;
            }
            cout << " \033[36m]\033[0m" << endl;
        }
    }
    int Size(){
        return size;
    }
};

int main()
{
    PyList list;
    list.append(1);
    list.append("Ankur");
    list.append(true);
    list.append(1.2);
    list.append(1.2f);
    // list.display();
    // cout<<list.Size();
    cout<<&list;
}
