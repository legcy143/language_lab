// Creating a Map
const map = new Map();

// Adding entries to the Map
map.set('key1', 232);
map.set('key2', 'value2');
map.set('key3', 'value3');

// Accessing values using keys
console.log(map.get('key1')); // value1
console.log(map.get('key2')); // value2

// Checking if a key exists in the Map
console.log(map.has('key3')); // true
// Deleting an entry from the Map
map.delete('key3');
console.log(map.has('key3')); // false

console.clear();
const map2 = new Map();
const map3 = new Map()
map2.set('key1', 232);
map2.set('key2', 232);
map3.set('key1', 232);
map3.set('key2', 232);
// console.log(map2.get('key1'))
console.log(map2 ," ---- ", map3)
console.log(map2 === map3)