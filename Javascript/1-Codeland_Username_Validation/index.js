function CodelandUsernameValidation(str) {
  // code goes here
  if (str.length > 3 && str.length < 25) {
    let key = /[A-Za-z]+[\w_]+/g.test(str);
    return key
  }
  else return false
}

// keep this function call here 
console.log(CodelandUsernameValidation('testeri_____no')); //return true