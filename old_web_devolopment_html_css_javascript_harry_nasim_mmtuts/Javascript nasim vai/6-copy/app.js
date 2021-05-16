document.querySelector("#clickbutton").addEventListener("mousedown",function(){
document.querySelector("#demo").innerHTML="Hello!";
this.classList.add("SakilClass")
});
document.querySelector("#clickbutton").addEventListener("mouseup",function(){
  document.querySelector("#demo").innerHTML="";
});
