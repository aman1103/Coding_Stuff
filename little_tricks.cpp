//To increase the precision of the output
float x=9.9999;
cout.precision(n);//n is the number of places of precision required
cout<<x<<endl;


// This converts the scientific notation to the regular notation
long long int n=1e18;
cout<<fixed;
cout<<n;

//The output will be 1000000000000000000
// Not 1e18


//Find the number of digits of a number without loop

number_of_digits =floor(log10(N)) + 1;//number of digtis of the number N 

//Finding if a number is odd or even

if (num & 1) //It is fater for bigger numbers 
   cout << "ODD"; 
else
   cout << "EVEN"; 

//To check if a number is a power of 2

bool isPowerOfTwo (int x) //Returns true if x is a power of 2 else false
{ 
  /* First x in the below expression is  
    for the case when x is 0 */
  return x && (!(x&(x-1))); 
} 

//Upper case English alphabet to lower case

ch |= ' ';//ch is a upper case english alphabet

//Lower case English alphabet to upper case

ch &= '_’ ;//ch is a lower case english alphabet
