const fs = require('fs');

const file_path = './abc.txt';

fs.readFile(file_path, 'utf8', (err, data) => {
  if (err) {
    console.error('Error reading file:', err);
    return;
  }
  console.log("data " ,data)
  let res = JSON.parse(data)
  console.log(res)
});