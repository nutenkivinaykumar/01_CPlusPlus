# Definitions

__________________________________________________________________________________

**1. Class**
    
    - Class is a user-defined data type, which holds its own data member and member functions, which can be accessed and used by creating an instance of that class. 

__________________________________________________________________________________

**2. Object**
    
    - Variable/Instance of a Class. 

Ex: 
        **int**-(datatype) **x**-(variable);
        **Class**-(datatype) **Object**-(variable);

__________________________________________________________________________________

**3. Inheritance**
    
    - Inheritance is a feature or a process in which, new classes are created from the existing classes. The new class created is called “derived class” or “child class” and the existing class is known as the “base class” or “parent class”.

__________________________________________________________________________________

**4. Abstraction**
    
    - Technique of hiding few things/funtionalities of a class.
    
    - Abstraction means displaying only essential information and hiding the details

    a. Data Abstraction - shows the required information about the data and hides the unnecessary data
    
    b. Control Abstraction - shows the required information about the implementation and hides unnecessary information

      i. Abstraction using Classes. Access Specifiers. Public, Private, and Protected.
     ii. Abstraction using Header files. 

__________________________________________________________________________________

**5. Polymorphism**  https://www.geeksforgeeks.org/cpp-polymorphism/
    
    - One/Same name multiple functionalities.

    i. Compile Time / Static Polymorphism
        a. Function Overloading
        b. Operator Overloading
    ii. Run Time / Dynamic Polymorphism
        a. Virtual Functions

__________________________________________________________________________________

**6. Encapsulation**
    
    - Binding of data members and member functions together.

__________________________________________________________________________________

**7. Constructor**
    
       i. A special method that is automatically called when an object of a class is created.
    
      ii. It has same name as the Class name, and does not have any return type statement. 

     iii. Useful to Initialize variables, or Error checking.

**i. Initializer list**
    - Constructors which uses Initializer List perform better compared to Normal constructor. 
    
    Example: Concepts_Code\C++ OOPS\vid_2_Constructors_Destructors\2_3_Normal_constructor_VS_initializer_list.cpp Update with github path

**ii. Copy Constructor** 
    - Copy constructors are special functions which are called when an object is created from an Existing object. 

    - example: Test t2(t1);// Creating t2 from "t1 = Test t2=t1;"

__________________________________________________________________________________

**8. Destructors**

    - 


__________________________________________________________________________________

# Questions or Points to be noted: 

==================================================================================

# TO-DO: 

**Inheritance**

1. write example for multi-level inheritance, Multiple inheritance.(Upcoming videos)
2. Member fn's wihtout and with arguments - within and outside the class examples after - This pointer video. 
    a. examples from: https://www.geeksforgeeks.org/inheritance-in-c/
    
----------------------------------------------------------------------------------