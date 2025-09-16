<h1 style="text-align:center;"> SQS </p>

### Overview

- Stands for Simple Queue Service.
- Launched in 2006.
- Offers Async message based communication.
- Scable and highly available.
- Has Queue which is holding pool of messages and messages are json.
- Publishers / Producers (Enque) - To push messages in queue.
- Processors / Consumers (Deque) - Consume messages.

### Features

- Many threads/processes can poll a Queue at once.
- Long polling is supported
- 256 KB maximum payload size per message.

### Why use SQS over API calls

- Backpressure control - Consumers can choose rate of processing.
- Fire and forgot - Decoupling and less depenedency.
- Eventual guaranteed processing - Great for async or non-realtime apps.
- Seemless recovery in case of outage.

### Standard vs FIFO Queue

- With standard order is not guaranteed.
- FIFO will do processing in order.
- FIFO can be do with batching.
- FIFO is ~25% expensive.

### Common patterns

- Fanout - If which multiple consumers are there, SNS(Simple notification service) can be used
- Serverless Processing with backpressure control.
- Job buffering
