# Thread priorities

Proton supports fine-grained thread priority control using `setpriority(2)` to
set thread niceness values corresponding to the game threads' Windows base
priority levels. However, most default Linux configurations don't allow
individual threads to raise their priority, so some system configuration is
likely required.

It can be configured as a privileged user by editing the
`/etc/security/limits.conf` file, or using the `/etc/security/limits.d/` conf
directory, and adding the following line at the end:

```
*   hard  nice    -15
```

Where -15 could be any value between [-20,0] that will correspond to the
minimum niceness (the highest priority) a thread can get to. The lower the
value, the more CPU time a high priority thread will get, at the expense of
others and other processes, possibly making the system less responsive.
