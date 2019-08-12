#include <iostream>
#include <string>
using namespace std;
int main(){
 // if(36){
 // cout << "36 is true!" << endl;
 // }else
 // cout << "36 is false!" << endl;
 // if(0){
 // cout << "0 is true!" << endl;
 // }else
 // cout << "0 is false!" << endl;
 // if(!(5<=4+1)){
 // cout << "!5<=4+1 is true" <<endl;
 // }else
 // cout << "!5<=4+1 is false" <<endl;
 // if((-1)<0<1){
 // cout << "-1<0<1 is true" <<endl;
 // }else{
 // cout << "-1<0<1 is false" <<endl;
 // }
 // int x = 0;
 // if(x==5){
 // cout << "x=5 is true" <<endl;
 // }else{
 // cout << "x=5 is false" <<endl;
 // }
 // bool condition;
 // condition = (6<7);
 // if(!(condition)){
 // cout << "!(6<7) is true!" << endl;
 // }else{
 // cout << "!(6<7) is false!" << endl;
 // }
 // if(true || false){
 // cout << "true || false is true" <<endl;
 // }else{
 // cout << "true || false is false" <<endl;
 // }
 // if(true || true){
 // cout << "true || true is true" <<endl;
 // }else{
 // cout << "true || true is false" <<endl;
 // }

 // char grade;
 // cout << "enter grade: " << endl;
 // cin >> grade;
 // switch (grade) {
 //   case 'A':
 //   cout << "Amazing job!" << endl;
 //   break;
 //   case 'B':
 //   cout << "Great work!" << endl;
 //   break;
 //   case 'C':
 //   cout << "You pass, good job!" << endl;
 //   break;
 //   case 'D':
 //   cout << "You pass, but barely" << endl;
 //   break;
 //   case 'F':
 //   cout << "You need to to improve!!" << endl;
 //   break;
 //   default: cout << "That is not a valid grade" << endl;
 // }
string parent1;
string parent2;
cout << "Enter alleles of first parent: " << endl;
cin >> parent1;
cout << "Enter alleles of second parent: " << endl;
cin >> parent2;

if(parent1 == "GG"){
  if(parent2 == "GG"){
    cout << "GG 100%" << endl;
  } else if(parent2 == "Gg"){
    cout << "GG 25%, Gg 50%, gg 25%" << endl;
  } else cout << "Gg 100%" << endl;
} else if(parent1 == "Gg"){
  if(parent2 == "Gg"){
    cout << "Gg 100%" << endl;
  } else if(parent2 == "gg"){
    cout << "Gg 50%, gg 50%" << endl;
  }
} else cout << "gg 100%" << endl;

 return 0;
}
