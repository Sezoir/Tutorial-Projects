/*
	- C++ templates is what support generic programming.
	- Generic programming in terms of algorithms independent of types.
	- Generic programming refers to code independent of type, whilst C++ is a strongly typed language, there are still benefits in
	  writing functions and classes that are type agnostic, as in they operate on objects without concern for the type of the objects.
	- As C++ supports defining your own types though classes and operator overloading its possible to doa great deal with templates
	  whilst leaving implementation details to the classes and operators.
	- Templates declarations look similar to class and function declarations with one distinct difference they are precedded by 
	  the template keyword and a set of type identifiers.
	- These type identifiers are used as placeholds for the template code to be replaced during compluation with actual types.
	- When a function or class is instantiated from a template the compiler generates a specialisation of that function or class 
	  specifically suited for the types specified for the instantiation.
	- Templates are widely used in the C++ in the standard library which is why the libraray are called the standard template library.
	- The generic nature of template libraries makes them a perfect fit for use with containers.

	- The programming is not entirely without its downsides:
		- Overuse of the templates can lead to code bloat and longer build times as the compiler has to generate specialisations for
		  every template. The amount of code to support that template can grow rapidly with use.
		- Compilers tend to have a difficult time with generating sensible error messages with templates, so debugging can be
		  challenging.
		- Since templates tend to live in header files, changing to header files with templates can lead to recompliations of
		  a larger portion of your code than neccessary.
*/