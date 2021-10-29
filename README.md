# simpleuserprofile
Display a simple user profile in C++
It demonstrates the use of cin for integers and single phrase Strings and getline() for multiple phrase Strings.
Notice the use of cin.ignore() function before getline() and after cin
getline() was not working if it is used after cin input until I included cin.ignore()
When cin.getline() reads from the input, there is a newline character left in the input stream, so it doesn't read your c-string. Use cin.ignore() before calling getline().
This is such an important thing and is not mentioned in many of the websites explaining the functionality of getline().
