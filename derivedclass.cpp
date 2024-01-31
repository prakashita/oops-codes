class base_class
{
private:
    //class member
    int base_private; 
protected:
    //class member
    int base_protected;
public:
    //class member
    int base_public;
}; 
class derived_class : public base_class
{
private:
    int derived_private;
    // int base_private;
protected:
    int derived_protected;
    // int base_protected;
public:
    int derived_public;
    // int base_public;
}; 
int main()
{
    // Accessing members of base_class using object of the //derived_class:
    derived_class obj;
    //obj.base_private;   // Not accessible
    //obj.base_protected; // Not accessible
    obj.base_public;    // Accessible
}
