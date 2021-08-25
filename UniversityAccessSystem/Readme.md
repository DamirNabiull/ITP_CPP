#Language standard: C++14
#Compiler: GCC
#OS: Linux

#How to run code:
    1) Open folder HW2 as CLion project (in CLion (Because I have cmakeList that execute all additional classes))
    2) Run main.cpp in CLion
    3) Results and all comands will appear in console

#Description:
    My programm has 3 external classes: generator, persons and rooms
        generator - Generate start data and create console interface for user
        persons - Include implementation of all classes: Students, Admins and etc.
        rooms - Include implementation of rooms
    
    Access levels:
        Guest - Blue - Only rooms on the first floor (Because in my University on 1-st 
            floor placed all Lecture rooms and some Conference rooms (no more))
        Student - No level - Class room
        Employee - Green - Class room, Lecture room, own Lab
        Professor, Director - Yellow - Class room, Lecture room, own Cabinet
        Admin - Red - All rooms
        

    When you run main.cpp, you will see in console some examples of output:
        1) List of rooms (This rooms are added in our program at start)
        2) Directors and count of directors (Added at start)
        3) Admins and count of admins (Added at start)
        4) Professors and count of professors (Added at start)
        5) Employees and count of employees (Added at start)
        6) Students and count of students (Added at start)
        7) Guests and count of guests (Added at start)
        8) Example of changing level (Admin change access level of Student)
        9) Example of adding access to any room (Admin adds room to access list to guest)
        10) Example of opening without emergency situation (Persons try to open some cabinets)
        11) Example of opening with emergency situation (Persons try to open some cabinets)

    Also, after examples programm ask you to write a command/commands
###List of commands:

        1) Exit - ends code execution

        2) Add - add new person

            a) Write class of person: Student, Employee, Professor, Admin, Director, Guest
                *If person is Admin - write a password (9876 - password)
                **Write class like here - first letter is upper, others are lower (without space and comma)
            b) Write Name and Surname of person. Format: Name Surname
            c) If perons is Employee/Professor, Admin, Director - write his own Lab/Cabinet
               If cabinet not in list, it will be added. But lab won't be added.
            d) Write Date of birth. Format: dd.mm.yyyy
            e) Write pet, for example: No pet, Dog and etc.
            f) Programm print: added if person added, or programm will give you error with description.
                One of errors: Employee have incorrect Lab

            Example (It will looks like that):
                Add
                Class: Admin
                Password: 9876
                Name and Surname: Danil Admin
                Cabinet: 560
                Date: 01.01.1001
                Pet: No pet
                Admin added

        3) Info - give info about person

            a) Write class of person: Student, Employee, Professor, Admin, Director, Guest
                *Write class like here - first letter is upper, others are lower (without space and comma)
            b) Write Name and Surname of person. Format: Name Surname
            c) Programm print: Access level, Cabinet, Date of birth and pet.
                If we haven't person with given name in this class - print error

            Example (It will looks like that):
                Info
                Class: Admin
                Name and Surname: Danil Admin
                Access level: Red
                Cabinet: 560
                Date: 01.01.1001
                Pet: No pet

        4) List - Print all rooms and persons
            
        5) Level - Main admin(first in list) changes access level for given person
            
            a) Write class of person: Student, Employee, Professor, Admin, Director, Guest
                *Write class like here - first letter is upper, others are lower (without space and comma)
            b) Write Access level (We replace our access level on this): 
                No level, Blue, Green, Yellow, Red
            c) Write a password (9876 - password)
            d) Write Name and Surname of person. Format: Name Surname
            e) Programm print: level changed, or programm will give you error with description.

            Example (It will looks like that):
                Level
                Class: Student
                Access level: Green
                Password: 9876
                Name and Surname: Damir Nabiullin
                Nikolai Adminovich changed access level of Damir Nabiullin to Green

        6) Open - print is room opened by person or no
            
            a) Write class of person: Student, Employee, Professor, Admin, Director, Guest
                *Write class like here - first letter is upper, others are lower (without space and comma)
            b) Write Name and Surname of person. Format: Name Surname
            c) Write Room of name (like in list)
            d) Programm print: is room opened or no, or programm will give you error with description.
                *If we have Emergency situation - all doors are opened

            Example (It will looks like that):
                Open
                Class: Student
                Name and Surname: Damir Nabiullin
                Room(name): Conference room
                Damir Nabiullin has not access to the room "Conference room"
        
        7) Emergency - change emergency status