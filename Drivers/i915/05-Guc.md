<h1 style="text-align:center;"> GuC </p>

### GuC

GuC stands for Graphics microcontroller — it is a dedicated firmware component used inside modern Intel GPUs, managed by the i915 kernel driver.

### 🧠 What the GuC does?

Its job is to offload certain GPU management tasks from the CPU driver to improve performance and responsiveness.

Specifically, the GuC handles:

- 🧮 Scheduling GPU workloads (command submission)
  - Decides which GPU contexts run and in what order

- ⚡ Context switching between workloads quickly

- 📨 Message interface (CT / CTB)
  - Provides a mailbox-like channel to talk with the host driver

- 📊 Power and resource management support
  - Works with other firmware (like HuC) to reduce CPU overhead

#### 🧩 How it fits in the GPU stack

```scss
┌─────────────────────┐
│   Linux kernel      │
│  (i915 driver)      │
└─────────▲───────────┘
          │
          │ CT (command transport) channel
          ▼
┌─────────────────────┐
│   GuC firmware      │  ← runs on GPU microcontroller
│   (Graphics μC)     │
└─────────▲───────────┘
          │
          ▼
  GPU execution engines
```

### GuC flow

The GuC uses a Command Transport (CT) mechanism to talk with the host.
There are two main directions of messages:

1. H2G → Host to GuC
   - Sent by the i915 driver to instruct the GuC

2. G2H → GuC to Host
   - Sent by the GuC as replies, events, or notifications

All of these messages travel through the Command Transport Buffer (CTB) shared between the host and the GuC.
