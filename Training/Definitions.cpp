/*

Statement: - A command to instruct the computer to take a certain action.
Expression: - A function that returns a value.

-----------------------------------------------------------------------------------------------------------------------------------------------------------
Identifiers:	- Tokens used to give recognisable names to variables functions labels and defined types. 
				- They consist of the ISO Latin alphabet, Western Arabic Numerals and ASCII Underscore.
				- Identifiers can be any length but only the first 63 characters are cheeked for uniqueness, and only the first 31 characters are cheeked for external identifiers, so identifiers 
				  should be less than 31 characters.

------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------
Chapter 4
------------------------------------------------------------------------------------------------------

Scope: - Where an identifier is visible.

Storage Duration: - Determines when a variable is created and destroyed.

Storage class:	 - How and where the storage is allocated for the identifier.
				 - Auto is the default storage class and whose lifetime ends when execution leaves their scope and are recreated when executions enters their scope.
				 - Static storage (ie: static int a = 7) has a lifetime thats lasts untill the end of the program. If they are a local value then there lifetime persists when execution leaves their scope.
				 - Register storage (ie: register int a = 7) means it gives the compiler a hint to try and store the variable in a register of the processor rather than temporary storage space.
				   This results in the recalling the variable really fast. Modern Optimisers are often better at doing than programmers, so this should only be used if necassary.
				 - External storage class (ie: extern func(); ) will tell the compiler to link together the function/variable from another header file with the source file, so that the function/variable 
				   can be used in the source file. 

------------------------------------------------------------------------------------------------------
Chapter 5
------------------------------------------------------------------------------------------------------
Compiler:	- The Compiler is a package of several stages that will take place, before the code can become and executable program.
			- The steps for this are: Preprocessor --> Compiler --> Optimiser --> Linker.
			- Each of these steps are serperate and disinct, even though they are invoked by one command.

------------------------------------------------------------------------------------------------------
Chapter 6
------------------------------------------------------------------------------------------------------
Qualifiers:	- Qualifiers are use to change the default properties of variables. (i.e const static int = 42;, the "const static" is the qualifier) 
			- There are two types of qualifiers in C and C++, type qualifiers and storage class specifiers.

Storage Class Specifiers	- Storage Class Specifiers consists of static (Objects stored in static memory have life beyond the execution of a block), register (Register variable are stored in process registers.
							  This qualifier is taken as a suggestion by the compiler as the compiler may or may not stored the variable in the process register) and finally extern (Extern variable are defined
							  in a seperate translation unit and are linked together as linked time).

Type Qualifier - The type qualifiers include const (Which make the variable cannot be changed), volatile (Which mark the object that may be changed by another process) and lastly mutable (Which is used to modify
				 a data member from a const qualified member function, this is only avaliable in C++)

Bit Fields - Bit fields provide the ability to pack multiple values into less space than they would normally take.

------------------------------------------------------------------------------------------------------
Chapter 8
------------------------------------------------------------------------------------------------------
Functions:	- Functions are blocks of codes that may be called by and may return values to other code.
			- Functions allow you generalise and modularise your code, by creating containers for logical subsets of code and by allowing code to be reused.

------------------------------------------------------------------------------------------------------
Chapter 9
------------------------------------------------------------------------------------------------------
Classes:	- Classes are like custom data types, they are designed to be used just like the fundamental types used in the C++ language.
			- The definition of a class using the "class" keyword is the class itself. You can use the class to declare an object. The object is also called an instance of the class.
			- Sometimes you will hear the word instantiate to describe the process of creating an object.
			- C++ classes are based upon the C struct. In fact the C++ class is identical to the struct execpt for one difference. 
			  In a struct members default to public access, whereas in a class members default to a private access.
			- 

Members:	- Members are contents of an object.
			- There are two types of members:
				- Data members are members that represent the encapsulated data. Data members are sometimes called properties.
				- Function members are members that represent functions that are associated with the class. Function members are sometimes called methods.

Constructors		- Constructos and destructors are special function members that are called when an instance of an object is created or destroyed respectively.
and destructors		- A consturctor is called when an object is created. There may several constructor defined but only one is called depending of how the object is created.
					- A destructor is called when an object is destroyed. Thre may only be one destructor defined.

------------------------------------------------------------------------------------------------------
Name:		- What is it? i.e Event, Document Employee
			- Sometimes referred as the "type".

Attributes:	- What describes it? i.e Width, Height, Colour, FileType
			- Sometimes referred as the "properties" or "data".

Behaviour	- What can it do? i.e Play, Open, Save, Create, Delete
			- Sometimes referred as the "operation".

Objects:	- Objects in a program are self contained, ie they have identies seperate from other objects. 
			- They also have there own attributes, information that describes there current state, as well as behaviour that describes what it can do.
			- Objects in a program are typically things that are considered nouns and not always physical/visible items, i.e arrays.

Class:		- A class describes what an object will be, but is not the object iteself, like a blueprint.
			- So we can define a class once (like a blueprint), and then create 1000's of objects based from the one class.
			- A class has a name, and also describes the attributes and the behaviour of the class.













*/