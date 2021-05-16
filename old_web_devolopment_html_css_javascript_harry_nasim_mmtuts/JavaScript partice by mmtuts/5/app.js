var item = "Bottle of water";
console.log(item.length);
console.log(item.indexOf("of"));
console.log(item.substring(7, 9));
console.log(item.replace("water","Juice" ));
console.log(item.toUpperCase());
var items = ["Bottle" , 4 , true]
console.log(items.join(" - "));

items.pop();//it remove last data
console.log(items);
items.push("Juice");
console.log(items);
