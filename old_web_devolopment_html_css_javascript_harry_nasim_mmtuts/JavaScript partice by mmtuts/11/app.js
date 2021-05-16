/*let box =document.querySelector(".box");
let newElement = document.createElement("a");
let newContent = document.createTextNode("This is a link!");
newElement.appendChild(newContent);
box.appendChild(newElement);
newElement.setAttribute("href", "www.google.com")
*/
let box =document.querySelector(".box");
let newElement = document.createElement("a");
newElement.append("This is a link")
box.appendChild(newElement);
newElement.setAttribute("href", "www.google.com")
