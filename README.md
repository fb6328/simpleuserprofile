# simpleuserprofile
Display a simple user profile in C++. 
It demonstrates the use of cin for integers and single phrase Strings and getline() for multiple phrase Strings or sentences. 
Notice the use of cin.ignore() function before getline() and after cin. 
getline() was not working properly if it is used after cin input until I included cin.ignore(). 
This is because when cin.getline() reads from the input, there is a newline/white space character left in the input stream (cin newline/white space space characters and leaves it in the stream as garbage), so it doesn't read your c-string. Use cin.ignore() before calling getline(). Alternatively, use ws in getline() as follows getline(cin>>ws,favmovie); cout << endl;
This is such an important thing and is not mentioned in many of the websites explaining the functionality of getline().
