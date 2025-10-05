#ifndef STU_
#define STU_

class Student{

  private:
    int sid;
    char* name;
    char* addr;
    float marks[3];
    static float passper;
    
  public:
	//default constructor
    Student();

	//Parameterised Constructor
    Student(int id,const char* nm, const char*ad, const float marks[]);
    
    //Destructor
     ~Student(); 
    
    //setter methods
    void setStuId(int id);
    void setName(const char *nm);
    void setAddr(const char *ad);
    void setMarks(const float marks[]);
    
    //getter methods
    int getStuId();
    const char* getName();
    const char* getAddr();
    const float getMarks();
    
	//display 
     void display();
      
};
#endif
