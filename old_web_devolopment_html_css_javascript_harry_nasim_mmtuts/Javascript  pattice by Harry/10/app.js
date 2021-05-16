let btn = document.querySelector("button");
btn.addEventListener("click" , func1);
btn.addEventListener("dblclick" , func2);

function func1(e){
    console.log("Thanks",e);
    e.preventDefault();
}
function func2(e){
    this.style.backgroundColor = "blue";
    e.preventDefault();
}