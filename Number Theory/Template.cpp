/*
Description: Given a and b. Finds two integers x and y, 
such that ax + by = n. 
*/
for (i = 0; a*i <= n; i++) { 
    if ((n - a*i) % b == 0) 
        return i, (n - a*i) / b; 
} 
return -1; 

/*
If a number n has an odd divisor, then it has an odd prime divisor. 
If a number has no odd divisors, then it must be a power of two. 
       • Check Power of two: n&(n-1) == 0 
*/

/*
Only perfect square number has odd number of divisors. 
Otherwise every number has even number of divisors.
*/ 

/*
Given a number X, repeatedly replace it with the sum of its digits until 
it becomes a single-digit number. 
The final single-digit result will be:
      ((X-1) mod 9) + 1
*/

/*
The smallest divisor of any number except 1 is a prime number.
*/

/*
Any number can be represent as a multiples of prime numbers
              28-> 2*2*7
*/

/*
Any even number except 2 can be represent as a sum of 2 prime numbers.
For odd numbers if n-2 is is prime then 2 and n-2 both prime. Or remove 3 and n becomes even. 
Now n can be represent as a sum of 3 prime numbers.
    N= 8 (3+5)
    N=9 (7+2) n-2 is prime so..
    N = 27 (3 + 5 + 19) removed 3 to make even
*/

/*
Sum of all the odd numbers between 1 to n equal to the square of ((n+1)/2)
        1+3+5+7...+n = ((n+1)/2)^2
*/

/*
sum (n^3) = (sum(n))^2
ex: 1^3 + 2^3 + 3^3 = (1 + 2 + 3) ^ 2
*/

/*
In an n + 1 length array, 
you will find at least one subarray whose sum is divisible by n.
*/

/*
For any positive integer N, the sum of all integers 1<=i<N , where GCD( i, N )==1 is N*𝜙(N)/2 
*** 𝜙(𝑁) is Euler's totient function, 
    which counts how many integers less than 𝑁 are coprime to 𝑁 (i.e., gcd(𝑖,𝑁)=1).
    Let’s take 𝑁=10
    ϕ(10)=4 (numbers coprime to 10: 1, 3, 7, 9)
    Sum = 1+3+7+9=20 
    Formula gives: 10*4/2=20
*/

/*
(n - 2)! mod n = 1 if and only if n is a prime number.
*/

/*



/*
নাম্বার থিওরির দারুন কিছু ফ্যাক্ট বা বৈশিষ্ট্য নিয়ে আলোচনা করা যাক যা সমাধান করার সময় গুরুত্বপূর্ণ হতে পারে:
1. **Contiguous Integers**: আপনার উদাহরণটি অত্যন্ত তথ্যবহুল। আসলে, \( n(n+1)(n+2)(n+3) + 1 \) 
সত্যিই একটি বর্গমূলে পরিণত হয়। এটি চারটি ধারাবাহিক পূর্ণ সংখ্যার গুণফলের উপর নির্ভর করছে এবং বিশেষ কিছু সংখ্যার জন্য সত্য।

2. **Perfect Squares**: যে কোনও পূর্ণ সংখ্যা \( n \) এর জন্য, \( n^2 - (n-1)^2 = 2n - 1 \) সেই \( n \)-থে সংখ্যা হতে পারে। 
অর্থাৎ, ধারাবাহিক দুইটি বর্গের মধ্যে পার্থক্য হতে পারে যা একটি অদ্ভুত সংখ্যা।

3. **Sum of First n Natural Numbers**: \( 1 + 2 + 3 + ... + n = \frac{n(n + 1)}{2} \) 
এবং এটি একটি ট্র্যাপিজয়েডের ক্ষেত্রফল হিসেবেও বিবেচিত হতে পারে।

4. **Fermat's Little Theorem**: যদি \( p \) একটি মৌলিক সংখ্যা এবং \( a \) মৌলিক সংখ্যা \( p \) দ্বারা বিভাজ্য না হয়, 
তাহলে \( a^{p-1} \equiv 1 \mod p \)।

5. **Divisibility Rules**: বিভিন্ন সংখ্যা সম্পর্কে বিভাজ্যতার নিয়ম অনেক কাজে লাগে। 
যেমন, একটি সংখ্যা 3 দ্বারা বিভাজ্য হলে, তার অঙ্কগুলোর যোগফল 3 দ্বারা বিভাজ্য হতে হবে।

6. **Goldbach's Conjecture**: প্রতিটি পূর্ণ পজিটিভ সংখ্যার জন্য \( n \geq 2 \), \( n \) কে 
দুটি মৌলিক সংখ্যার যোগফল হিসেবে লেখা সম্ভব।

7. **Congruences**: \( a \equiv b \mod m \) মানে হল \( m \) দিয়ে বিভাজিত হলে \( a \) এবং \( b \) 
একই অবস্থা প্রকাশ করে। এই সূত্র মানি সংখ্যার অনেক সমস্যার সমাধানে গুরুত্বপূর্ণ।

8. **Chinese Remainder Theorem**: যদি \( m_1, m_2, ..., m_k \) মৌলিক সংখ্যা হয় এবং 
\( a_1, a_2, ..., a_k \) পূর্ণ সংখ্যা হয় তবে \( x \equiv a_i \mod m_i \) এই সূত্র বাতলে পূর্ণ সংখ্যার একটি সমাধান পাওয়া যায়।

9. **Sum of Divisors Function**: \( \sigma(n) \) একটি সংখ্যার সকল বিভাজকের যোগফল প্রতিস্থাপন করে 
এবং এটি বিভিন্ন গাণিতিক সমস্যায় একটি গুরুত্বপূর্ণ ভূমিকা পালন করে।

10. **Euler's Totient Function**: এটি মৌলিক সংখ্যা দিয়ে যত সংখ্যার গুণফল থাকে তার সাথে মৌলিক সংখ্যা যোজনার জন্য বিশেষভাবে ব্যবহৃত হয়।
*/
