function GenaralCar(givenName , givenSpreed){
    this.name = givenName,
    this.topSpreed =givenSpreed
    this.run = function(){
        return `${this.name} is running `;

    }
    this.analyze =function(){
        return `${this.name} is slowre  ${230-this.topSpreed}km/H than sakil-car`
    }
}
 car1 = new GenaralCar("Maloti" ,100);
 car2 = new GenaralCar("Role Royes",150)
 document.write(car1.analyze())