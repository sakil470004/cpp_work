function Person(name, eyeColor ,age) {
  this.name = name;
  this.eyecolor = eyeColor;
  this.age = age;
  this.updateAge = function(){
    return ++this.age;
  }
}
let person01 = new Person("Sakil" ,"Black", 18);
console.log(person01.updateAge());
console.log(person01);
let person02 = new Person("Tanbir" ,"Black", 16);
console.log(person02);
