//conditional Statements
//var y = 50;
//var x = 10;
/*if(x == 10 || y < 20){ //one of them true
  console.log("If!");
}*/
/*if(x == 10 && y < 20 ) {//Both need true
    console.log("If!");
}
else{
      console.log("Else!");
}*/

/*if(x == 10 && y < 20 ) {//Both need true
    console.log("If!");
}
else if(x < 50){
      console.log("Else if!");
}
else{
  console.log("Else!");
}*/
var gender = "Male";
var age = 18;
if (gender == "Male"){
  if (age >= 18){
    console.log("You are a "+ gender +" and above the age limit!");

  } else {
    console.log("Sorry dude!");
  }
} else if (gender == "Female") {
  if (age >= 18){
    console.log("You are a "+ gender + " and above the age limit");
  } else {
    console.log("Sorry lady!");
  }
} else {
  console.log("can't figer out your gender!");
}
