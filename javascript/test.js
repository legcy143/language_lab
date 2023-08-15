// Constructor function
function Person(name) {
    this.name = name;
}

// Adding a method to the prototype
Person.prototype.sayHello = function() {
    console.log(`Hello, my name is ${this.name}`);
};

class abc{
    constructor(userName){
        this.userName = userName;
    };
    getName(){
        console.log(`username ${this.userName}`)
    }
}

abc.prototype.fullName = function(){
    console.log("full name "+this.userName)
}

String.prototype.getName = function(){
    console.log("edit done "+this.String)
}

let a ="strPR"
// a.getName();

let abcd = !!!!!!!10;
// console.log(abcd)

let arr = [1 , 2 , 3 , 4]
let a2 = 23;
if(a2 in [21 ,12, 23]){
    console.log("is")
}

console.log([1 , 12 , 23].includes(a2))