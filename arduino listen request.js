//listening to angle variable
const { ArduinoIoTCloud } = require('arduino-iot-js');
const thingId = "89558bc2-74c7-42ef-b19d-dce34fd0ef50"
const variableName  = "angle"

const options = {
    clientId: "IedbD6xJ2T9EWdCILZMjMcynI5xXQkQn",
    clientSecret: "fXK0e21AG4GHG7zjowX8JBRAMyaifvwfMxUog8C9cSTH0miwNSDu0V2kScJYeWfY",
    onDisconnect: message => {
        console.error(message);
    }
}

ArduinoIoTCloud.connect(options)
  .then(() => {
    console.log("Connected to Arduino IoT Cloud broker");
    return ArduinoIoTCloud.onPropertyValue(thingId, variableName , showUpdates = value => console.log(value));
  })
  .then(() => console.log("Callback registered"))
  .catch(error => console.log(error));

  var ServerInterval = (function () {
    var serverInterval;
    return {
            set: function (obj) {
            serverInterval = obj;
            },
            get : function() {
                return serverInterval;
            }
    };

})();

