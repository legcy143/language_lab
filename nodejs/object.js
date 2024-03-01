// Creating an object using object literal notation
const person = {
    name: 'John',
    age: 30,
    email: 'john@example.com',
    sayHello: function() {
        console.log('Hello, my name is ' + this.name);
    }
};