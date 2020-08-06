#include"prime.h"
#include<jni.h>
#include <iostream>

using namespace std;
bool isPrime(int n)
{

//Declaring a vector as a seive for checking if a number is prime or not.

/* 
As the size is (10^6 + 1)  we will be able to check numbers till 10^6 in order
to check more we can use maps to implement seive. 
*/

	int prime[1000001];

/*

prime[i] is 1 if i is prime or 0 of i is not prime.
As 0 and 1 are not prime we initialize them with 0 and rest all as 1 and we willmark other non primes 0 in our logic .

*/

 	prime[0]=0;
 	prime[1]=0;
	for(int i=2;i<1000001;i++)
		prime[i]=1;


/*
 seive marks all multiples of all prime numbers as as non primes, so that at 
 last we will be only left with primes.
  
*/
 	
 	for(int i=2;i*i<=1000000;i++)
 	{
 		if(prime[i]==1)
 		{
	 		for(int j=i;j*i<=1000000;j++)
	 		{
	 			prime[i*j]=0;
	 		}
 		}
 	}

//Our seive now contains the prime numbers marked as 1 and rest all marked as 0.
// Prime[i] is 1 if i is prime or 0 if is not prime.

//This logic helps us when we have multiple queries .

// Time complexity = O(nlog(log(n)))
// Space Complexity = O(n)

return prime[n];

}


