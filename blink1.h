// Wrapper around blink(1) firmware

#ifdef __cplusplus
extern "C" {
#endif

  void blinkSetup();
  void blinkLoop();
  void pressDown();
  void pressUp();

#ifdef __cplusplus
}
#endif
