cmd_/home/ubuntu/ctoy/workqueue/workqueuetest.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o /home/ubuntu/ctoy/workqueue/workqueuetest.ko /home/ubuntu/ctoy/workqueue/workqueuetest.o /home/ubuntu/ctoy/workqueue/workqueuetest.mod.o;  true
