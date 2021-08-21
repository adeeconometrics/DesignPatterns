sealed class Singleton {
  private static sealed Singleton instance = new Singleton();
  private Singleton() {}
  public static Singleton getInstance() { return instance; }
}