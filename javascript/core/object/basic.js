/*
  defination : 
    In JavaScript, an object is a collection of key-value pairs where each key is a string (or symbol) and each value can be any data type, including other objects, functions, and primitive types (such as strings, numbers, booleans, etc.). Objects in JavaScript are fundamental to the language and are used extensively to represent complex data structures and organize code
 */

// object can create using constructer function , class  etc

// Using constructor function  to create an object
function User(name) {
  this.name = name;
  this.message = function () {
    console.log("lot's of love from " + this.name);
  };
}

const user = new User("prince");
