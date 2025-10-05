#ifndef STU_
#define STU_
class Student {
private:
    int sid;
    char* name;
    char* addr;
    float marks[3];
    static float passper;

public:
// default constructor
    Student();
    // parameterized constructor
    Student(int id, const char* nm, const char* ad, const float marks[]);
    // destructor
    ~Student();

    // setter methods

    void setStuId(int id);
    void setName(const char* nm);
    void setAddr(const char* ad);
    void setMarks(const float marks[]);

    // getter methods
    int getStuId() const;
    const char* getName() const;
    const char* getAddr() const;
    const float getMarks(int index) const;

    // display method
    void display() const;
};
      

#endif
