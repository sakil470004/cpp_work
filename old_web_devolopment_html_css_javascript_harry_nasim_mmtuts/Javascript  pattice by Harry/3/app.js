// for(let i=0; i<100; i++){
//     console.log(i);
// }

// let j = 0;
// while(j<10){
//     console.log(j+1);
// j++;}



// let k = 110;
// do{
//     console.log(k+1);
//     k++ ;

// }while(k<10);

// let arr = [2,5,6,7,30,20,"Sakil","DOne"]
// for(let= i = 0; i < arr.length; i++){
//     const element = arr[i];
//     console.log(element)
// }

let obj = {
    name: "Mynul Islam",
    age:19,
    type:"A programmer",
    os:"Kali Linux"
}
for(let key in obj){
    console.log(`The ${key} of object is ${obj[key]}`)
}