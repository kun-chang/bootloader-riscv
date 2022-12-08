#ifndef __MEMMAP_H__

#define DEVICE_BASE	0x00000000UL
#define DEVICE_SIZE	0x100000000UL

#define MEMORY_BASE	0x100000000UL
#define MEMORY_SIZE	(16UL * 1024 * 1024 * 1024)

#define UART_BASE	0x50118000UL

#if defined(CONFIG_TARGET_EMULATOR)

#define UART_PCLK	153600
#define UART_BAUDRATE	9600

#elif defined(CONFIG_TARGET_PALLADIUM)

#define UART_PCLK	153600
#define UART_BAUDRATE	9600

#elif defined(CONFIG_TARGET_FPGA)

#define UART_PCLK	25000000
#define UART_BAUDRATE	115200

#elif defined(CONFIG_TARGET_ASIC)

#define UART_PCLK	500000000
#define UART_BAUDRATE	115200

#else
#error "no target specified"
#endif

#define ICTL0_BASE	0x50023000UL
#define ICTL1_BASE	0x5002b000UL
#define EFUSE_BASE      0x50028000UL

#define DRAM_BASE	0x100000000UL

#define LOG_BUFFER_ADDR	(DRAM_BASE + 0xc00000)
#define LOG_BUFFER_SIZE	(4 * 1024 * 1024)
#define LOG_LINE_SIZE	512

#define TOP_BASE			0x50010000UL

#define TOP_GP14_CLR			(TOP_BASE + 0x0194)

#define SHARE_REG_BASE			(TOP_BASE + 0x80)
#define SHARE_REG_MESSAGE_WP			0
#define SHARE_REG_MESSAGE_RP			1
#define SHARE_REG_MSI_DATA			3
#define SHARE_REG_ARM9_READ_REG_ADDR		8
#define SHARE_REG_FW_STATUS			9
#define SHARE_REG_ARM9FW_LOG_RP			11
#define SHARE_REG_ARM9FW_LOG_WP			12
#define SHARE_REG_ARM9FW_MODE			13

#define ARM9_START_STEP_ENTER_MAIN        1
#define ARM9_START_STEP_TIMER_INIT        2
#define ARM9_START_STEP_MMU_INIT          3
#define ARM9_START_STEP_FIQ_INIT          4
#define ARM9_START_STEP_FIQ_INIT_DONE     41
#define ARM9_START_STEP_FIQ_INIT_DOING    42
#define ARM9_START_STEP_ENTER_BMDNN       5
#define ARM9_START_STEP_GET_BAD_NPU       51
#define ARM9_START_STEP_INIT_LOCAL_IRQ    52
#define ARM9_START_STEP_I2C_SLAVE_INIT    53
#define ARM9_START_STEP_PCIE_TABLE_INIT   54
#define ARM9_START_STEP_UNMASK_ALL_INTC   55
#define ARM9_START_STEP_TEST_FAILED       0x0B0B0B0B
#define ARM9_START_STEP_TEST_SUCCEED      0x0A0A0A0A

#endif