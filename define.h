#ifndef DEFINE_INC
#define DEFINE_INC

#define PingPong(nmspace, name) \
  int soap_default___##nmspace##__##name(struct soap *soap, struct __##nmspace##__##name *wsdd); \
  int soap_get___##nmspace##__##name(struct soap *soap, struct __##nmspace##__##name *wsdd, char *tag, void *data); \
  int __##nmspace##__##name(struct soap *soap, struct nmspace##__##name##Type *type);

#endif // DEFINE_INC
