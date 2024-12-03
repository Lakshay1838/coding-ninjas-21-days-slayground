// {valid parenthesis : }
// step 1: declare a char stack to store characters and check.
// step 2: if(current character is then opening bracket of any type push.
// step 3: else check
//  if empty or the current bracket is closing bracket and the 
//  top of stack is not the closing bracket of same type then return false;
//  else pop the element.
// step 4: at last if stack is empty then true else return false;
//  (if not empty means the brackets are not balanced)

bool isValidParenthesis(string s)
{
    // Write your code here
    stack<char> st;
    
    for(char ch:s){
            if(ch== '(' || ch == '{' || ch == '['){
                st.push(ch);
            }
            else{
                if(st.empty() || 
                  (ch == ')' && st.top() != '(') ||
                  (ch == '}' && st.top() != '{') ||
                  (ch == ']' && st.top() != '[')
                ){
                    return false;
                }else{
                    st.pop();
                }
            }
    }
    if (!st.empty()) {
            return false;
        }
    return true;
}