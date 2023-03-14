const { ArduinoIoTCloud } = require('arduino-iot-js');

const options = {
    clientId: "IedbD6xJ2T9EWdCILZMjMcynI5xXQkQn",
    clientSecret: "fXK0e21AG4GHG7zjowX8JBRAMyaifvwfMxUog8C9cSTH0miwNSDu0V2kScJYeWfY",
    onDisconnect: message => {
        console.error(message);
    }
}

ArduinoIoTCloud.connect(options)
  .then(() => console.log("Connected to Arduino IoT Cloud broker"))
  .catch(error => console.error(error));