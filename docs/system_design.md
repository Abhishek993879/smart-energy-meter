# System Design & Architecture

## 3. System Architecture

The Smart Energy Smart-Meter system follows a simple flow:

```text
+----------------------+
|   Pulse Simulator    |
+----------+-----------+
           |
           v
+----------------------+
|     Energy Meter     |
|  Pulse Count & Energy|
+----------+-----------+
           |
           v
+----------------------+
|     Meter Logger     |
|      Log File        |
+----------+-----------+
           |
           v
+----------------------+
|      Analytics       |
| Total / Average /    |
| Peak / Cost          |
+----------+-----------+
           |
           v
+----------------------+
|    Alert System      |
| Normal / High Usage  |
+----------------------+
