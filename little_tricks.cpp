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
