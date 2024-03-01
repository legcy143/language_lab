console.log("har har mahadev");

// Get the environment variables
const env = process.env;

// Print each environment variable
for (const [key, value] of Object.entries(env)) {
    console.log(`${key}: ${value}`);
}