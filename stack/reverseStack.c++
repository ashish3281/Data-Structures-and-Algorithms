#include<iostream>
#include<stack>
using namespace std;
void insert_at_bottom(stack <int> &st,int ele){
    if(st.empty()){
        st.push(ele);
        return;
        }
  int topele=st.top();
  st.pop();
  insert_at_bottom(st,ele);
  st.push(topele);
}

void reverse(stack<int> &st){
 if(st.empty()){
     return;
 }
 int ele=st.top();
 st.pop();
 reverse(st);
 insert_at_bottom(st,ele);
}
int main()
{
    stack<int>st;
    st.push(1);
     st.push(2);
      st.push(3);
       st.push(4);
       reverse(st);
       while(!st.empty()){
           cout<<st.top()<<endl;
           st.pop();
       }
       cout<<endl;

}