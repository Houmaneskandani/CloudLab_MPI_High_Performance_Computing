# CloudLab
This is a project comparing TCP/IP vs. RDMA (RoCE) protocols with MPI workloads on a arm64 cluster.
### Files
```bash
* cloudlab-arm-lan     # Source code conig for a LAN network of arm64 m400 servers in CloudLab.
* configure_arm.tar.gz # Tarball placed on servers during startup
* configure_arm.sh     # Bash script that configures a server with OpenMPI, RDMA, etc.
* gethostname.c        # Example MPI program.
* mpihosts.[1-9]       # Hostfiles for MPI.
* nodelist             # Hostfile for example MPI program
```
