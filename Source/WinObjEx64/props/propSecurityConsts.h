/*******************************************************************************
*
*  (C) COPYRIGHT AUTHORS, 2015 - 2022
*
*  TITLE:       PROPSECURITYCONSTS.H
*
*  VERSION:     2.00
*
*  DATE:        19 Jun 2022
*
*  Consts header file for Security property sheet.
*
* THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
* ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED
* TO THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
* PARTICULAR PURPOSE.
*
*******************************************************************************/
#pragma once

/********************************************************************************
*
* Access values for supported types
*
*********************************************************************************/

#define SI_ACCESS_DEFAULT_FLAGS SI_ACCESS_GENERAL | SI_ACCESS_SPECIFIC

#define SI_ACCESS_DEFAULT_ENTRY(Access, Name) { &GUID_NULL, Access, Name, SI_ACCESS_DEFAULT_FLAGS }

//
//General Access Values
//
#define MAX_KNOWN_GENERAL_ACCESS_VALUE 5
static SI_ACCESS GeneralAccessValues[MAX_KNOWN_GENERAL_ACCESS_VALUE] = {
    SI_ACCESS_DEFAULT_ENTRY(DELETE, L"Delete"),
    SI_ACCESS_DEFAULT_ENTRY(READ_CONTROL, L"Read Control"),
    SI_ACCESS_DEFAULT_ENTRY(WRITE_DAC, L"Write DAC"),
    SI_ACCESS_DEFAULT_ENTRY(WRITE_OWNER, L"Write Owner"),
    SI_ACCESS_DEFAULT_ENTRY(SYNCHRONIZE, L"Synchronize")
};

//
//Section Access Values
//
#define MAX_KNOWN_SECTION_ACCESS_VALUE 5
static SI_ACCESS SectionAccessValues[MAX_KNOWN_SECTION_ACCESS_VALUE] = {
    SI_ACCESS_DEFAULT_ENTRY(SECTION_QUERY, L"Query"),
    SI_ACCESS_DEFAULT_ENTRY(SECTION_MAP_WRITE, L"Map Write"),
    SI_ACCESS_DEFAULT_ENTRY(SECTION_MAP_READ, L"Map Read"),
    SI_ACCESS_DEFAULT_ENTRY(SECTION_MAP_EXECUTE, L"Map Execute"),
    SI_ACCESS_DEFAULT_ENTRY(SECTION_EXTEND_SIZE, L"Extend Size")
};

//
//Directory Access Values
//
#define MAX_KNOWN_DIRECTORY_ACCESS_VALUE 4
static SI_ACCESS DirectoryAccessValues[MAX_KNOWN_DIRECTORY_ACCESS_VALUE] = {
    SI_ACCESS_DEFAULT_ENTRY(DIRECTORY_QUERY, L"Query"),
    SI_ACCESS_DEFAULT_ENTRY(DIRECTORY_TRAVERSE, L"Traverse"),
    SI_ACCESS_DEFAULT_ENTRY(DIRECTORY_CREATE_OBJECT, L"Create Object"),
    SI_ACCESS_DEFAULT_ENTRY(DIRECTORY_CREATE_SUBDIRECTORY, L"Create SubDirectory")
};

//
//File Access Values
//
#define MAX_KNOWN_FILE_ACCESS_VALUE 14
static SI_ACCESS FileAccessValues[MAX_KNOWN_FILE_ACCESS_VALUE] = {
    SI_ACCESS_DEFAULT_ENTRY(FILE_READ_DATA, L"Read Data"),
    SI_ACCESS_DEFAULT_ENTRY(FILE_LIST_DIRECTORY, L"List Directory"),
    SI_ACCESS_DEFAULT_ENTRY(FILE_WRITE_DATA, L"Write Data"),
    SI_ACCESS_DEFAULT_ENTRY(FILE_ADD_FILE, L"Add File"),
    SI_ACCESS_DEFAULT_ENTRY(FILE_APPEND_DATA, L"Append Data"),
    SI_ACCESS_DEFAULT_ENTRY(FILE_ADD_SUBDIRECTORY, L"Add SubDirectory"),
    SI_ACCESS_DEFAULT_ENTRY(FILE_CREATE_PIPE_INSTANCE, L"Create Pipe Instance"),
    SI_ACCESS_DEFAULT_ENTRY(FILE_READ_EA, L"Read EA"),
    SI_ACCESS_DEFAULT_ENTRY(FILE_WRITE_EA, L"Write EA"),
    SI_ACCESS_DEFAULT_ENTRY(FILE_EXECUTE, L"Execute"),
    SI_ACCESS_DEFAULT_ENTRY(FILE_TRAVERSE, L"Traverse"),
    SI_ACCESS_DEFAULT_ENTRY(FILE_DELETE_CHILD, L"Delete Child"),
    SI_ACCESS_DEFAULT_ENTRY(FILE_READ_ATTRIBUTES, L"Read Attributes"),
    SI_ACCESS_DEFAULT_ENTRY(FILE_WRITE_ATTRIBUTES, L"Write Attributes")
};

//
//Event Access Values
//
#define MAX_KNOWN_EVENT_ACCESS_VALUE 2
static SI_ACCESS EventAccessValues[MAX_KNOWN_EVENT_ACCESS_VALUE] = {
    SI_ACCESS_DEFAULT_ENTRY(EVENT_QUERY_STATE, L"Query State"),
    SI_ACCESS_DEFAULT_ENTRY(EVENT_MODIFY_STATE, L"Modify State")
};

//
//Mutant Access Values
//
#define MAX_KNOWN_MUTANT_ACCESS_VALUE 1
static SI_ACCESS MutantAccessValues[MAX_KNOWN_MUTANT_ACCESS_VALUE] = {
    SI_ACCESS_DEFAULT_ENTRY(MUTANT_QUERY_STATE, L"Query State")
};

//
//Desktop Access Values
//
#define MAX_KNOWN_DESKTOP_ACCESS_VALUE 9
static SI_ACCESS DesktopAccessValues[MAX_KNOWN_DESKTOP_ACCESS_VALUE] = {
    SI_ACCESS_DEFAULT_ENTRY(DESKTOP_READOBJECTS, L"Read Objects"),
    SI_ACCESS_DEFAULT_ENTRY(DESKTOP_CREATEWINDOW, L"Create Window"),
    SI_ACCESS_DEFAULT_ENTRY(DESKTOP_CREATEMENU, L"Create Menu"),
    SI_ACCESS_DEFAULT_ENTRY(DESKTOP_HOOKCONTROL, L"Hook Control"),
    SI_ACCESS_DEFAULT_ENTRY(DESKTOP_JOURNALRECORD, L"Journal Record"),
    SI_ACCESS_DEFAULT_ENTRY(DESKTOP_JOURNALPLAYBACK, L"Journal Playback"),
    SI_ACCESS_DEFAULT_ENTRY(DESKTOP_ENUMERATE, L"Enumerate"),
    SI_ACCESS_DEFAULT_ENTRY(DESKTOP_WRITEOBJECTS, L"Write Objects"),
    SI_ACCESS_DEFAULT_ENTRY(DESKTOP_SWITCHDESKTOP, L"Switch Desktop")
};

//
//WinStation Access Values
//
#define MAX_KNOWN_WINSTATION_ACCESS_VALUE 9
static SI_ACCESS WinStationAccessValues[MAX_KNOWN_WINSTATION_ACCESS_VALUE] = {
    SI_ACCESS_DEFAULT_ENTRY(WINSTA_ENUMDESKTOPS, L"Enumerate Desktops"),
    SI_ACCESS_DEFAULT_ENTRY(WINSTA_READATTRIBUTES, L"Read Attributes"),
    SI_ACCESS_DEFAULT_ENTRY(WINSTA_ACCESSCLIPBOARD, L"Access Clipboard"),
    SI_ACCESS_DEFAULT_ENTRY(WINSTA_CREATEDESKTOP, L"Create Desktop"),
    SI_ACCESS_DEFAULT_ENTRY(WINSTA_WRITEATTRIBUTES, L"Write Attributes"),
    SI_ACCESS_DEFAULT_ENTRY(WINSTA_ACCESSGLOBALATOMS, L"Access Global Atoms"),
    SI_ACCESS_DEFAULT_ENTRY(WINSTA_EXITWINDOWS, L"Exit Windows"),
    SI_ACCESS_DEFAULT_ENTRY(WINSTA_ENUMERATE, L"Enumerate"),
    SI_ACCESS_DEFAULT_ENTRY(WINSTA_READSCREEN, L"Read Screen")
};

//
//Key Access Values
//
#define MAX_KNOWN_KEY_ACCESS_VALUE 8
static SI_ACCESS KeyAccessValues[MAX_KNOWN_KEY_ACCESS_VALUE] = {
    SI_ACCESS_DEFAULT_ENTRY(KEY_QUERY_VALUE, L"Query Value"),
    SI_ACCESS_DEFAULT_ENTRY(KEY_SET_VALUE, L"Set Value"),
    SI_ACCESS_DEFAULT_ENTRY(KEY_CREATE_SUB_KEY, L"Create Subkey"),
    SI_ACCESS_DEFAULT_ENTRY(KEY_ENUMERATE_SUB_KEYS, L"Enumerate Subkeys"),
    SI_ACCESS_DEFAULT_ENTRY(KEY_NOTIFY, L"Notify"),
    SI_ACCESS_DEFAULT_ENTRY(KEY_CREATE_LINK, L"Create Link"),
    SI_ACCESS_DEFAULT_ENTRY(KEY_WOW64_64KEY, L"Access 64 bit key"),
    SI_ACCESS_DEFAULT_ENTRY(KEY_WOW64_32KEY, L"Access 32 bit key")
};

//
//Semaphore Access Values
//
#define MAX_KNOWN_SEMAPHORE_ACCESS_VALUE 2
static SI_ACCESS SemaphoreAccessValues[MAX_KNOWN_SEMAPHORE_ACCESS_VALUE] = {
    SI_ACCESS_DEFAULT_ENTRY(SEMAPHORE_QUERY_STATE, L"Query State"),
    SI_ACCESS_DEFAULT_ENTRY(SEMAPHORE_MODIFY_STATE, L"Modify State")
};

//
//Symlink Access Values
//
#define MAX_KNOWN_SYMLINK_ACCESS_VALUE 2
static SI_ACCESS SymlinkAccessValues[MAX_KNOWN_SYMLINK_ACCESS_VALUE] = {
    SI_ACCESS_DEFAULT_ENTRY(SYMBOLIC_LINK_QUERY, L"Link Query"),
    SI_ACCESS_DEFAULT_ENTRY(SYMBOLIC_LINK_SET, L"Link Set")
};

//
//Timer Access Values
//
#define MAX_KNOWN_TIMER_ACCESS_VALUE 2
static SI_ACCESS TimerAccessValues[MAX_KNOWN_TIMER_ACCESS_VALUE] = {
    SI_ACCESS_DEFAULT_ENTRY(TIMER_QUERY_STATE, L"Query State"),
    SI_ACCESS_DEFAULT_ENTRY(TIMER_MODIFY_STATE, L"Modify State")
};

//
//Job Access Values
//
#define MAX_KNOWN_JOB_ACCESS_VALUE 5
static SI_ACCESS JobAccessValues[MAX_KNOWN_JOB_ACCESS_VALUE] = {
    SI_ACCESS_DEFAULT_ENTRY(JOB_OBJECT_ASSIGN_PROCESS, L"Assign Process"),
    SI_ACCESS_DEFAULT_ENTRY(JOB_OBJECT_SET_ATTRIBUTES, L"Set Attributes"),
    SI_ACCESS_DEFAULT_ENTRY(JOB_OBJECT_QUERY, L"Query"),
    SI_ACCESS_DEFAULT_ENTRY(JOB_OBJECT_TERMINATE, L"Terminate"),
    SI_ACCESS_DEFAULT_ENTRY(JOB_OBJECT_SET_SECURITY_ATTRIBUTES, L"Set Security Attributes")
};

//
//Port Access Values
//
#define MAX_KNOWN_PORT_ACCESS_VALUE 1
static SI_ACCESS PortAccessValues[MAX_KNOWN_PORT_ACCESS_VALUE] = {
    SI_ACCESS_DEFAULT_ENTRY(PORT_CONNECT, L"Connect")
};

//
//Session Access Values
//
#define MAX_KNOWN_SESSION_ACCESS_VALUE 2
static SI_ACCESS SessionAccessValues[MAX_KNOWN_SESSION_ACCESS_VALUE] = {
    SI_ACCESS_DEFAULT_ENTRY(SESSION_QUERY_ACCESS, L"Query"),
    SI_ACCESS_DEFAULT_ENTRY(SESSION_MODIFY_ACCESS, L"Modify")
};

//
//IoCompletion Access Values
//
#define MAX_KNOWN_IOCOMPLETION_ACCESS_VALUE 2
static SI_ACCESS IoCompletionAccessValues[MAX_KNOWN_IOCOMPLETION_ACCESS_VALUE] = {
    SI_ACCESS_DEFAULT_ENTRY(IO_COMPLETION_QUERY_STATE, L"Query State"),
    SI_ACCESS_DEFAULT_ENTRY(IO_COMPLETION_MODIFY_STATE, L"Modify State")
};

//
//MemoryPartition Access Values
//
#define MAX_KNOWN_MEMORYPARTITION_ACCESS_VALUE 2
static SI_ACCESS MemoryPartitionAccessValues[MAX_KNOWN_MEMORYPARTITION_ACCESS_VALUE] = {
    SI_ACCESS_DEFAULT_ENTRY(MEMORY_PARTITION_QUERY_ACCESS, L"Query"),
    SI_ACCESS_DEFAULT_ENTRY(MEMORY_PARTITION_MODIFY_ACCESS, L"Modify")
};

//
//Process Access Values
//
#define MAX_KNOWN_PROCESS_ACCESS_VALUE 14
static SI_ACCESS ProcessAccessValues[MAX_KNOWN_PROCESS_ACCESS_VALUE] = {
    SI_ACCESS_DEFAULT_ENTRY(PROCESS_TERMINATE, L"Terminate"),
    SI_ACCESS_DEFAULT_ENTRY(PROCESS_CREATE_THREAD, L"Create Thread"),
    SI_ACCESS_DEFAULT_ENTRY(PROCESS_SET_SESSIONID, L"Set Session Id"),
    SI_ACCESS_DEFAULT_ENTRY(PROCESS_VM_OPERATION, L"VM Operation"),
    SI_ACCESS_DEFAULT_ENTRY(PROCESS_VM_READ, L"VM Read"),
    SI_ACCESS_DEFAULT_ENTRY(PROCESS_VM_WRITE, L"VM Write"),
    SI_ACCESS_DEFAULT_ENTRY(PROCESS_DUP_HANDLE, L"Duplicate Handle"),
    SI_ACCESS_DEFAULT_ENTRY(PROCESS_CREATE_PROCESS, L"Create Process"),
    SI_ACCESS_DEFAULT_ENTRY(PROCESS_SET_QUOTA, L"Set Quota"),
    SI_ACCESS_DEFAULT_ENTRY(PROCESS_SET_INFORMATION, L"Set Information"),
    SI_ACCESS_DEFAULT_ENTRY(PROCESS_QUERY_INFORMATION, L"Query Information"),
    SI_ACCESS_DEFAULT_ENTRY(PROCESS_SUSPEND_RESUME, L"Suspend Resume"),
    SI_ACCESS_DEFAULT_ENTRY(PROCESS_QUERY_LIMITED_INFORMATION, L"Query Limited Information"),
    SI_ACCESS_DEFAULT_ENTRY(PROCESS_SET_LIMITED_INFORMATION, L"Set Limited Information")
};

//
//Thread Access Values
//
#define MAX_KNOWN_THREAD_ACCESS_VALUE 13
static SI_ACCESS ThreadAccessValues[MAX_KNOWN_THREAD_ACCESS_VALUE] = {
    SI_ACCESS_DEFAULT_ENTRY(THREAD_TERMINATE, L"Terminate"),
    SI_ACCESS_DEFAULT_ENTRY(THREAD_SUSPEND_RESUME, L"Suspend Resume"),
    SI_ACCESS_DEFAULT_ENTRY(THREAD_ALERT, L"Alert"),
    SI_ACCESS_DEFAULT_ENTRY(THREAD_GET_CONTEXT, L"Get Context"),
    SI_ACCESS_DEFAULT_ENTRY(THREAD_SET_CONTEXT, L"Set Context"),
    SI_ACCESS_DEFAULT_ENTRY(THREAD_QUERY_INFORMATION, L"Query Information"),
    SI_ACCESS_DEFAULT_ENTRY(THREAD_SET_INFORMATION, L"Set Information"),
    SI_ACCESS_DEFAULT_ENTRY(THREAD_SET_THREAD_TOKEN, L"Set Thread Token"),
    SI_ACCESS_DEFAULT_ENTRY(THREAD_IMPERSONATE, L"Impersonate"),
    SI_ACCESS_DEFAULT_ENTRY(THREAD_DIRECT_IMPERSONATION, L"Direct Impersonation"),
    SI_ACCESS_DEFAULT_ENTRY(THREAD_SET_LIMITED_INFORMATION, L"Set Limited Information"),
    SI_ACCESS_DEFAULT_ENTRY(THREAD_QUERY_LIMITED_INFORMATION, L"Query Limited Information"),
    SI_ACCESS_DEFAULT_ENTRY(THREAD_RESUME, L"Resume")
};

//
//Token Access Values
//
#define MAX_KNOWN_TOKEN_ACCESS_VALUE 9

static SI_ACCESS TokenAccessValues[MAX_KNOWN_TOKEN_ACCESS_VALUE] = {
    SI_ACCESS_DEFAULT_ENTRY(TOKEN_ASSIGN_PRIMARY, L"Assign Primary"),
    SI_ACCESS_DEFAULT_ENTRY(TOKEN_DUPLICATE, L"Duplicate"),
    SI_ACCESS_DEFAULT_ENTRY(TOKEN_IMPERSONATE, L"Impersonate"),
    SI_ACCESS_DEFAULT_ENTRY(TOKEN_QUERY, L"Query"),
    SI_ACCESS_DEFAULT_ENTRY(TOKEN_QUERY_SOURCE, L"Query Source"),
    SI_ACCESS_DEFAULT_ENTRY(TOKEN_ADJUST_PRIVILEGES, L"Adjust Privileges"),
    SI_ACCESS_DEFAULT_ENTRY(TOKEN_ADJUST_GROUPS, L"Adjust Groups"),
    SI_ACCESS_DEFAULT_ENTRY(TOKEN_ADJUST_DEFAULT, L"Adjust Default"),
    SI_ACCESS_DEFAULT_ENTRY(TOKEN_ADJUST_SESSIONID, L"Adjust SessionId")
};

#define MAX_KNOWN_TRANSACTION_ACCESS_VALUE 7
static SI_ACCESS TransactionAccessValues[MAX_KNOWN_TRANSACTION_ACCESS_VALUE] = {
    SI_ACCESS_DEFAULT_ENTRY(TRANSACTION_QUERY_INFORMATION, L"Query Information"),
    SI_ACCESS_DEFAULT_ENTRY(TRANSACTION_SET_INFORMATION, L"Set Information"),
    SI_ACCESS_DEFAULT_ENTRY(TRANSACTION_ENLIST, L"Enlist"),
    SI_ACCESS_DEFAULT_ENTRY(TRANSACTION_COMMIT, L"Commit"),
    SI_ACCESS_DEFAULT_ENTRY(TRANSACTION_ROLLBACK, L"Rollback"),
    SI_ACCESS_DEFAULT_ENTRY(TRANSACTION_PROPAGATE, L"Propagate"),
    SI_ACCESS_DEFAULT_ENTRY(TRANSACTION_RIGHT_RESERVED1, L"Right Reserved1")
};
