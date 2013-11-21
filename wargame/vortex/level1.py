import socket, struct
s = socket.socket();s.connect(("vortex.labs.overthewire.org", 5842))
sum = 0
for i in range(4):
  n = struct.unpack("<I", s.recv(4))
  sum += n[0]
s.sendall(struct.pack("<I",sum))
result = s.recv(100);
print "result: %s" % result
