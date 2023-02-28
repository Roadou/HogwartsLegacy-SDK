// Class WebSocketNetworking.WebSocketConnection
// Size: 0x1bb8 (Inherited: 0x1ba8)
struct UWebSocketConnection : UNetConnection {
	char pad_1BA8[0x10]; // 0x1ba8(0x10)
};

// Class WebSocketNetworking.WebSocketNetDriver
// Size: 0x770 (Inherited: 0x760)
struct UWebSocketNetDriver : UNetDriver {
	int32_t WebSocketPort; // 0x760(0x04)
	char pad_764[0xc]; // 0x764(0x0c)
};

