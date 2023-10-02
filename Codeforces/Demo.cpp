# include<bits/stdc++.h>
using namespace std;
int main(){
       

       int t;
       cin>>t;

       while(t--){
           
           int n ;
           cin>>n;     // totsl sets
      
      set<int>s;
      vector<set<int>>a(n);
              for(int j=0;j<n;j++){
                  
                int m;cin>>m;   // size of each set

                for(int i=0;i<m;i++){
                  int c=0; cin>>c;
                  s.insert(c);
                  a[j].insert(c);
                }
        
             }

int rws=0;
          
          for(int i:s){

            set<int>mp;
            for(int j=0;j<n;j++){

                if(a[j].find(i)==a[j].end()){
                       
                       for(auto f :a[j]) mp.insert(f);
                }
            }
            rws=max(rws,(int)mp.size());
          }

          cout<<rws<<endl;
        }
       return 0; 
}