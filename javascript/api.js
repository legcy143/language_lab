console.log(" har  har mahadev ");
const axios = require("axios")
const { ApolloClient, InMemoryCache, gql } = require('@apollo/client');


const getData = async()=>{
    url = "http://192.168.29.236:5000/graphql"
    let res = await axios.get(url);
    console.log(res.data)
}
// getData()
           
const client = new ApolloClient({
  uri: 'http://192.168.29.236:5000/graphql',
  cache: new InMemoryCache()
});


client.query({
    query: gql
    `{
        hello
     }`
  })
  .then(result => console.log(result.data));