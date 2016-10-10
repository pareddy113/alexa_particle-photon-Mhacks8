# alexa_particle-photon-Mhacks8

Hardware Used:
Particle Photon Board,
Amazon Echo,
Sensors & LED's
Jumper wires
Breadboard

Amazon Lambda 
  create a lambda function.
  upload a zip folder containing the .js files in the src folder along with node_modules folder.
  Copy the ARN Number at the right top corner of the lambda function.
  You can test your function and see if you see proper json response to the request made.

Create a new skill in Amazon Alexa
  Create a new skill with name and proper invocation text.
  Copy the ARN number so that that Echo knows that the lambda function corresponds to this skill.
  Upload both the SampleUtterances, Custom slots, Intentrespone.
  Test the skill with the invocation text and see if it returns proper json response.
  If everthing is working, you can even publish your skill.
  
Amazon Echo Web Dashboard
  Go the Skills section and select 'your skills' in the top right corner.
  Go to your built skill and see it the skill is Enabled (enabled by default).
  
This project works on controlling led on or off, changer color of led's, reading temparature sensor values etc.

How this works?
  Amazon Echo is invoked with the invocation name and asked to "Turn on/off the light or change color" and this is converted to text.
  Particle photon is connected all the sensors and receives commands from Echo.
  Echo calls the Photon API and sends/receives the values to the sensors based on its receieved inputs.
  Particle then performs the required function as called by Alexa.

