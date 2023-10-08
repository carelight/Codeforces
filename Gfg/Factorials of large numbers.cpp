  //Now the problem is to find factorials of larger numbers 
  // 1- doing it by multipling till given N would not work as even long long int wil not be able to hold such large values

  // 2- now rather than multipling it 1 by 1 we will focus on finding in digits of that number by normal multiplipication 
      // just focus that each index shall have a single number and rest are  carry to next index 
       // let us say for 5 its 120 - 2*3 =6 , 4*6=24, 24*5 =120;
       //when we get 24  we will  store 24%10 and 24/10 to next index of our array;
         // for easy thinking think as you are multipling it as you did as a child but recursively
         // at next iteration  start will get multiplied by each digit of number required   ex  for start 2 4 *5we have at index 0 - 0 then 1- 2  and at last is 1   

 # include<bits/stdc++.h>
using namespace std;

vector<int> factorial(int N){
       vector<int>res;
       res.push_back(1);
       int start=2 , carry=0;
       
       while(start<=N){
           carry=0;
          for(int i=0;i<res.size();i++){
                int  temp = res[i]*start+carry;       //temp is value at ith multiplication example 120 is at 5th
               res[i] =temp%10 ;                            // store only last digit  0;
              carry= temp/10;                          //  12 is remaing value that  needs to fit in rest of array
          }
           
           while(carry>0){                    //       filling  remaning numbers 1 in each index for next ith muliplication
               
               res.push_back(carry%10);
               carry=carry/10;
               
           }
            start++;  
          
       }
       
       reverse(res.begin(),res.end());              // reverse at last  beacuse we were doing % and /    
       return res;
    }

int main(){

    int N= 879;
    vector<int> ans;
     ans=  factorial(N);
     // ans is all sepearte digits of required number usse it as per need 
}
