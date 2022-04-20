bool is_prime(const int x) {
  if (x < 2) {
    return false;
  }
  for (int i = 2; i * i <= x; ++i) {
    if (x % i == 0) {
      return false;
    }
  }
  return true;
}
