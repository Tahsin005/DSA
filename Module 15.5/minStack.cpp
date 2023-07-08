// #include <bits/stdc++.h>
// class minStack {

// public:
//   stack<int> st;
//   stack<int> min;
//   minStack() {}

//   void push(int num) {
//     st.push(num);
//     if (min.empty() || num <= min.top()) {
//       min.push(num);
//     }
//   }

//   int pop() {
//     if (st.empty()) {
//       return -1;
//     } 
// 	else {
//       int value = st.top();
//       st.pop();
//       if (value == min.top()) {
//         min.pop();
//       }
//       return value;
//     }
//   }

//   int top() {
//     if (st.empty()) {
//       return -1;
//     } 
// 	else {
//       return st.top();
//     }
//   }

//   int getMin() {
//     if (st.empty()) {
//       return -1;
//     } 
// 	else {
//       return min.top();
//     }
//   }
// };