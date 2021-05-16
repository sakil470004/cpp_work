console.log("This is tute 20");
let inpArray = ["mango","banana","apple"];
localStorage.setItem( "Name" ,"Harry");
localStorage.setItem("Name2", "Sakil");
localStorage.setItem("fruts","inpArray")
//clear all storage
//  localStorage.clear();
localStorage.removeItem("Name")//it's delet a single storage element
let name = localStorage.getItem("Name2");

console.log(name)
sessionStorage.setItem("sessionName", "sHarry");
sessionStorage.setItem("sessionName2", "sSakil");
sessionStorage.setItem("sessionApple",JSON.stringify(inpArray));
//sessionStorage.clear
