#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
 
vector<int> primes;
 
// To get all the primes till sqrt(n)
void simpleSieve(int x)
{
  vector<bool> isPrime(x + 1, true);
  isPrime[0] = false;
  isPrime[1] = false;

  for (int i = 2; i * i <= x; i++)
  {
      if (isPrime[i])
      {
          for (int m = i * i; m <= x; m += i)
          {
              isPrime[m] = false;
          }
      }
  }

  for (int i = 2; i <= x; i++)
  {
      if (isPrime[i])
      {
          primes.push_back(i);
      }
  }
}

// To get primes in the segments (by looping through the list of primes made using simple sieve) 
void segmentedSieve(int low, int high, vector<int> &ans)
{
  vector<int> isPrime(high - low + 1, true);
  for (int p : primes)
  {
      // To find first multiple of p
      int s = low / p * p;
      if (s < low)
      {
          s += p;
      }

      // Cancelling out the factors of p
      for (int i = s; i <= high; i += p)
      {
          isPrime[i - low] = false;
      }
  }

  for (int i = 0; i < isPrime.size(); i++)
  {
      if (isPrime[i])
      {
          ans.push_back(i + low);
      }
  }
}
 
int main()
{
  primes.clear();

  int n;
  cout<<"Enter the number: ";
  cin >> n;
 
  simpleSieve((int)floor(sqrt(n)));
 
  vector<int> ans;
 
  // For every segment, we call segmentedSieve()
  int updateVal = floor(sqrt(n));
  for (int l = 2; l < n; l += updateVal)
  {
      int r = min(l + updateVal - 1, n - 1);
      segmentedSieve(l, r, ans);
  }

  for (int p : ans)
  {
      cout << p << " ";
  }
  cout << endl;
}