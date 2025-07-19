# Thread priorities and IO scheduling

Proton supports fine-grained thread priority control using `setpriority(2)` to
set thread niceness values corresponding to the game threads' Windows base
priority levels. Additionally, Proton includes IO priority optimizations to
improve game responsiveness during heavy IO activity.

## Thread Priority Configuration

Most default Linux configurations don't allow individual threads to raise their 
priority, so some system configuration is likely required.

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

## IO Priority Optimization

Proton automatically configures IO scheduling and CPU priorities to improve game
responsiveness during heavy IO operations (such as screen recording, file 
downloads, or system backups). This feature is enabled by default and can help
prevent games from becoming unresponsive during intensive disk activity.

### How it works

- **IO Priority**: Sets games to use the "best-effort" IO scheduling class with 
  high priority (priority 2 by default), ensuring games get preferential access 
  to disk resources during heavy IO operations.
  
- **CPU Priority**: Sets a slightly higher CPU scheduling priority (nice value -2) 
  to give games a small advantage in CPU scheduling during IO-intensive periods.

### Environment Variables

- `PROTON_ENABLE_IO_PRIORITY`: Enable/disable IO priority optimizations. 
  Set to `0` to disable, `1` to enable (default).
  
- `PROTON_IO_PRIORITY`: IO scheduling priority (0-7, lower = higher priority). 
  Default is `2` (high priority). Only used when IO priority is enabled.
  
- `PROTON_NICE_VALUE`: CPU scheduling priority (-20 to 19, lower = higher priority). 
  Default is `-2` (slightly higher priority). Requires proper limits.conf configuration.

### Usage Examples

```bash
# Disable IO priority optimization entirely
PROTON_ENABLE_IO_PRIORITY=0 %command%

# Use maximum IO priority (may affect system responsiveness)
PROTON_IO_PRIORITY=0 %command%

# Use normal CPU priority but keep IO priority optimization
PROTON_NICE_VALUE=0 %command%

# Conservative settings for shared systems
PROTON_IO_PRIORITY=4 PROTON_NICE_VALUE=0 %command%
```

### Troubleshooting

If you experience system unresponsiveness while gaming during heavy IO operations,
you can adjust or disable these optimizations. Conservative values or disabling
the feature entirely may be necessary on systems with limited resources or
specific workload requirements.
