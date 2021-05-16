document.querySelector("#loginFrom").addEvenListener("submit",function(){
var pwd = document.querySelector("#password").value;
var countpwd = pwd.length

if(countpwd!= 8){
  alert("Your password Should be equal to 8 characters");
}
});
