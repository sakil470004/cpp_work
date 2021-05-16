/*let calc = Math.floor((Math.random() * 10) +1);
console.log(calc);*/

/*let getRandomNumber = function(start , range){
  let getRandom = Math.floor((Math.random() * range) + start);
  return getRandom;

}
console.log(getRandomNumber(5 ,10));*/ //It's not correct becouse start number add his value 
let getRandomNumber = function(start , range){
  let getRandom = Math.floor((Math.random() * range) + start);

while (getRandom > range){
  getRandom = Math.floor((Math.random() * range) + start);
}
  return getRandom;
}
console.log(getRandomNumber(500 ,1000))
