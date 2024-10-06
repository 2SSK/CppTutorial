# Some Facts to be taken into consideration

- Copy constructors are not inherited. But you won't usually notice this as the compiler will insert an automatic copy constructor.

- Inherited constructors are base constructors. They have no knowledge of the derived class. Any member from the derived class will just contain junk or whatever default value it's initililzed with.

- Constructors are inherited with whatever access specified they has in base class.

- On top of derived constructors, you can add your own that possible properly initialize derived member variables.

- Inheriting constructos adds a level of confusion to your code, it's not clear which constructor is building your object. It is recommended to avoid them and only use this feature if no other option is available.
