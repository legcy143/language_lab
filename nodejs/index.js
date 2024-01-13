const fs = require('fs');
const PDFDocument = require('pdfkit');

// Example JSON data
const jsonData = {
  title: 'Sample PDF Document',
  content: 'This is a sample PDF generated from JSON data.',
  author: 'Your Name',
  date: new Date().toLocaleDateString(),
};

// Create a PDF document
const doc = new PDFDocument();

// Pipe the PDF content to a writable stream (in this case, a file)
const stream = fs.createWriteStream('document.pdf');
doc.pipe(stream);

// Add content to the PDF
doc.fontSize(16).text(jsonData.title, { align: 'center' });
doc.fontSize(12).text(`Author: ${jsonData.author}`, { align: 'center' });
doc.fontSize(12).text(`Date: ${jsonData.date}`, { align: 'center' });
doc.moveDown(); // Move down a line

doc.fontSize(14).text('Content:', { underline: true });
doc.fontSize(12).text(jsonData.content);

// Finalize the PDF document
doc.end();

// Handle the finish event to log when the PDF is generated
stream.on('finish', () => {
  console.log('PDF generated successfully.');
});

// Handle errors during PDF generation
doc.on('error', (err) => {
  console.error('Error during PDF generation:', err);
});
