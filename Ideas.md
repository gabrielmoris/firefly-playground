
# Communication Between Fireflies

## Requirement

Choose an energy saving technology to let multiple electronic components communicate and synchronize their behavior
In an interactive art installation, simulate a swarm of fireflies in a natural-like way

## Acoustic

Signals in audible range. This encourages visitors to contribute interactively.
Output: loudspeaker or human voice, speaker on mobile phone.
Input: microphone, microphone on mobile phone

- https://de.aliexpress.com/item/1005005699882165.html
- https://de.aliexpress.com/item/1005006056453298.html
- https://de.aliexpress.com/item/1005006116555207.html
- https://de.aliexpress.com/item/1005006181524488.html
- https://de.aliexpress.com/item/1005003815111715.html
- https://de.aliexpress.com/item/1005005785813420.html
- https://de.aliexpress.com/item/1005005849852331.html

For the browser (phone and laptop/computer)

https://developer.mozilla.org/en-US/docs/Web/API/Web_Audio_API?retiredLocale=de

Online tone generator

https://www.szynalski.com/tone-generator/

## 433 Mhz

Enough channels for all fireflies? Power consumption?

-  https://de.aliexpress.com/item/1005006140017818.html

## Bluetooth Mesh

### Antenna

PIFA = Planar Inverted F-Shaped Antenna
https://www.youtube.com/watch?v=vX3l0iRxi8c

Antenna length proportional to 1/wavelentgh

### Features of Bluetooth Mesh

#### Multi-hop Messaging

Messages can hop from one device to another to reach distant devices, extending the range beyond traditional Bluetooth limits.

#### Low Energy Use

It uses Bluetooth Low Energy (BLE) which is designed to reduce power consumption.

#### Simultaneous Communication

Multiple devices can send messages at the same time, enabling a robust network of devices communicating simultaneously.

#### Reliability and Security

It incorporates message encryption, authentication, and redundancy to ensure secure and reliable communication.

### Setting Up a Bluetooth Mesh Network

#### Mesh Network Software Stack

Use a software stack that supports Bluetooth mesh. Many chipset manufacturers provide software development kits (SDKs) that include the mesh stack.

#### Device Provisioning

This is the process of adding a device to the mesh network. It involves authenticating the device and providing it with keys needed to participate securely in the network.

#### Configuration

Define roles for devices (e.g., relay nodes, end nodes, controllers) and configure how devices communicate within the network (publish/subscribe to messages).

###  Application Development

#### Define Use Cases

Determine what types of data the devices will exchange (e.g., sensor readings, control commands).

#### Develop Logic

Program the logic on how devices will handle received data and what actions to take.

#### Scalability

Plan how new devices can be added to the network seamlessly as the system grows.

### Energy Efficiency Strategies

#### Duty Cycling

Implement strategies where devices power down when not in active communication.

#### Optimized Message Routing

Use efficient routing of messages to minimize the number of hops and hence, the energy used per message.

#### Tailored Transmission Power

Adjust the transmission power of devices based on the required range to minimize energy consumption.

## Infrared

line-of-sight communication e.g. remote controls
current usage is limited by narrow signal cone opening angle
Each device needs an IR Sender (LED) and IR Receiver (Detector)

- https://www.distrelec.ch/de/ir-empfaenger-38-khz-90-950-nm-vishay-tsop2238/p/30119229
- https://www.distrelec.ch/de/ir-led-850nm-5mm-vishay-tshg6210/p/30119227
- https://de.aliexpress.com/i/32795622787.html
- https://de.aliexpress.com/item/1005006327593563.html
- https://de.aliexpress.com/item/32270351330.html

### Parameters

- Directionality
- Range

# Communication Protocol

## Time Division Multiple Access (TDMA)

This protocol divides the communication time into distinct intervals, assigned to each device. This way, only one device transmits at a time, preventing signal interference.

## Carrier Sense Multiple Access (CSMA)

In this protocol, each device checks if another is transmitting before it starts. This can prevent collisions but may be more complex to implement with IR.

## Frequency Division Multiple Access (FDMA)

Although more common in RF communications, this method can be adapted for IR by using different modulation frequencies for each device.

# Network Topology Design

## Point-to-Point

Simplest form, where each device communicates directly with another.

## Mesh Network

More complex but allows for robust communication as each device can potentially communicate with multiple others if they are in line-of-sight.

# Manage Power Consumption

## Duty Cycling

Devices can turn their IR LEDs on only when transmitting data and keep them off at other times to save power.

## Reflective Surfaces

Utilize walls and other surfaces to reflect IR signals, potentially reducing the need for higher power transmissions.

# Handling Interference and Security

## Interference from External Sources

IR is susceptible to interference from sunlight and other IR sources. Using modulated IR signals at specific frequencies can help mitigate this.

## Security

IR communications can be more secure than RF due to their line-of-sight nature, reducing the risk of eavesdropping from non-visible areas.

# Firefly Behavior

## Happiness Color Scheme

a firefly is happier the more signals it receives per time unit time

- excited = turquoise
- happy = green
- neutral = yellow
- sad = red
- stressed = violet --> sending distress call which blinks with increasing frequency until the fly runs out of energy and must recover

## Socialist Lighting

a firefly glows brighter the louder / more intense the received signals
this leads to firefly clusters lighting up from their center, resembling a spherical galaxy
the group light intensity smears out towards dark fringe regions
combined with color scheme, there is a smooth transition defying clear-cut separations or classifications
