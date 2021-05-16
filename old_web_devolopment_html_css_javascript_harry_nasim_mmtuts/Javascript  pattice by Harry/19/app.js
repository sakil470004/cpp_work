console.log("Need a make a apps");
class Employee{
    constructor(givenName, givenExperience ,givenDivition){
        this.name= givenName;
        this.experience = givenExperience;
        this.divition = givenExperience;

    }
    slogan(){
        return `I am ${this.name} and This company is best`;

    }
    joiningYear(){
        return 2020 -this.experience;

    }
    static add(a,b){
        return a+b;
    }
    static multipy(a,b){
        return a*b;
    }
}
class programmer extends Employee{
    constructor(givenName,givenExperience,givenDivition,language,github){
    super(givenName, givenExperience,givenDivition);
        this.language=language;
        this.github = github;
}
    favoriteLanguage(){
        if(this.language=="pythone"){
            return "Pythone";
        }
        else{
            return "JavaScript"
        }
    }
    static multiply(a,b){
        return a*b;
}}
// sakil = new Employee("Sakil",2,"Divition");
// console.log(sakil.joiningYear());
// console.log(Employee.add(34, 5));
// console.log(Employee.multipy(7,5));

tanbir = new programmer ("Tanbir","2 years","Layers","Tanbir404")
console.log(tanbir);
console.log(tanbir.favoriteLanguage());
console.log(programmer.multiply(5,7));