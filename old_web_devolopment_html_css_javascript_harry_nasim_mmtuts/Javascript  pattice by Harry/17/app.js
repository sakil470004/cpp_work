// // this is a comment


// document.write("Hello world<br>");
// document.getElementById("th").innerHTML="This is a paragrap";
// var a1 = 4;
// var a11 = 5;
// var a2 = "This is me";
// document.write(a1 + a11 , "<br>");
// document.write(a1,a11 , "<br>");
// console.log("This is console");
// //console.log is used for debbugging purposes and 
// //var age = prompt("Tell me Your age");
// // alert("your age is ",age);
// document.write("5+9=",5+9,"<br>");
// document.write("5-9=",5-9,"<br>");
// document.write("5*9=",5*9,"<br>");
// document.write("5/9=",5/9,"<br>");

//app-1

// var foodcost = prompt("What is the total amount");
// var person = prompt("How many person there");
// document.write("The total cost of food was ", foodcost,"<br>");
// document.write("each one of you has to pay ", (foodcost/person).toFixed(2),"<br>");

// mathFunction
// document.write("2^9= ", Math.pow(2,9),"<br>");
// document.write("abs(-34)= ", Math.abs(-34),"<br>");
// document.write("sqrt(36)= ", Math.sqrt(36),"<br>");

//string Function
// var str1 = "Code with Sakil";
// document.write(str1.length,"<br>");
// document.write(str1.indexOf("with"),"<br>");
// document.write(str1.slice(2,5),"sakil<br>");
// document.write(str1.replace("Sakil","Mrs.Sakil"),"<br>");
// document.write(str1.toUpperCase(),"<br>");
// document.write(str1.toLowerCase(),"<br>");



//relationl Opertor and logical operator
// var age = prompt("What is your age");
// if(age<20 && age>=10){
// document.write("You go to the school")
// }

//     else if (age<10 && age>3){
// document.write("You also go to school");
//     }
//     else{
//         document.write("Do whatever you want")
//     }

//switch;
// var age = prompt("what is your age?");
// switch(age)
// {
//     case "22":
//         document.write("22 Years old..okay")
//         break;
//     case "12":
//             document.write("12 Years old..okay")
//             break;

//     default:
//          document.write("default Years old..okay")
//          break;
// }

// var i =1 ;
// while(i<=100){
//     document.write(i,"<br>");
//     i++;
// }

// var i =1 ;
// do{ document.write(i,"<br>");
// i++;
// }while(i<=100)

// for(var i = 0 ; i<10; i++){
// document.write(i,"<br>");
// }

// var books =["harry potter", "necet" ,80]
// document.write(books[2],"<br>");
// document.write(books[0]);

function sakil(){
    document.write("You are calling Sakil");
    console.log("We have executed sakil function");
}
sakil();