// class Solution {
// public:
//     int calPoints(vector<string>& operations) {
//         stack<int> ui;
//         int sum = 0;
//         for (int i = 0; i < operations.size(); i++) {
//             if (operations[i] == "+") {
//                 int c1 = ui.top(); ui.pop();
//                 int c2 = ui.top();
//                 ui.push(c1);
//                 int val = c1 + c2;
//                 ui.push(val);
//                 sum += val;
//             } 
//             else if (operations[i] == "D") {
//                 int val = 2 * ui.top();
//                 ui.push(val);
//                 sum += val;
//             }
//             else if (operations[i] == "C") {
//                 sum -= ui.top();
//                 ui.pop();
//             }
//             else {
//                 int val = stoi(operations[i]);
//                 ui.push(val);
//                 sum += val;
//             }
//         }
//         return sum;
//     }
// };