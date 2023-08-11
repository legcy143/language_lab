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


console.log(Person.prototype)
console.log(abc.prototype)
console.log(String.fromCharCode)
console.log(String.prototype)

String.prototype.getName = function(){
    console.log("edit done "+this.String)
}

let a ="strPR"
a.getName();
