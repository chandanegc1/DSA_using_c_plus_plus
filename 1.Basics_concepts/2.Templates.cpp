#include<bits/stdc++.h>
using namespace std;

void learnPair(){
    pair<int ,int>p = {3,4};
    // cout<<p.first<<" "<<p.second<<"\n";

    pair<int , pair<int , int>>q = {3 , {2 ,3}};
    // cout<<q.first<<" "<<q.second.first<<"\n";

    pair<pair<int , int> , pair<int , int>>x = {{1,3} , {2 ,3}};
    // cout<<x.first.first<<" "<<x.second.first;

    pair<int ,int>arr[] = {{3,4} , {1,2}, {4,5}};
    cout<<arr[0].first<<" "<<arr[0].second<<"\n";
    cout<<arr[1].first<<" "<<arr[1].second<<"\n";
    cout<<arr[2].first<<" "<<arr[2].second<<"\n";
}

void learnVector(){
   //   vector is container which is dynamic in nature ,contain similer types of data type.
   //   Iterator is pointing the memory location where vector element are allocated. 
   //   begin()-Pointing the memory location of first element of vector(use in iterator). 
   //   end()-Pointing the memory location after last element of vector(use in iterator).
   //   rend()-Pointing the memory location after first element of vector(use in iterator).
   //   back()-Pointing the last element of vector(also use without iterator & with iterator).
   //   rbegin()-Pointing the memory location of last element of vector(use in iterator for reverse the vector).
   //   iterator is a data type ( vector<int>::iterator it = v.begin(); ).

   vector<pair<int , int> >x ={{2,3} , {4,5}};
   cout<<x[0].first<<" "<<x[0].second<<"\n";
   cout<<x[1].first<<" "<<x[1].second<<"\n";


   vector <int> v = {1,2,3,4 ,9};
   v.push_back(8);
   v.emplace_back(4); // faster than push_back
   v.emplace_back(5); // faster than push_back
   cout<<v[0]<<v[1]<<"\n";



   vector<int>::iterator it = v.begin();
   cout<<*(it)<<" \n";

//    for(vector<int>::iterator it = v.begin() ; it!=v.end() ; it++){
//       cout<<*(it)<<" ";
//    }

//    for(auto it = v.begin() ; it!=v.end() ; it++){
//       cout<<*it;
//    }


   v.erase(v.begin() , v.begin()+2);

   v.pop_back(); // removing from last emelement from the vector

   for(auto it :v ){
    cout<< it <<" ";
   }

   cout<<v.size()<<"\n"; // size of vector


   vector<int> vi(5 ,100);
   vi.insert(vi.begin() , 500); //take addrs of vector and element 

   for(auto it:vi){
    cout<<it<<" ";
   }

}

void learnList(){
    // dynamic , internal operation doubly linked-list

    list<int>ls;
    ls.push_back(2);
    ls.emplace_back(4);

    ls.push_front(4);
    ls.emplace_front();

    // same as vector all operations
    // begin , end , rbegin , rend ,clear , size , swap

}

void learndque(){
    // dynamic , internal operation doubly linked-list

    deque<int>ls;
    ls.push_back(2);
    ls.emplace_back(4);

    ls.push_front(4);
    ls.emplace_front();

    ls.front();
    ls.back();

    // same as vector all operations
    // begin , end , rbegin , rend ,clear , size , swap

}

void learnstack(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.emplace(8);

    cout<<st.top()<<"\n";

    st.pop();

    cout<<st.empty()<<"\n";

    cout<<st.size()<<"\n";

    stack<int>st1 ,st2;

    st1.swap(st2);

}

void learnqueue(){
    queue<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.emplace(8);
    st.emplace(8);

    st.back() +=5;
    st.front();

    st.pop();

    cout<<st.empty()<<"\n";

    cout<<st.size()<<"\n";

    queue<int>st1 ,st2;

    st1.swap(st2);
    

}


void learnpriorityqueue(){
    priority_queue<int> st; // max-heap property , always store value in sorted
    st.push(5);
    st.push(3); //log(n)
    st.push(9);
    st.push(4);
    st.push(1);
    st.emplace(8);
    st.emplace(8);

    st.pop(); //log(n) bsz of sorting in every dletion & insertion

    cout<<st.empty()<<"\n";
    cout<<st.top()<<"\n";  //log(1)
    cout<<st.size()<<"\n";

    priority_queue<int>st1 ,st2;
    st1.swap(st2);


    priority_queue<int , vector<int> , greater<int>>pq;

    pq.push(1);
    pq.push(2);
    pq.push(2);
    pq.emplace(3);

    cout<<pq.top();

}

void learnset(){
    set<int>s;  // unique , vector like , log(n)
    s.insert(1);
    s.insert(2);
    s.insert(3);

    // functionality of insert in vector
    // begin() , end() , rend() , ebegin() , size()
    // empty() , swap() are same as vector

    auto it1 = s.find(2);

    auto it2 = s.find(6);  //s.end()

    s.erase(3); //log(1)

    int ct = s.count(2); //occurance of no. in set true , if not present in vector then 0 otherwise 1


    auto it3 = s.find(1);
    auto it4 = s.find(3);
    s.erase(it1 , it2);

    auto it5 = s.lower_bound(2);
    auto it6 = s.upper_bound(3);
}


void learnmultiset(){
    multiset<int>s;  // multiple value occure , vector like , log(n)
    s.insert(1);
    s.insert(2);
    s.insert(3);

    // functionality of insert in vector
    // begin() , end() , rend() , ebegin() , size()
    // empty() , swap() are same as vector


    s.erase(3); //log(1) , delele all elements 3's
    s.erase(s.find(2));  // delete single element
    s.erase(s.find(1)); //s.find(3));  // delete multiple  element

    int ct = s.count(2);  //occurance of no. in set true , if not present in vector then 0 otherwise 1


    auto it1 = s.find(1);
    auto it2 = s.find(3);
    s.erase(it1 , it2);

    auto it3 = s.lower_bound(2);
    auto it4 = s.upper_bound(3);
}

void learnunorderdset(){
    unordered_set<int>st; // like set but not in  order
}

void learnmap(){
    map<int , int>mp; // key and value , keys in always unique , in sorted (set) a/c key
    map<int , pair<int , int>>mpp1;
    map<pair<int , int> ,int >mpp; 

    mp[1] = 2;
    mp.insert({3 ,1});

    mpp[{3,2}] = 10;

    for(auto it: mp){
        cout<<it.first<<" "<<it.second<<" ";
    }

    cout<<mp[1];
    auto it = mp.find(3);

}

void learnmltimap(){
    //store multiple keys same
    //only mp[key] cannot be used here
}
void learnunorderedmap(){
    //same as set but not sorted
}
                            

                           // ALGORITHM

            bool comp(pair<int,int>p1 ,pair<int , int>p2){
                if(p1.second < p2.second) return true;
                if(p1.second > p2.second) return false;
                // they are same
                if(p1.first > p2.first) return true;
                return false;
            }

void algorithm(){
    // sort(a , a+n);
    // sort(v.begin() , v.end());

    pair<int,int> a[] = {{1,2} , {2,1} , {4,1}};
    // sort according to second element
    //if second element is same , then sort
    // it according to first element but in descending 

    // sort(a, a+n , comp);   //  {{4,1} ,{2,1} , {4,1}} ;

    int num =7;
    // int cnt = __builtin_popcount(); how many one in bit

    // long long num = 12394348574893;

    // int cnt = __builtin_popcount()

    string s = "123";
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(), s.end())); //print 6 permutation, o/p:-123 ,132 ,213 ,231 ,312 ,321

    // int maxi = *max_element(a ,a+n); max elelment in array
}


int main(){
    learnmap();
}
