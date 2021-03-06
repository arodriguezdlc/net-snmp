/*
 * Note: this file originally auto-generated by mib2c using
 *  $
 */
#ifndef SCTPASSOCTABLE_H
#define SCTPASSOCTABLE_H

#include "sctpTables_common.h"

/*
 * function declarations 
 */
void            init_sctpAssocTable(void);
void            shutdown_sctpAssocTable(void);
void            initialize_table_sctpAssocTable(void);
void            shutdown_table_sctpAssocTable(void);
Netsnmp_Node_Handler sctpAssocTable_handler;

/*
 * SCTP association states 
 */
#define SCTPASSOCSTATE_CLOSED  1
#define SCTPASSOCSTATE_COOKIEWAIT  2
#define SCTPASSOCSTATE_COOKIEECHOED  3
#define SCTPASSOCSTATE_ESTABLISHED  4
#define SCTPASSOCSTATE_SHUTDOWNPENDING  5
#define SCTPASSOCSTATE_SHUTDOWNSENT  6
#define SCTPASSOCSTATE_SHUTDOWNRECEIVED  7
#define SCTPASSOCSTATE_SHUTDOWNACKSENT  8
#define SCTPASSOCSTATE_DELETETCB  9

/*
 * column number definitions for table sctpAssocTable 
 */
#define COLUMN_SCTPASSOCID		1
#define COLUMN_SCTPASSOCREMHOSTNAME		2
#define COLUMN_SCTPASSOCLOCALPORT		3
#define COLUMN_SCTPASSOCREMPORT		4
#define COLUMN_SCTPASSOCREMPRIMADDRTYPE		5
#define COLUMN_SCTPASSOCREMPRIMADDR		6
#define COLUMN_SCTPASSOCHEARTBEATINTERVAL		7
#define COLUMN_SCTPASSOCSTATE		8
#define COLUMN_SCTPASSOCINSTREAMS		9
#define COLUMN_SCTPASSOCOUTSTREAMS		10
#define COLUMN_SCTPASSOCMAXRETR		11
#define COLUMN_SCTPASSOCPRIMPROCESS		12
#define COLUMN_SCTPASSOCT1EXPIREDS		13
#define COLUMN_SCTPASSOCT2EXPIREDS		14
#define COLUMN_SCTPASSOCRTXCHUNKS		15
#define COLUMN_SCTPASSOCSTARTTIME		16
#define COLUMN_SCTPASSOCDISCONTINUITYTIME		17

#define SCTP_ASSOC_TABLE_INDEX_SIZE 100
/** Data structure for a sctpAssocTable row entry */
struct sctpAssocTable_entry_s {
    netsnmp_index   oid_index;
    oid             oid_tmp[SCTP_ASSOC_TABLE_INDEX_SIZE];

    /*
     * Index values 
     */
    u_long          sctpAssocId;

    /*
     * Column values 
     */
    char            sctpAssocRemHostName[SCTP_HOSTNAME_SIZE];
    u_long          sctpAssocRemHostName_len;
    u_long          sctpAssocLocalPort;
    u_long          sctpAssocRemPort;
    u_long          sctpAssocRemPrimAddrType;
    char            sctpAssocRemPrimAddr[SCTP_IPADDRESS_SIZE];
    u_long          sctpAssocRemPrimAddr_len;
    u_long          sctpAssocHeartBeatInterval;
    long            sctpAssocState;
    long            old_sctpAssocState;
    u_long          sctpAssocInStreams;
    u_long          sctpAssocOutStreams;
    u_long          sctpAssocMaxRetr;
    u_long          sctpAssocPrimProcess;
    u_long          sctpAssocT1expireds;
    u_long          sctpAssocT2expireds;
    u_long          sctpAssocRtxChunks;
    u_long          sctpAssocStartTime;
    u_long          sctpAssocDiscontinuityTime;

    int             valid;
};

sctpAssocTable_entry *sctpAssocTable_entry_create(void);
int             sctpAssocTable_entry_update_index(sctpAssocTable_entry *
                                                  entry);
void            sctpAssocTable_entry_copy(sctpAssocTable_entry * from,
                                          sctpAssocTable_entry * to);
void            sctpAssocTable_entry_free(sctpAssocTable_entry * entry);

void            sctpAssocTable_container_clear(netsnmp_container
                                               *container);

#endif                          /* SCTPASSOCTABLE_H */
