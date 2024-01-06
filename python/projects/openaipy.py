import python.projects.openaipy as openaipy

# Replace 'YOUR_API_KEY' with your actual OpenAI API key
openaipy.api_key = 'sk-abc1234567890abcdefghijklmnopqrstuvwxyz'

# Replace with your actual endpoint and payload
response = openaipy.images.generate(
    model="dall-e-3",
    prompt="a white siamese cat",
    size="1024x1024",
    quality="standard",
    n=1,
)

image_url = response.data[0].url

# Print or use the image URL as needed
print(image_url)
