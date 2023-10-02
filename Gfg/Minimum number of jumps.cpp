# include<bits/stdc++.h>
using namespace std;
int minJumps(int arr[], int n){
          
             if(n<=1)return 0;
             
              if(arr[0]==0) return -1;
              
             int steps=arr[0];
             int  reach =arr[0];
             int jump=1;
             
             for(int i=1;i<n;i++){
                   
                   if(i==n-1) return jump;
                   
                   reach= max(reach,i+arr[i]);   // clalculate reach maxreach for every i    
                   
                   steps--;
                   if(steps==0){
                       jump++;
                       steps=reach-i;                     //jump will only happen no more steps are avilable 
                       if(i>=reach) return -1;           // A case when i has alerdy crossed reach of steps 
                   }
                 
                 
             }
         
         return -1;
    }

int main(){
       
       //driver code gfg
       int arr[]={1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
       int n;
       minJumps(arr,n);

}