document.querySelector("#myInput").addEventListener("keyup",function(){
  document.querySelector("#demo h1").innerHTML = this.value;
});
