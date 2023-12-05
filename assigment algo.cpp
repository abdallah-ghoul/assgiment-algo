#include<iostream.h>
#include<time.h>

unsigned long iterfactorial(unsigned long n){
	unsigned long sum=1;
	unsigned long i;
	for(i=1;i<=n;i++){
		sum*=i;
	}
	return sum;
}
unsigned long recurfactorial (unsigned long n){
	if (n <=1)
	return 1;
	return n*recurfactorial(n-1);
}
main(){
	clock_t startTime;
clock_t endTime;
startTime = clock(); 

	unsigned long n;
	unsigned long result;
	cout<<"please enter the value of the number you want to find factorial for"<<endl;
	cin>>n;
	result =iterfactorial(n);
	//result =recurfactorial(n);
	cout<<result<<endl;
	endTime = clock();
printf("Execution Time in Seconds: %f", ((double)endTime - startTime) / CLOCKS_PER_SEC);
	
}