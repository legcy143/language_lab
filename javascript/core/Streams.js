console.log("har har mahadev")

import { Readable }  from 'stream';

const data = ['Hello', 'World'];
const readableStream = new Readable({
  read() {
    if (data.length === 0) {
      this.push(null); 
      // Signals the end of the stream
    } else {
      this.push(data.shift()); 
      // Pushes the next chunk of data to the stream
    }
  }
});