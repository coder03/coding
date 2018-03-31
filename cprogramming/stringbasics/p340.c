// information file

char *p = "Hello"  // pointer is variable and string is variable
*p = 'C';	// works
p = "bye"	// bye

///////////////////////////////////////////////////////////////////////

const char *p = "Hello"; // string is fixed and prointer is not
*p = 'C'	// error
p = "bye"	// works

///////////////////////////////////////////////////////////////////////

char const *p = "Hello"; // pointer is fixed and string is not
*p = 'C'	// works
p = "Bye"	// error

//////////////////////////////////////////////////////////////////////

char * const t = "Hello" // pointer is fixed and string is not
const char * const u = "Hello" // pointer is fixed and so is string

