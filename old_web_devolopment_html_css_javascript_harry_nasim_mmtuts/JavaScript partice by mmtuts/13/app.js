
let date = new Date();
let currentHour = date.getHours();
let createTexMsg;
if(currentHour >= 4 && currentHour < 10){
  createTexMsg = "Good morning!";

}
 else if(currentHour >= 10 && currentHour < 12){
  createTexMsg = "Good Day!";
}
else if(currentHour >= 12 && currentHour < 18){
 createTexMsg = "Good aftenoon!";
}

else if(currentHour >= 18 && currentHour < 22){
 createTexMsg = "Good evening!";
}

else if(currentHour >= 12 && currentHour < 18){
 createTexMsg = "Good night!";
} else {
  createTexMsg = "Are you from a different planet!";
}
document.querySelector(".goodTime").innerHTML = createTexMsg;
