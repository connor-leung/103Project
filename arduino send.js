const { ArduinoIoTCloud } = require('arduino-iot-js');
const thingId = "89558bc2-74c7-42ef-b19d-dce34fd0ef50"
const variableName  = "blink"

const options = {
    clientId: "IedbD6xJ2T9EWdCILZMjMcynI5xXQkQn",
    clientSecret: "fXK0e21AG4GHG7zjowX8JBRAMyaifvwfMxUog8C9cSTH0miwNSDu0V2kScJYeWfY",
    onDisconnect: message => {
        console.error(message);
    }
}

ArduinoIoTCloud.connect(options).then(() => {
    console.log("Connected to Arduino IoT Cloud broker");
    ArduinoCloud.sendProperty(thingId, variableName, value).then(() => {
        console.log("Property value correctly sent");
    });    
});