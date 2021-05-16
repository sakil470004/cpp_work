//object Literal for creating objects
// let car = {
//     name:"Maruti 800",
//     topSpreed:89,
//     run :function(){
//         document.write("car is runnig");
//     }

// }
// car.run()


//Creating a constructor for cars
function GeneralCar (givenName, givenSpreed){
    this.name =givenName;
    this.topSpreed = givenSpreed;
    this.run = function(){
        document.write(`${this.name} is running`);
    }
    this.analyze = function(){
        document.write(`This car is slower by ${200 - this.topSpreed} km/H than Marcedes`)
    } 
}
car1 = new GeneralCar("Nissan",180);
car2 = new GeneralCar("Maruti Alto",80);

car2.analyze()