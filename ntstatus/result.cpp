std::wstring value;
switch(status) {
	case 0x00000000:
		value = L"STATUS_SUCCESS or STATUS_WAIT_0";
		break;
	case 0x00000001:
		value = L"STATUS_WAIT_1";
		break;
	case 0x00000002:
		value = L"STATUS_WAIT_2";
		break;
	case 0x00000003:
		value = L"STATUS_WAIT_3";
		break;
	case 0x0000003F:
		value = L"STATUS_WAIT_63";
		break;
	case 0x00000080:
		value = L"STATUS_ABANDONED or STATUS_ABANDONED_WAIT_0";
		break;
	case 0x000000BF:
		value = L"STATUS_ABANDONED_WAIT_63";
		break;
	case 0x000000C0:
		value = L"STATUS_USER_APC";
		break;
	case 0x00000101:
		value = L"STATUS_ALERTED";
		break;
	case 0x00000102:
		value = L"STATUS_TIMEOUT";
		break;
	case 0x00000103:
		value = L"STATUS_PENDING";
		break;
	case 0x00000104:
		value = L"STATUS_REPARSE";
		break;
	case 0x00000105:
		value = L"STATUS_MORE_ENTRIES";
		break;
	case 0x00000106:
		value = L"STATUS_NOT_ALL_ASSIGNED";
		break;
	case 0x00000107:
		value = L"STATUS_SOME_NOT_MAPPED";
		break;
	case 0x00000108:
		value = L"STATUS_OPLOCK_BREAK_IN_PROGRESS";
		break;
	case 0x00000109:
		value = L"STATUS_VOLUME_MOUNTED";
		break;
	case 0x0000010A:
		value = L"STATUS_RXACT_COMMITTED";
		break;
	case 0x0000010B:
		value = L"STATUS_NOTIFY_CLEANUP";
		break;
	case 0x0000010C:
		value = L"STATUS_NOTIFY_ENUM_DIR";
		break;
	case 0x0000010D:
		value = L"STATUS_NO_QUOTAS_FOR_ACCOUNT";
		break;
	case 0x0000010E:
		value = L"STATUS_PRIMARY_TRANSPORT_CONNECT_FAILED";
		break;
	case 0x00000110:
		value = L"STATUS_PAGE_FAULT_TRANSITION";
		break;
	case 0x00000111:
		value = L"STATUS_PAGE_FAULT_DEMAND_ZERO";
		break;
	case 0x00000112:
		value = L"STATUS_PAGE_FAULT_COPY_ON_WRITE";
		break;
	case 0x00000113:
		value = L"STATUS_PAGE_FAULT_GUARD_PAGE";
		break;
	case 0x00000114:
		value = L"STATUS_PAGE_FAULT_PAGING_FILE";
		break;
	case 0x00000115:
		value = L"STATUS_CACHE_PAGE_LOCKED";
		break;
	case 0x00000116:
		value = L"STATUS_CRASH_DUMP";
		break;
	case 0x00000117:
		value = L"STATUS_BUFFER_ALL_ZEROS";
		break;
	case 0x00000118:
		value = L"STATUS_REPARSE_OBJECT";
		break;
	case 0x00000119:
		value = L"STATUS_RESOURCE_REQUIREMENTS_CHANGED";
		break;
	case 0x00000120:
		value = L"STATUS_TRANSLATION_COMPLETE";
		break;
	case 0x00000121:
		value = L"STATUS_DS_MEMBERSHIP_EVALUATED_LOCALLY";
		break;
	case 0x00000122:
		value = L"STATUS_NOTHING_TO_TERMINATE";
		break;
	case 0x00000123:
		value = L"STATUS_PROCESS_NOT_IN_JOB";
		break;
	case 0x00000124:
		value = L"STATUS_PROCESS_IN_JOB";
		break;
	case 0x00000125:
		value = L"STATUS_VOLSNAP_HIBERNATE_READY";
		break;
	case 0x00000126:
		value = L"STATUS_FSFILTER_OP_COMPLETED_SUCCESSFULLY";
		break;
	case 0x00000127:
		value = L"STATUS_INTERRUPT_VECTOR_ALREADY_CONNECTED";
		break;
	case 0x00000128:
		value = L"STATUS_INTERRUPT_STILL_CONNECTED";
		break;
	case 0x00000129:
		value = L"STATUS_PROCESS_CLONED";
		break;
	case 0x0000012A:
		value = L"STATUS_FILE_LOCKED_WITH_ONLY_READERS";
		break;
	case 0x0000012B:
		value = L"STATUS_FILE_LOCKED_WITH_WRITERS";
		break;
	case 0x00000202:
		value = L"STATUS_RESOURCEMANAGER_READ_ONLY";
		break;
	case 0x00000367:
		value = L"STATUS_WAIT_FOR_OPLOCK";
		break;
	case 0x00010001:
		value = L"DBG_EXCEPTION_HANDLED";
		break;
	case 0x00010002:
		value = L"DBG_CONTINUE";
		break;
	case 0x001C0001:
		value = L"STATUS_FLT_IO_COMPLETE";
		break;
	case 0x40000000:
		value = L"STATUS_OBJECT_NAME_EXISTS";
		break;
	case 0x40000001:
		value = L"STATUS_THREAD_WAS_SUSPENDED";
		break;
	case 0x40000002:
		value = L"STATUS_WORKING_SET_LIMIT_RANGE";
		break;
	case 0x40000003:
		value = L"STATUS_IMAGE_NOT_AT_BASE";
		break;
	case 0x40000004:
		value = L"STATUS_RXACT_STATE_CREATED";
		break;
	case 0x40000005:
		value = L"STATUS_SEGMENT_NOTIFICATION";
		break;
	case 0x40000006:
		value = L"STATUS_LOCAL_USER_SESSION_KEY";
		break;
	case 0x40000007:
		value = L"STATUS_BAD_CURRENT_DIRECTORY";
		break;
	case 0x40000008:
		value = L"STATUS_SERIAL_MORE_WRITES";
		break;
	case 0x40000009:
		value = L"STATUS_REGISTRY_RECOVERED";
		break;
	case 0x4000000A:
		value = L"STATUS_FT_READ_RECOVERY_FROM_BACKUP";
		break;
	case 0x4000000B:
		value = L"STATUS_FT_WRITE_RECOVERY";
		break;
	case 0x4000000C:
		value = L"STATUS_SERIAL_COUNTER_TIMEOUT";
		break;
	case 0x4000000D:
		value = L"STATUS_NULL_LM_PASSWORD";
		break;
	case 0x4000000E:
		value = L"STATUS_IMAGE_MACHINE_TYPE_MISMATCH";
		break;
	case 0x4000000F:
		value = L"STATUS_RECEIVE_PARTIAL";
		break;
	case 0x40000010:
		value = L"STATUS_RECEIVE_EXPEDITED";
		break;
	case 0x40000011:
		value = L"STATUS_RECEIVE_PARTIAL_EXPEDITED";
		break;
	case 0x40000012:
		value = L"STATUS_EVENT_DONE";
		break;
	case 0x40000013:
		value = L"STATUS_EVENT_PENDING";
		break;
	case 0x40000014:
		value = L"STATUS_CHECKING_FILE_SYSTEM";
		break;
	case 0x40000015:
		value = L"STATUS_FATAL_APP_EXIT";
		break;
	case 0x40000016:
		value = L"STATUS_PREDEFINED_HANDLE";
		break;
	case 0x40000017:
		value = L"STATUS_WAS_UNLOCKED";
		break;
	case 0x40000018:
		value = L"STATUS_SERVICE_NOTIFICATION";
		break;
	case 0x40000019:
		value = L"STATUS_WAS_LOCKED";
		break;
	case 0x4000001A:
		value = L"STATUS_LOG_HARD_ERROR";
		break;
	case 0x4000001B:
		value = L"STATUS_ALREADY_WIN32";
		break;
	case 0x4000001C:
		value = L"STATUS_WX86_UNSIMULATE";
		break;
	case 0x4000001D:
		value = L"STATUS_WX86_CONTINUE";
		break;
	case 0x4000001E:
		value = L"STATUS_WX86_SINGLE_STEP";
		break;
	case 0x4000001F:
		value = L"STATUS_WX86_BREAKPOINT";
		break;
	case 0x40000020:
		value = L"STATUS_WX86_EXCEPTION_CONTINUE";
		break;
	case 0x40000021:
		value = L"STATUS_WX86_EXCEPTION_LASTCHANCE";
		break;
	case 0x40000022:
		value = L"STATUS_WX86_EXCEPTION_CHAIN";
		break;
	case 0x40000023:
		value = L"STATUS_IMAGE_MACHINE_TYPE_MISMATCH_EXE";
		break;
	case 0x40000024:
		value = L"STATUS_NO_YIELD_PERFORMED";
		break;
	case 0x40000025:
		value = L"STATUS_TIMER_RESUME_IGNORED";
		break;
	case 0x40000026:
		value = L"STATUS_ARBITRATION_UNHANDLED";
		break;
	case 0x40000027:
		value = L"STATUS_CARDBUS_NOT_SUPPORTED";
		break;
	case 0x40000028:
		value = L"STATUS_WX86_CREATEWX86TIB";
		break;
	case 0x40000029:
		value = L"STATUS_MP_PROCESSOR_MISMATCH";
		break;
	case 0x4000002A:
		value = L"STATUS_HIBERNATED";
		break;
	case 0x4000002B:
		value = L"STATUS_RESUME_HIBERNATION";
		break;
	case 0x4000002C:
		value = L"STATUS_FIRMWARE_UPDATED";
		break;
	case 0x4000002D:
		value = L"STATUS_DRIVERS_LEAKING_LOCKED_PAGES";
		break;
	case 0x4000002E:
		value = L"STATUS_MESSAGE_RETRIEVED";
		break;
	case 0x4000002F:
		value = L"STATUS_SYSTEM_POWERSTATE_TRANSITION";
		break;
	case 0x40000030:
		value = L"STATUS_ALPC_CHECK_COMPLETION_LIST";
		break;
	case 0x40000031:
		value = L"STATUS_SYSTEM_POWERSTATE_COMPLEX_TRANSITION";
		break;
	case 0x40000032:
		value = L"STATUS_ACCESS_AUDIT_BY_POLICY";
		break;
	case 0x40000033:
		value = L"STATUS_ABANDON_HIBERFILE";
		break;
	case 0x40000034:
		value = L"STATUS_BIZRULES_NOT_ENABLED";
		break;
	case 0x40000294:
		value = L"STATUS_WAKE_SYSTEM";
		break;
	case 0x40000370:
		value = L"STATUS_DS_SHUTTING_DOWN";
		break;
	case 0x40010001:
		value = L"DBG_REPLY_LATER";
		break;
	case 0x40010002:
		value = L"DBG_UNABLE_TO_PROVIDE_HANDLE";
		break;
	case 0x40010003:
		value = L"DBG_TERMINATE_THREAD";
		break;
	case 0x40010004:
		value = L"DBG_TERMINATE_PROCESS";
		break;
	case 0x40010005:
		value = L"DBG_CONTROL_C";
		break;
	case 0x40010006:
		value = L"DBG_PRINTEXCEPTION_C";
		break;
	case 0x40010007:
		value = L"DBG_RIPEXCEPTION";
		break;
	case 0x40010008:
		value = L"DBG_CONTROL_BREAK";
		break;
	case 0x40010009:
		value = L"DBG_COMMAND_EXCEPTION";
		break;
	case 0x40020056:
		value = L"RPC_NT_UUID_LOCAL_ONLY";
		break;
	case 0x400200AF:
		value = L"RPC_NT_SEND_INCOMPLETE";
		break;
	case 0x400A0004:
		value = L"STATUS_CTX_CDM_CONNECT";
		break;
	case 0x400A0005:
		value = L"STATUS_CTX_CDM_DISCONNECT";
		break;
	case 0x4015000D:
		value = L"STATUS_SXS_RELEASE_ACTIVATION_CONTEXT";
		break;
	case 0x40190034:
		value = L"STATUS_RECOVERY_NOT_NEEDED";
		break;
	case 0x40190035:
		value = L"STATUS_RM_ALREADY_STARTED";
		break;
	case 0x401A000C:
		value = L"STATUS_LOG_NO_RESTART";
		break;
	case 0x401B00EC:
		value = L"STATUS_VIDEO_DRIVER_DEBUG_REPORT_REQUEST";
		break;
	case 0x401E000A:
		value = L"STATUS_GRAPHICS_PARTIAL_DATA_POPULATED";
		break;
	case 0x401E0117:
		value = L"STATUS_GRAPHICS_DRIVER_MISMATCH";
		break;
	case 0x401E0307:
		value = L"STATUS_GRAPHICS_MODE_NOT_PINNED";
		break;
	case 0x401E031E:
		value = L"STATUS_GRAPHICS_NO_PREFERRED_MODE";
		break;
	case 0x401E034B:
		value = L"STATUS_GRAPHICS_DATASET_IS_EMPTY";
		break;
	case 0x401E034C:
		value = L"STATUS_GRAPHICS_NO_MORE_ELEMENTS_IN_DATASET";
		break;
	case 0x401E0351:
		value = L"STATUS_GRAPHICS_PATH_CONTENT_GEOMETRY_TRANSFORMATION_NOT_PINNED";
		break;
	case 0x401E042F:
		value = L"STATUS_GRAPHICS_UNKNOWN_CHILD_STATUS";
		break;
	case 0x401E0437:
		value = L"STATUS_GRAPHICS_LEADLINK_START_DEFERRED";
		break;
	case 0x401E0439:
		value = L"STATUS_GRAPHICS_POLLING_TOO_FREQUENTLY";
		break;
	case 0x401E043A:
		value = L"STATUS_GRAPHICS_START_DEFERRED";
		break;
	case 0x40230001:
		value = L"STATUS_NDIS_INDICATION_REQUIRED";
		break;
	case 0x80000001:
		value = L"STATUS_GUARD_PAGE_VIOLATION";
		break;
	case 0x80000002:
		value = L"STATUS_DATATYPE_MISALIGNMENT";
		break;
	case 0x80000003:
		value = L"STATUS_BREAKPOINT";
		break;
	case 0x80000004:
		value = L"STATUS_SINGLE_STEP";
		break;
	case 0x80000005:
		value = L"STATUS_BUFFER_OVERFLOW";
		break;
	case 0x80000006:
		value = L"STATUS_NO_MORE_FILES";
		break;
	case 0x80000007:
		value = L"STATUS_WAKE_SYSTEM_DEBUGGER";
		break;
	case 0x8000000A:
		value = L"STATUS_HANDLES_CLOSED";
		break;
	case 0x8000000B:
		value = L"STATUS_NO_INHERITANCE";
		break;
	case 0x8000000C:
		value = L"STATUS_GUID_SUBSTITUTION_MADE";
		break;
	case 0x8000000D:
		value = L"STATUS_PARTIAL_COPY";
		break;
	case 0x8000000E:
		value = L"STATUS_DEVICE_PAPER_EMPTY";
		break;
	case 0x8000000F:
		value = L"STATUS_DEVICE_POWERED_OFF";
		break;
	case 0x80000010:
		value = L"STATUS_DEVICE_OFF_LINE";
		break;
	case 0x80000011:
		value = L"STATUS_DEVICE_BUSY";
		break;
	case 0x80000012:
		value = L"STATUS_NO_MORE_EAS";
		break;
	case 0x80000013:
		value = L"STATUS_INVALID_EA_NAME";
		break;
	case 0x80000014:
		value = L"STATUS_EA_LIST_INCONSISTENT";
		break;
	case 0x80000015:
		value = L"STATUS_INVALID_EA_FLAG";
		break;
	case 0x80000016:
		value = L"STATUS_VERIFY_REQUIRED";
		break;
	case 0x80000017:
		value = L"STATUS_EXTRANEOUS_INFORMATION";
		break;
	case 0x80000018:
		value = L"STATUS_RXACT_COMMIT_NECESSARY";
		break;
	case 0x8000001A:
		value = L"STATUS_NO_MORE_ENTRIES";
		break;
	case 0x8000001B:
		value = L"STATUS_FILEMARK_DETECTED";
		break;
	case 0x8000001C:
		value = L"STATUS_MEDIA_CHANGED";
		break;
	case 0x8000001D:
		value = L"STATUS_BUS_RESET";
		break;
	case 0x8000001E:
		value = L"STATUS_END_OF_MEDIA";
		break;
	case 0x8000001F:
		value = L"STATUS_BEGINNING_OF_MEDIA";
		break;
	case 0x80000020:
		value = L"STATUS_MEDIA_CHECK";
		break;
	case 0x80000021:
		value = L"STATUS_SETMARK_DETECTED";
		break;
	case 0x80000022:
		value = L"STATUS_NO_DATA_DETECTED";
		break;
	case 0x80000023:
		value = L"STATUS_REDIRECTOR_HAS_OPEN_HANDLES";
		break;
	case 0x80000024:
		value = L"STATUS_SERVER_HAS_OPEN_HANDLES";
		break;
	case 0x80000025:
		value = L"STATUS_ALREADY_DISCONNECTED";
		break;
	case 0x80000026:
		value = L"STATUS_LONGJUMP";
		break;
	case 0x80000027:
		value = L"STATUS_CLEANER_CARTRIDGE_INSTALLED";
		break;
	case 0x80000028:
		value = L"STATUS_PLUGPLAY_QUERY_VETOED";
		break;
	case 0x80000029:
		value = L"STATUS_UNWIND_CONSOLIDATE";
		break;
	case 0x8000002A:
		value = L"STATUS_REGISTRY_HIVE_RECOVERED";
		break;
	case 0x8000002B:
		value = L"STATUS_DLL_MIGHT_BE_INSECURE";
		break;
	case 0x8000002C:
		value = L"STATUS_DLL_MIGHT_BE_INCOMPATIBLE";
		break;
	case 0x8000002D:
		value = L"STATUS_STOPPED_ON_SYMLINK";
		break;
	case 0x80000288:
		value = L"STATUS_DEVICE_REQUIRES_CLEANING";
		break;
	case 0x80000289:
		value = L"STATUS_DEVICE_DOOR_OPEN";
		break;
	case 0x80000803:
		value = L"STATUS_DATA_LOST_REPAIR";
		break;
	case 0x80010001:
		value = L"DBG_EXCEPTION_NOT_HANDLED";
		break;
	case 0x80130001:
		value = L"STATUS_CLUSTER_NODE_ALREADY_UP";
		break;
	case 0x80130002:
		value = L"STATUS_CLUSTER_NODE_ALREADY_DOWN";
		break;
	case 0x80130003:
		value = L"STATUS_CLUSTER_NETWORK_ALREADY_ONLINE";
		break;
	case 0x80130004:
		value = L"STATUS_CLUSTER_NETWORK_ALREADY_OFFLINE";
		break;
	case 0x80130005:
		value = L"STATUS_CLUSTER_NODE_ALREADY_MEMBER";
		break;
	case 0x80190009:
		value = L"STATUS_COULD_NOT_RESIZE_LOG";
		break;
	case 0x80190029:
		value = L"STATUS_NO_TXF_METADATA";
		break;
	case 0x80190031:
		value = L"STATUS_CANT_RECOVER_WITH_HANDLE_OPEN";
		break;
	case 0x80190041:
		value = L"STATUS_TXF_METADATA_ALREADY_PRESENT";
		break;
	case 0x80190042:
		value = L"STATUS_TRANSACTION_SCOPE_CALLBACKS_NOT_SET";
		break;
	case 0x801B00EB:
		value = L"STATUS_VIDEO_HUNG_DISPLAY_DRIVER_THREAD_RECOVERED";
		break;
	case 0x801C0001:
		value = L"STATUS_FLT_BUFFER_TOO_SMALL";
		break;
	case 0x80210001:
		value = L"STATUS_FVE_PARTIAL_METADATA";
		break;
	case 0x80210002:
		value = L"STATUS_FVE_TRANSIENT_STATE";
		break;
	case 0xC0000001:
		value = L"STATUS_UNSUCCESSFUL";
		break;
	case 0xC0000002:
		value = L"STATUS_NOT_IMPLEMENTED";
		break;
	case 0xC0000003:
		value = L"STATUS_INVALID_INFO_CLASS";
		break;
	case 0xC0000004:
		value = L"STATUS_INFO_LENGTH_MISMATCH";
		break;
	case 0xC0000005:
		value = L"STATUS_ACCESS_VIOLATION";
		break;
	case 0xC0000006:
		value = L"STATUS_IN_PAGE_ERROR";
		break;
	case 0xC0000007:
		value = L"STATUS_PAGEFILE_QUOTA";
		break;
	case 0xC0000008:
		value = L"STATUS_INVALID_HANDLE";
		break;
	case 0xC0000009:
		value = L"STATUS_BAD_INITIAL_STACK";
		break;
	case 0xC000000A:
		value = L"STATUS_BAD_INITIAL_PC";
		break;
	case 0xC000000B:
		value = L"STATUS_INVALID_CID";
		break;
	case 0xC000000C:
		value = L"STATUS_TIMER_NOT_CANCELED";
		break;
	case 0xC000000D:
		value = L"STATUS_INVALID_PARAMETER";
		break;
	case 0xC000000E:
		value = L"STATUS_NO_SUCH_DEVICE";
		break;
	case 0xC000000F:
		value = L"STATUS_NO_SUCH_FILE";
		break;
	case 0xC0000010:
		value = L"STATUS_INVALID_DEVICE_REQUEST";
		break;
	case 0xC0000011:
		value = L"STATUS_END_OF_FILE";
		break;
	case 0xC0000012:
		value = L"STATUS_WRONG_VOLUME";
		break;
	case 0xC0000013:
		value = L"STATUS_NO_MEDIA_IN_DEVICE";
		break;
	case 0xC0000014:
		value = L"STATUS_UNRECOGNIZED_MEDIA";
		break;
	case 0xC0000015:
		value = L"STATUS_NONEXISTENT_SECTOR";
		break;
	case 0xC0000016:
		value = L"STATUS_MORE_PROCESSING_REQUIRED";
		break;
	case 0xC0000017:
		value = L"STATUS_NO_MEMORY";
		break;
	case 0xC0000018:
		value = L"STATUS_CONFLICTING_ADDRESSES";
		break;
	case 0xC0000019:
		value = L"STATUS_NOT_MAPPED_VIEW";
		break;
	case 0xC000001A:
		value = L"STATUS_UNABLE_TO_FREE_VM";
		break;
	case 0xC000001B:
		value = L"STATUS_UNABLE_TO_DELETE_SECTION";
		break;
	case 0xC000001C:
		value = L"STATUS_INVALID_SYSTEM_SERVICE";
		break;
	case 0xC000001D:
		value = L"STATUS_ILLEGAL_INSTRUCTION";
		break;
	case 0xC000001E:
		value = L"STATUS_INVALID_LOCK_SEQUENCE";
		break;
	case 0xC000001F:
		value = L"STATUS_INVALID_VIEW_SIZE";
		break;
	case 0xC0000020:
		value = L"STATUS_INVALID_FILE_FOR_SECTION";
		break;
	case 0xC0000021:
		value = L"STATUS_ALREADY_COMMITTED";
		break;
	case 0xC0000022:
		value = L"STATUS_ACCESS_DENIED";
		break;
	case 0xC0000023:
		value = L"STATUS_BUFFER_TOO_SMALL";
		break;
	case 0xC0000024:
		value = L"STATUS_OBJECT_TYPE_MISMATCH";
		break;
	case 0xC0000025:
		value = L"STATUS_NONCONTINUABLE_EXCEPTION";
		break;
	case 0xC0000026:
		value = L"STATUS_INVALID_DISPOSITION";
		break;
	case 0xC0000027:
		value = L"STATUS_UNWIND";
		break;
	case 0xC0000028:
		value = L"STATUS_BAD_STACK";
		break;
	case 0xC0000029:
		value = L"STATUS_INVALID_UNWIND_TARGET";
		break;
	case 0xC000002A:
		value = L"STATUS_NOT_LOCKED";
		break;
	case 0xC000002B:
		value = L"STATUS_PARITY_ERROR";
		break;
	case 0xC000002C:
		value = L"STATUS_UNABLE_TO_DECOMMIT_VM";
		break;
	case 0xC000002D:
		value = L"STATUS_NOT_COMMITTED";
		break;
	case 0xC000002E:
		value = L"STATUS_INVALID_PORT_ATTRIBUTES";
		break;
	case 0xC000002F:
		value = L"STATUS_PORT_MESSAGE_TOO_LONG";
		break;
	case 0xC0000030:
		value = L"STATUS_INVALID_PARAMETER_MIX";
		break;
	case 0xC0000031:
		value = L"STATUS_INVALID_QUOTA_LOWER";
		break;
	case 0xC0000032:
		value = L"STATUS_DISK_CORRUPT_ERROR";
		break;
	case 0xC0000033:
		value = L"STATUS_OBJECT_NAME_INVALID";
		break;
	case 0xC0000034:
		value = L"STATUS_OBJECT_NAME_NOT_FOUND";
		break;
	case 0xC0000035:
		value = L"STATUS_OBJECT_NAME_COLLISION";
		break;
	case 0xC0000037:
		value = L"STATUS_PORT_DISCONNECTED";
		break;
	case 0xC0000038:
		value = L"STATUS_DEVICE_ALREADY_ATTACHED";
		break;
	case 0xC0000039:
		value = L"STATUS_OBJECT_PATH_INVALID";
		break;
	case 0xC000003A:
		value = L"STATUS_OBJECT_PATH_NOT_FOUND";
		break;
	case 0xC000003B:
		value = L"STATUS_OBJECT_PATH_SYNTAX_BAD";
		break;
	case 0xC000003C:
		value = L"STATUS_DATA_OVERRUN";
		break;
	case 0xC000003D:
		value = L"STATUS_DATA_LATE_ERROR";
		break;
	case 0xC000003E:
		value = L"STATUS_DATA_ERROR";
		break;
	case 0xC000003F:
		value = L"STATUS_CRC_ERROR";
		break;
	case 0xC0000040:
		value = L"STATUS_SECTION_TOO_BIG";
		break;
	case 0xC0000041:
		value = L"STATUS_PORT_CONNECTION_REFUSED";
		break;
	case 0xC0000042:
		value = L"STATUS_INVALID_PORT_HANDLE";
		break;
	case 0xC0000043:
		value = L"STATUS_SHARING_VIOLATION";
		break;
	case 0xC0000044:
		value = L"STATUS_QUOTA_EXCEEDED";
		break;
	case 0xC0000045:
		value = L"STATUS_INVALID_PAGE_PROTECTION";
		break;
	case 0xC0000046:
		value = L"STATUS_MUTANT_NOT_OWNED";
		break;
	case 0xC0000047:
		value = L"STATUS_SEMAPHORE_LIMIT_EXCEEDED";
		break;
	case 0xC0000048:
		value = L"STATUS_PORT_ALREADY_SET";
		break;
	case 0xC0000049:
		value = L"STATUS_SECTION_NOT_IMAGE";
		break;
	case 0xC000004A:
		value = L"STATUS_SUSPEND_COUNT_EXCEEDED";
		break;
	case 0xC000004B:
		value = L"STATUS_THREAD_IS_TERMINATING";
		break;
	case 0xC000004C:
		value = L"STATUS_BAD_WORKING_SET_LIMIT";
		break;
	case 0xC000004D:
		value = L"STATUS_INCOMPATIBLE_FILE_MAP";
		break;
	case 0xC000004E:
		value = L"STATUS_SECTION_PROTECTION";
		break;
	case 0xC000004F:
		value = L"STATUS_EAS_NOT_SUPPORTED";
		break;
	case 0xC0000050:
		value = L"STATUS_EA_TOO_LARGE";
		break;
	case 0xC0000051:
		value = L"STATUS_NONEXISTENT_EA_ENTRY";
		break;
	case 0xC0000052:
		value = L"STATUS_NO_EAS_ON_FILE";
		break;
	case 0xC0000053:
		value = L"STATUS_EA_CORRUPT_ERROR";
		break;
	case 0xC0000054:
		value = L"STATUS_FILE_LOCK_CONFLICT";
		break;
	case 0xC0000055:
		value = L"STATUS_LOCK_NOT_GRANTED";
		break;
	case 0xC0000056:
		value = L"STATUS_DELETE_PENDING";
		break;
	case 0xC0000057:
		value = L"STATUS_CTL_FILE_NOT_SUPPORTED";
		break;
	case 0xC0000058:
		value = L"STATUS_UNKNOWN_REVISION";
		break;
	case 0xC0000059:
		value = L"STATUS_REVISION_MISMATCH";
		break;
	case 0xC000005A:
		value = L"STATUS_INVALID_OWNER";
		break;
	case 0xC000005B:
		value = L"STATUS_INVALID_PRIMARY_GROUP";
		break;
	case 0xC000005C:
		value = L"STATUS_NO_IMPERSONATION_TOKEN";
		break;
	case 0xC000005D:
		value = L"STATUS_CANT_DISABLE_MANDATORY";
		break;
	case 0xC000005E:
		value = L"STATUS_NO_LOGON_SERVERS";
		break;
	case 0xC000005F:
		value = L"STATUS_NO_SUCH_LOGON_SESSION";
		break;
	case 0xC0000060:
		value = L"STATUS_NO_SUCH_PRIVILEGE";
		break;
	case 0xC0000061:
		value = L"STATUS_PRIVILEGE_NOT_HELD";
		break;
	case 0xC0000062:
		value = L"STATUS_INVALID_ACCOUNT_NAME";
		break;
	case 0xC0000063:
		value = L"STATUS_USER_EXISTS";
		break;
	case 0xC0000064:
		value = L"STATUS_NO_SUCH_USER";
		break;
	case 0xC0000065:
		value = L"STATUS_GROUP_EXISTS";
		break;
	case 0xC0000066:
		value = L"STATUS_NO_SUCH_GROUP";
		break;
	case 0xC0000067:
		value = L"STATUS_MEMBER_IN_GROUP";
		break;
	case 0xC0000068:
		value = L"STATUS_MEMBER_NOT_IN_GROUP";
		break;
	case 0xC0000069:
		value = L"STATUS_LAST_ADMIN";
		break;
	case 0xC000006A:
		value = L"STATUS_WRONG_PASSWORD";
		break;
	case 0xC000006B:
		value = L"STATUS_ILL_FORMED_PASSWORD";
		break;
	case 0xC000006C:
		value = L"STATUS_PASSWORD_RESTRICTION";
		break;
	case 0xC000006D:
		value = L"STATUS_LOGON_FAILURE";
		break;
	case 0xC000006E:
		value = L"STATUS_ACCOUNT_RESTRICTION";
		break;
	case 0xC000006F:
		value = L"STATUS_INVALID_LOGON_HOURS";
		break;
	case 0xC0000070:
		value = L"STATUS_INVALID_WORKSTATION";
		break;
	case 0xC0000071:
		value = L"STATUS_PASSWORD_EXPIRED";
		break;
	case 0xC0000072:
		value = L"STATUS_ACCOUNT_DISABLED";
		break;
	case 0xC0000073:
		value = L"STATUS_NONE_MAPPED";
		break;
	case 0xC0000074:
		value = L"STATUS_TOO_MANY_LUIDS_REQUESTED";
		break;
	case 0xC0000075:
		value = L"STATUS_LUIDS_EXHAUSTED";
		break;
	case 0xC0000076:
		value = L"STATUS_INVALID_SUB_AUTHORITY";
		break;
	case 0xC0000077:
		value = L"STATUS_INVALID_ACL";
		break;
	case 0xC0000078:
		value = L"STATUS_INVALID_SID";
		break;
	case 0xC0000079:
		value = L"STATUS_INVALID_SECURITY_DESCR";
		break;
	case 0xC000007A:
		value = L"STATUS_PROCEDURE_NOT_FOUND";
		break;
	case 0xC000007B:
		value = L"STATUS_INVALID_IMAGE_FORMAT";
		break;
	case 0xC000007C:
		value = L"STATUS_NO_TOKEN";
		break;
	case 0xC000007D:
		value = L"STATUS_BAD_INHERITANCE_ACL";
		break;
	case 0xC000007E:
		value = L"STATUS_RANGE_NOT_LOCKED";
		break;
	case 0xC000007F:
		value = L"STATUS_DISK_FULL";
		break;
	case 0xC0000080:
		value = L"STATUS_SERVER_DISABLED";
		break;
	case 0xC0000081:
		value = L"STATUS_SERVER_NOT_DISABLED";
		break;
	case 0xC0000082:
		value = L"STATUS_TOO_MANY_GUIDS_REQUESTED";
		break;
	case 0xC0000083:
		value = L"STATUS_GUIDS_EXHAUSTED";
		break;
	case 0xC0000084:
		value = L"STATUS_INVALID_ID_AUTHORITY";
		break;
	case 0xC0000085:
		value = L"STATUS_AGENTS_EXHAUSTED";
		break;
	case 0xC0000086:
		value = L"STATUS_INVALID_VOLUME_LABEL";
		break;
	case 0xC0000087:
		value = L"STATUS_SECTION_NOT_EXTENDED";
		break;
	case 0xC0000088:
		value = L"STATUS_NOT_MAPPED_DATA";
		break;
	case 0xC0000089:
		value = L"STATUS_RESOURCE_DATA_NOT_FOUND";
		break;
	case 0xC000008A:
		value = L"STATUS_RESOURCE_TYPE_NOT_FOUND";
		break;
	case 0xC000008B:
		value = L"STATUS_RESOURCE_NAME_NOT_FOUND";
		break;
	case 0xC000008C:
		value = L"STATUS_ARRAY_BOUNDS_EXCEEDED";
		break;
	case 0xC000008D:
		value = L"STATUS_FLOAT_DENORMAL_OPERAND";
		break;
	case 0xC000008E:
		value = L"STATUS_FLOAT_DIVIDE_BY_ZERO";
		break;
	case 0xC000008F:
		value = L"STATUS_FLOAT_INEXACT_RESULT";
		break;
	case 0xC0000090:
		value = L"STATUS_FLOAT_INVALID_OPERATION";
		break;
	case 0xC0000091:
		value = L"STATUS_FLOAT_OVERFLOW";
		break;
	case 0xC0000092:
		value = L"STATUS_FLOAT_STACK_CHECK";
		break;
	case 0xC0000093:
		value = L"STATUS_FLOAT_UNDERFLOW";
		break;
	case 0xC0000094:
		value = L"STATUS_INTEGER_DIVIDE_BY_ZERO";
		break;
	case 0xC0000095:
		value = L"STATUS_INTEGER_OVERFLOW";
		break;
	case 0xC0000096:
		value = L"STATUS_PRIVILEGED_INSTRUCTION";
		break;
	case 0xC0000097:
		value = L"STATUS_TOO_MANY_PAGING_FILES";
		break;
	case 0xC0000098:
		value = L"STATUS_FILE_INVALID";
		break;
	case 0xC0000099:
		value = L"STATUS_ALLOTTED_SPACE_EXCEEDED";
		break;
	case 0xC000009A:
		value = L"STATUS_INSUFFICIENT_RESOURCES";
		break;
	case 0xC000009B:
		value = L"STATUS_DFS_EXIT_PATH_FOUND";
		break;
	case 0xC000009C:
		value = L"STATUS_DEVICE_DATA_ERROR";
		break;
	case 0xC000009D:
		value = L"STATUS_DEVICE_NOT_CONNECTED";
		break;
	case 0xC000009F:
		value = L"STATUS_FREE_VM_NOT_AT_BASE";
		break;
	case 0xC00000A0:
		value = L"STATUS_MEMORY_NOT_ALLOCATED";
		break;
	case 0xC00000A1:
		value = L"STATUS_WORKING_SET_QUOTA";
		break;
	case 0xC00000A2:
		value = L"STATUS_MEDIA_WRITE_PROTECTED";
		break;
	case 0xC00000A3:
		value = L"STATUS_DEVICE_NOT_READY";
		break;
	case 0xC00000A4:
		value = L"STATUS_INVALID_GROUP_ATTRIBUTES";
		break;
	case 0xC00000A5:
		value = L"STATUS_BAD_IMPERSONATION_LEVEL";
		break;
	case 0xC00000A6:
		value = L"STATUS_CANT_OPEN_ANONYMOUS";
		break;
	case 0xC00000A7:
		value = L"STATUS_BAD_VALIDATION_CLASS";
		break;
	case 0xC00000A8:
		value = L"STATUS_BAD_TOKEN_TYPE";
		break;
	case 0xC00000A9:
		value = L"STATUS_BAD_MASTER_BOOT_RECORD";
		break;
	case 0xC00000AA:
		value = L"STATUS_INSTRUCTION_MISALIGNMENT";
		break;
	case 0xC00000AB:
		value = L"STATUS_INSTANCE_NOT_AVAILABLE";
		break;
	case 0xC00000AC:
		value = L"STATUS_PIPE_NOT_AVAILABLE";
		break;
	case 0xC00000AD:
		value = L"STATUS_INVALID_PIPE_STATE";
		break;
	case 0xC00000AE:
		value = L"STATUS_PIPE_BUSY";
		break;
	case 0xC00000AF:
		value = L"STATUS_ILLEGAL_FUNCTION";
		break;
	case 0xC00000B0:
		value = L"STATUS_PIPE_DISCONNECTED";
		break;
	case 0xC00000B1:
		value = L"STATUS_PIPE_CLOSING";
		break;
	case 0xC00000B2:
		value = L"STATUS_PIPE_CONNECTED";
		break;
	case 0xC00000B3:
		value = L"STATUS_PIPE_LISTENING";
		break;
	case 0xC00000B4:
		value = L"STATUS_INVALID_READ_MODE";
		break;
	case 0xC00000B5:
		value = L"STATUS_IO_TIMEOUT";
		break;
	case 0xC00000B6:
		value = L"STATUS_FILE_FORCED_CLOSED";
		break;
	case 0xC00000B7:
		value = L"STATUS_PROFILING_NOT_STARTED";
		break;
	case 0xC00000B8:
		value = L"STATUS_PROFILING_NOT_STOPPED";
		break;
	case 0xC00000B9:
		value = L"STATUS_COULD_NOT_INTERPRET";
		break;
	case 0xC00000BA:
		value = L"STATUS_FILE_IS_A_DIRECTORY";
		break;
	case 0xC00000BB:
		value = L"STATUS_NOT_SUPPORTED";
		break;
	case 0xC00000BC:
		value = L"STATUS_REMOTE_NOT_LISTENING";
		break;
	case 0xC00000BD:
		value = L"STATUS_DUPLICATE_NAME";
		break;
	case 0xC00000BE:
		value = L"STATUS_BAD_NETWORK_PATH";
		break;
	case 0xC00000BF:
		value = L"STATUS_NETWORK_BUSY";
		break;
	case 0xC00000C0:
		value = L"STATUS_DEVICE_DOES_NOT_EXIST";
		break;
	case 0xC00000C1:
		value = L"STATUS_TOO_MANY_COMMANDS";
		break;
	case 0xC00000C2:
		value = L"STATUS_ADAPTER_HARDWARE_ERROR";
		break;
	case 0xC00000C3:
		value = L"STATUS_INVALID_NETWORK_RESPONSE";
		break;
	case 0xC00000C4:
		value = L"STATUS_UNEXPECTED_NETWORK_ERROR";
		break;
	case 0xC00000C5:
		value = L"STATUS_BAD_REMOTE_ADAPTER";
		break;
	case 0xC00000C6:
		value = L"STATUS_PRINT_QUEUE_FULL";
		break;
	case 0xC00000C7:
		value = L"STATUS_NO_SPOOL_SPACE";
		break;
	case 0xC00000C8:
		value = L"STATUS_PRINT_CANCELLED";
		break;
	case 0xC00000C9:
		value = L"STATUS_NETWORK_NAME_DELETED";
		break;
	case 0xC00000CA:
		value = L"STATUS_NETWORK_ACCESS_DENIED";
		break;
	case 0xC00000CB:
		value = L"STATUS_BAD_DEVICE_TYPE";
		break;
	case 0xC00000CC:
		value = L"STATUS_BAD_NETWORK_NAME";
		break;
	case 0xC00000CD:
		value = L"STATUS_TOO_MANY_NAMES";
		break;
	case 0xC00000CE:
		value = L"STATUS_TOO_MANY_SESSIONS";
		break;
	case 0xC00000CF:
		value = L"STATUS_SHARING_PAUSED";
		break;
	case 0xC00000D0:
		value = L"STATUS_REQUEST_NOT_ACCEPTED";
		break;
	case 0xC00000D1:
		value = L"STATUS_REDIRECTOR_PAUSED";
		break;
	case 0xC00000D2:
		value = L"STATUS_NET_WRITE_FAULT";
		break;
	case 0xC00000D3:
		value = L"STATUS_PROFILING_AT_LIMIT";
		break;
	case 0xC00000D4:
		value = L"STATUS_NOT_SAME_DEVICE";
		break;
	case 0xC00000D5:
		value = L"STATUS_FILE_RENAMED";
		break;
	case 0xC00000D6:
		value = L"STATUS_VIRTUAL_CIRCUIT_CLOSED";
		break;
	case 0xC00000D7:
		value = L"STATUS_NO_SECURITY_ON_OBJECT";
		break;
	case 0xC00000D8:
		value = L"STATUS_CANT_WAIT";
		break;
	case 0xC00000D9:
		value = L"STATUS_PIPE_EMPTY";
		break;
	case 0xC00000DA:
		value = L"STATUS_CANT_ACCESS_DOMAIN_INFO";
		break;
	case 0xC00000DB:
		value = L"STATUS_CANT_TERMINATE_SELF";
		break;
	case 0xC00000DC:
		value = L"STATUS_INVALID_SERVER_STATE";
		break;
	case 0xC00000DD:
		value = L"STATUS_INVALID_DOMAIN_STATE";
		break;
	case 0xC00000DE:
		value = L"STATUS_INVALID_DOMAIN_ROLE";
		break;
	case 0xC00000DF:
		value = L"STATUS_NO_SUCH_DOMAIN";
		break;
	case 0xC00000E0:
		value = L"STATUS_DOMAIN_EXISTS";
		break;
	case 0xC00000E1:
		value = L"STATUS_DOMAIN_LIMIT_EXCEEDED";
		break;
	case 0xC00000E2:
		value = L"STATUS_OPLOCK_NOT_GRANTED";
		break;
	case 0xC00000E3:
		value = L"STATUS_INVALID_OPLOCK_PROTOCOL";
		break;
	case 0xC00000E4:
		value = L"STATUS_INTERNAL_DB_CORRUPTION";
		break;
	case 0xC00000E5:
		value = L"STATUS_INTERNAL_ERROR";
		break;
	case 0xC00000E6:
		value = L"STATUS_GENERIC_NOT_MAPPED";
		break;
	case 0xC00000E7:
		value = L"STATUS_BAD_DESCRIPTOR_FORMAT";
		break;
	case 0xC00000E8:
		value = L"STATUS_INVALID_USER_BUFFER";
		break;
	case 0xC00000E9:
		value = L"STATUS_UNEXPECTED_IO_ERROR";
		break;
	case 0xC00000EA:
		value = L"STATUS_UNEXPECTED_MM_CREATE_ERR";
		break;
	case 0xC00000EB:
		value = L"STATUS_UNEXPECTED_MM_MAP_ERROR";
		break;
	case 0xC00000EC:
		value = L"STATUS_UNEXPECTED_MM_EXTEND_ERR";
		break;
	case 0xC00000ED:
		value = L"STATUS_NOT_LOGON_PROCESS";
		break;
	case 0xC00000EE:
		value = L"STATUS_LOGON_SESSION_EXISTS";
		break;
	case 0xC00000EF:
		value = L"STATUS_INVALID_PARAMETER_1";
		break;
	case 0xC00000F0:
		value = L"STATUS_INVALID_PARAMETER_2";
		break;
	case 0xC00000F1:
		value = L"STATUS_INVALID_PARAMETER_3";
		break;
	case 0xC00000F2:
		value = L"STATUS_INVALID_PARAMETER_4";
		break;
	case 0xC00000F3:
		value = L"STATUS_INVALID_PARAMETER_5";
		break;
	case 0xC00000F4:
		value = L"STATUS_INVALID_PARAMETER_6";
		break;
	case 0xC00000F5:
		value = L"STATUS_INVALID_PARAMETER_7";
		break;
	case 0xC00000F6:
		value = L"STATUS_INVALID_PARAMETER_8";
		break;
	case 0xC00000F7:
		value = L"STATUS_INVALID_PARAMETER_9";
		break;
	case 0xC00000F8:
		value = L"STATUS_INVALID_PARAMETER_10";
		break;
	case 0xC00000F9:
		value = L"STATUS_INVALID_PARAMETER_11";
		break;
	case 0xC00000FA:
		value = L"STATUS_INVALID_PARAMETER_12";
		break;
	case 0xC00000FB:
		value = L"STATUS_REDIRECTOR_NOT_STARTED";
		break;
	case 0xC00000FC:
		value = L"STATUS_REDIRECTOR_STARTED";
		break;
	case 0xC00000FD:
		value = L"STATUS_STACK_OVERFLOW";
		break;
	case 0xC00000FE:
		value = L"STATUS_NO_SUCH_PACKAGE";
		break;
	case 0xC00000FF:
		value = L"STATUS_BAD_FUNCTION_TABLE";
		break;
	case 0xC0000100:
		value = L"STATUS_VARIABLE_NOT_FOUND";
		break;
	case 0xC0000101:
		value = L"STATUS_DIRECTORY_NOT_EMPTY";
		break;
	case 0xC0000102:
		value = L"STATUS_FILE_CORRUPT_ERROR";
		break;
	case 0xC0000103:
		value = L"STATUS_NOT_A_DIRECTORY";
		break;
	case 0xC0000104:
		value = L"STATUS_BAD_LOGON_SESSION_STATE";
		break;
	case 0xC0000105:
		value = L"STATUS_LOGON_SESSION_COLLISION";
		break;
	case 0xC0000106:
		value = L"STATUS_NAME_TOO_LONG";
		break;
	case 0xC0000107:
		value = L"STATUS_FILES_OPEN";
		break;
	case 0xC0000108:
		value = L"STATUS_CONNECTION_IN_USE";
		break;
	case 0xC0000109:
		value = L"STATUS_MESSAGE_NOT_FOUND";
		break;
	case 0xC000010A:
		value = L"STATUS_PROCESS_IS_TERMINATING";
		break;
	case 0xC000010B:
		value = L"STATUS_INVALID_LOGON_TYPE";
		break;
	case 0xC000010C:
		value = L"STATUS_NO_GUID_TRANSLATION";
		break;
	case 0xC000010D:
		value = L"STATUS_CANNOT_IMPERSONATE";
		break;
	case 0xC000010E:
		value = L"STATUS_IMAGE_ALREADY_LOADED";
		break;
	case 0xC0000117:
		value = L"STATUS_NO_LDT";
		break;
	case 0xC0000118:
		value = L"STATUS_INVALID_LDT_SIZE";
		break;
	case 0xC0000119:
		value = L"STATUS_INVALID_LDT_OFFSET";
		break;
	case 0xC000011A:
		value = L"STATUS_INVALID_LDT_DESCRIPTOR";
		break;
	case 0xC000011B:
		value = L"STATUS_INVALID_IMAGE_NE_FORMAT";
		break;
	case 0xC000011C:
		value = L"STATUS_RXACT_INVALID_STATE";
		break;
	case 0xC000011D:
		value = L"STATUS_RXACT_COMMIT_FAILURE";
		break;
	case 0xC000011E:
		value = L"STATUS_MAPPED_FILE_SIZE_ZERO";
		break;
	case 0xC000011F:
		value = L"STATUS_TOO_MANY_OPENED_FILES";
		break;
	case 0xC0000120:
		value = L"STATUS_CANCELLED";
		break;
	case 0xC0000121:
		value = L"STATUS_CANNOT_DELETE";
		break;
	case 0xC0000122:
		value = L"STATUS_INVALID_COMPUTER_NAME";
		break;
	case 0xC0000123:
		value = L"STATUS_FILE_DELETED";
		break;
	case 0xC0000124:
		value = L"STATUS_SPECIAL_ACCOUNT";
		break;
	case 0xC0000125:
		value = L"STATUS_SPECIAL_GROUP";
		break;
	case 0xC0000126:
		value = L"STATUS_SPECIAL_USER";
		break;
	case 0xC0000127:
		value = L"STATUS_MEMBERS_PRIMARY_GROUP";
		break;
	case 0xC0000128:
		value = L"STATUS_FILE_CLOSED";
		break;
	case 0xC0000129:
		value = L"STATUS_TOO_MANY_THREADS";
		break;
	case 0xC000012A:
		value = L"STATUS_THREAD_NOT_IN_PROCESS";
		break;
	case 0xC000012B:
		value = L"STATUS_TOKEN_ALREADY_IN_USE";
		break;
	case 0xC000012C:
		value = L"STATUS_PAGEFILE_QUOTA_EXCEEDED";
		break;
	case 0xC000012D:
		value = L"STATUS_COMMITMENT_LIMIT";
		break;
	case 0xC000012E:
		value = L"STATUS_INVALID_IMAGE_LE_FORMAT";
		break;
	case 0xC000012F:
		value = L"STATUS_INVALID_IMAGE_NOT_MZ";
		break;
	case 0xC0000130:
		value = L"STATUS_INVALID_IMAGE_PROTECT";
		break;
	case 0xC0000131:
		value = L"STATUS_INVALID_IMAGE_WIN_16";
		break;
	case 0xC0000132:
		value = L"STATUS_LOGON_SERVER_CONFLICT";
		break;
	case 0xC0000133:
		value = L"STATUS_TIME_DIFFERENCE_AT_DC";
		break;
	case 0xC0000134:
		value = L"STATUS_SYNCHRONIZATION_REQUIRED";
		break;
	case 0xC0000135:
		value = L"STATUS_DLL_NOT_FOUND";
		break;
	case 0xC0000136:
		value = L"STATUS_OPEN_FAILED";
		break;
	case 0xC0000137:
		value = L"STATUS_IO_PRIVILEGE_FAILED";
		break;
	case 0xC0000138:
		value = L"STATUS_ORDINAL_NOT_FOUND";
		break;
	case 0xC0000139:
		value = L"STATUS_ENTRYPOINT_NOT_FOUND";
		break;
	case 0xC000013A:
		value = L"STATUS_CONTROL_C_EXIT";
		break;
	case 0xC000013B:
		value = L"STATUS_LOCAL_DISCONNECT";
		break;
	case 0xC000013C:
		value = L"STATUS_REMOTE_DISCONNECT";
		break;
	case 0xC000013D:
		value = L"STATUS_REMOTE_RESOURCES";
		break;
	case 0xC000013E:
		value = L"STATUS_LINK_FAILED";
		break;
	case 0xC000013F:
		value = L"STATUS_LINK_TIMEOUT";
		break;
	case 0xC0000140:
		value = L"STATUS_INVALID_CONNECTION";
		break;
	case 0xC0000141:
		value = L"STATUS_INVALID_ADDRESS";
		break;
	case 0xC0000142:
		value = L"STATUS_DLL_INIT_FAILED";
		break;
	case 0xC0000143:
		value = L"STATUS_MISSING_SYSTEMFILE";
		break;
	case 0xC0000144:
		value = L"STATUS_UNHANDLED_EXCEPTION";
		break;
	case 0xC0000145:
		value = L"STATUS_APP_INIT_FAILURE";
		break;
	case 0xC0000146:
		value = L"STATUS_PAGEFILE_CREATE_FAILED";
		break;
	case 0xC0000147:
		value = L"STATUS_NO_PAGEFILE";
		break;
	case 0xC0000148:
		value = L"STATUS_INVALID_LEVEL";
		break;
	case 0xC0000149:
		value = L"STATUS_WRONG_PASSWORD_CORE";
		break;
	case 0xC000014A:
		value = L"STATUS_ILLEGAL_FLOAT_CONTEXT";
		break;
	case 0xC000014B:
		value = L"STATUS_PIPE_BROKEN";
		break;
	case 0xC000014C:
		value = L"STATUS_REGISTRY_CORRUPT";
		break;
	case 0xC000014D:
		value = L"STATUS_REGISTRY_IO_FAILED";
		break;
	case 0xC000014E:
		value = L"STATUS_NO_EVENT_PAIR";
		break;
	case 0xC000014F:
		value = L"STATUS_UNRECOGNIZED_VOLUME";
		break;
	case 0xC0000150:
		value = L"STATUS_SERIAL_NO_DEVICE_INITED";
		break;
	case 0xC0000151:
		value = L"STATUS_NO_SUCH_ALIAS";
		break;
	case 0xC0000152:
		value = L"STATUS_MEMBER_NOT_IN_ALIAS";
		break;
	case 0xC0000153:
		value = L"STATUS_MEMBER_IN_ALIAS";
		break;
	case 0xC0000154:
		value = L"STATUS_ALIAS_EXISTS";
		break;
	case 0xC0000155:
		value = L"STATUS_LOGON_NOT_GRANTED";
		break;
	case 0xC0000156:
		value = L"STATUS_TOO_MANY_SECRETS";
		break;
	case 0xC0000157:
		value = L"STATUS_SECRET_TOO_LONG";
		break;
	case 0xC0000158:
		value = L"STATUS_INTERNAL_DB_ERROR";
		break;
	case 0xC0000159:
		value = L"STATUS_FULLSCREEN_MODE";
		break;
	case 0xC000015A:
		value = L"STATUS_TOO_MANY_CONTEXT_IDS";
		break;
	case 0xC000015B:
		value = L"STATUS_LOGON_TYPE_NOT_GRANTED";
		break;
	case 0xC000015C:
		value = L"STATUS_NOT_REGISTRY_FILE";
		break;
	case 0xC000015D:
		value = L"STATUS_NT_CROSS_ENCRYPTION_REQUIRED";
		break;
	case 0xC000015E:
		value = L"STATUS_DOMAIN_CTRLR_CONFIG_ERROR";
		break;
	case 0xC000015F:
		value = L"STATUS_FT_MISSING_MEMBER";
		break;
	case 0xC0000160:
		value = L"STATUS_ILL_FORMED_SERVICE_ENTRY";
		break;
	case 0xC0000161:
		value = L"STATUS_ILLEGAL_CHARACTER";
		break;
	case 0xC0000162:
		value = L"STATUS_UNMAPPABLE_CHARACTER";
		break;
	case 0xC0000163:
		value = L"STATUS_UNDEFINED_CHARACTER";
		break;
	case 0xC0000164:
		value = L"STATUS_FLOPPY_VOLUME";
		break;
	case 0xC0000165:
		value = L"STATUS_FLOPPY_ID_MARK_NOT_FOUND";
		break;
	case 0xC0000166:
		value = L"STATUS_FLOPPY_WRONG_CYLINDER";
		break;
	case 0xC0000167:
		value = L"STATUS_FLOPPY_UNKNOWN_ERROR";
		break;
	case 0xC0000168:
		value = L"STATUS_FLOPPY_BAD_REGISTERS";
		break;
	case 0xC0000169:
		value = L"STATUS_DISK_RECALIBRATE_FAILED";
		break;
	case 0xC000016A:
		value = L"STATUS_DISK_OPERATION_FAILED";
		break;
	case 0xC000016B:
		value = L"STATUS_DISK_RESET_FAILED";
		break;
	case 0xC000016C:
		value = L"STATUS_SHARED_IRQ_BUSY";
		break;
	case 0xC000016D:
		value = L"STATUS_FT_ORPHANING";
		break;
	case 0xC000016E:
		value = L"STATUS_BIOS_FAILED_TO_CONNECT_INTERRUPT";
		break;
	case 0xC0000172:
		value = L"STATUS_PARTITION_FAILURE";
		break;
	case 0xC0000173:
		value = L"STATUS_INVALID_BLOCK_LENGTH";
		break;
	case 0xC0000174:
		value = L"STATUS_DEVICE_NOT_PARTITIONED";
		break;
	case 0xC0000175:
		value = L"STATUS_UNABLE_TO_LOCK_MEDIA";
		break;
	case 0xC0000176:
		value = L"STATUS_UNABLE_TO_UNLOAD_MEDIA";
		break;
	case 0xC0000177:
		value = L"STATUS_EOM_OVERFLOW";
		break;
	case 0xC0000178:
		value = L"STATUS_NO_MEDIA";
		break;
	case 0xC000017A:
		value = L"STATUS_NO_SUCH_MEMBER";
		break;
	case 0xC000017B:
		value = L"STATUS_INVALID_MEMBER";
		break;
	case 0xC000017C:
		value = L"STATUS_KEY_DELETED";
		break;
	case 0xC000017D:
		value = L"STATUS_NO_LOG_SPACE";
		break;
	case 0xC000017E:
		value = L"STATUS_TOO_MANY_SIDS";
		break;
	case 0xC000017F:
		value = L"STATUS_LM_CROSS_ENCRYPTION_REQUIRED";
		break;
	case 0xC0000180:
		value = L"STATUS_KEY_HAS_CHILDREN";
		break;
	case 0xC0000181:
		value = L"STATUS_CHILD_MUST_BE_VOLATILE";
		break;
	case 0xC0000182:
		value = L"STATUS_DEVICE_CONFIGURATION_ERROR";
		break;
	case 0xC0000183:
		value = L"STATUS_DRIVER_INTERNAL_ERROR";
		break;
	case 0xC0000184:
		value = L"STATUS_INVALID_DEVICE_STATE";
		break;
	case 0xC0000185:
		value = L"STATUS_IO_DEVICE_ERROR";
		break;
	case 0xC0000186:
		value = L"STATUS_DEVICE_PROTOCOL_ERROR";
		break;
	case 0xC0000187:
		value = L"STATUS_BACKUP_CONTROLLER";
		break;
	case 0xC0000188:
		value = L"STATUS_LOG_FILE_FULL";
		break;
	case 0xC0000189:
		value = L"STATUS_TOO_LATE";
		break;
	case 0xC000018A:
		value = L"STATUS_NO_TRUST_LSA_SECRET";
		break;
	case 0xC000018B:
		value = L"STATUS_NO_TRUST_SAM_ACCOUNT";
		break;
	case 0xC000018C:
		value = L"STATUS_TRUSTED_DOMAIN_FAILURE";
		break;
	case 0xC000018D:
		value = L"STATUS_TRUSTED_RELATIONSHIP_FAILURE";
		break;
	case 0xC000018E:
		value = L"STATUS_EVENTLOG_FILE_CORRUPT";
		break;
	case 0xC000018F:
		value = L"STATUS_EVENTLOG_CANT_START";
		break;
	case 0xC0000190:
		value = L"STATUS_TRUST_FAILURE";
		break;
	case 0xC0000191:
		value = L"STATUS_MUTANT_LIMIT_EXCEEDED";
		break;
	case 0xC0000192:
		value = L"STATUS_NETLOGON_NOT_STARTED";
		break;
	case 0xC0000193:
		value = L"STATUS_ACCOUNT_EXPIRED";
		break;
	case 0xC0000194:
		value = L"STATUS_POSSIBLE_DEADLOCK";
		break;
	case 0xC0000195:
		value = L"STATUS_NETWORK_CREDENTIAL_CONFLICT";
		break;
	case 0xC0000196:
		value = L"STATUS_REMOTE_SESSION_LIMIT";
		break;
	case 0xC0000197:
		value = L"STATUS_EVENTLOG_FILE_CHANGED";
		break;
	case 0xC0000198:
		value = L"STATUS_NOLOGON_INTERDOMAIN_TRUST_ACCOUNT";
		break;
	case 0xC0000199:
		value = L"STATUS_NOLOGON_WORKSTATION_TRUST_ACCOUNT";
		break;
	case 0xC000019A:
		value = L"STATUS_NOLOGON_SERVER_TRUST_ACCOUNT";
		break;
	case 0xC000019B:
		value = L"STATUS_DOMAIN_TRUST_INCONSISTENT";
		break;
	case 0xC000019C:
		value = L"STATUS_FS_DRIVER_REQUIRED";
		break;
	case 0xC000019D:
		value = L"STATUS_IMAGE_ALREADY_LOADED_AS_DLL";
		break;
	case 0xC000019E:
		value = L"STATUS_INCOMPATIBLE_WITH_GLOBAL_SHORT_NAME_REGISTRY_SETTING";
		break;
	case 0xC000019F:
		value = L"STATUS_SHORT_NAMES_NOT_ENABLED_ON_VOLUME";
		break;
	case 0xC00001A0:
		value = L"STATUS_SECURITY_STREAM_IS_INCONSISTENT";
		break;
	case 0xC00001A1:
		value = L"STATUS_INVALID_LOCK_RANGE";
		break;
	case 0xC00001A2:
		value = L"STATUS_INVALID_ACE_CONDITION";
		break;
	case 0xC00001A3:
		value = L"STATUS_IMAGE_SUBSYSTEM_NOT_PRESENT";
		break;
	case 0xC00001A4:
		value = L"STATUS_NOTIFICATION_GUID_ALREADY_DEFINED";
		break;
	case 0xC0000201:
		value = L"STATUS_NETWORK_OPEN_RESTRICTION";
		break;
	case 0xC0000202:
		value = L"STATUS_NO_USER_SESSION_KEY";
		break;
	case 0xC0000203:
		value = L"STATUS_USER_SESSION_DELETED";
		break;
	case 0xC0000204:
		value = L"STATUS_RESOURCE_LANG_NOT_FOUND";
		break;
	case 0xC0000205:
		value = L"STATUS_INSUFF_SERVER_RESOURCES";
		break;
	case 0xC0000206:
		value = L"STATUS_INVALID_BUFFER_SIZE";
		break;
	case 0xC0000207:
		value = L"STATUS_INVALID_ADDRESS_COMPONENT";
		break;
	case 0xC0000208:
		value = L"STATUS_INVALID_ADDRESS_WILDCARD";
		break;
	case 0xC0000209:
		value = L"STATUS_TOO_MANY_ADDRESSES";
		break;
	case 0xC000020A:
		value = L"STATUS_ADDRESS_ALREADY_EXISTS";
		break;
	case 0xC000020B:
		value = L"STATUS_ADDRESS_CLOSED";
		break;
	case 0xC000020C:
		value = L"STATUS_CONNECTION_DISCONNECTED";
		break;
	case 0xC000020D:
		value = L"STATUS_CONNECTION_RESET";
		break;
	case 0xC000020E:
		value = L"STATUS_TOO_MANY_NODES";
		break;
	case 0xC000020F:
		value = L"STATUS_TRANSACTION_ABORTED";
		break;
	case 0xC0000210:
		value = L"STATUS_TRANSACTION_TIMED_OUT";
		break;
	case 0xC0000211:
		value = L"STATUS_TRANSACTION_NO_RELEASE";
		break;
	case 0xC0000212:
		value = L"STATUS_TRANSACTION_NO_MATCH";
		break;
	case 0xC0000213:
		value = L"STATUS_TRANSACTION_RESPONDED";
		break;
	case 0xC0000214:
		value = L"STATUS_TRANSACTION_INVALID_ID";
		break;
	case 0xC0000215:
		value = L"STATUS_TRANSACTION_INVALID_TYPE";
		break;
	case 0xC0000216:
		value = L"STATUS_NOT_SERVER_SESSION";
		break;
	case 0xC0000217:
		value = L"STATUS_NOT_CLIENT_SESSION";
		break;
	case 0xC0000218:
		value = L"STATUS_CANNOT_LOAD_REGISTRY_FILE";
		break;
	case 0xC0000219:
		value = L"STATUS_DEBUG_ATTACH_FAILED";
		break;
	case 0xC000021A:
		value = L"STATUS_SYSTEM_PROCESS_TERMINATED";
		break;
	case 0xC000021B:
		value = L"STATUS_DATA_NOT_ACCEPTED";
		break;
	case 0xC000021C:
		value = L"STATUS_NO_BROWSER_SERVERS_FOUND";
		break;
	case 0xC000021D:
		value = L"STATUS_VDM_HARD_ERROR";
		break;
	case 0xC000021E:
		value = L"STATUS_DRIVER_CANCEL_TIMEOUT";
		break;
	case 0xC000021F:
		value = L"STATUS_REPLY_MESSAGE_MISMATCH";
		break;
	case 0xC0000220:
		value = L"STATUS_MAPPED_ALIGNMENT";
		break;
	case 0xC0000221:
		value = L"STATUS_IMAGE_CHECKSUM_MISMATCH";
		break;
	case 0xC0000222:
		value = L"STATUS_LOST_WRITEBEHIND_DATA";
		break;
	case 0xC0000223:
		value = L"STATUS_CLIENT_SERVER_PARAMETERS_INVALID";
		break;
	case 0xC0000224:
		value = L"STATUS_PASSWORD_MUST_CHANGE";
		break;
	case 0xC0000225:
		value = L"STATUS_NOT_FOUND";
		break;
	case 0xC0000226:
		value = L"STATUS_NOT_TINY_STREAM";
		break;
	case 0xC0000227:
		value = L"STATUS_RECOVERY_FAILURE";
		break;
	case 0xC0000228:
		value = L"STATUS_STACK_OVERFLOW_READ";
		break;
	case 0xC0000229:
		value = L"STATUS_FAIL_CHECK";
		break;
	case 0xC000022A:
		value = L"STATUS_DUPLICATE_OBJECTID";
		break;
	case 0xC000022B:
		value = L"STATUS_OBJECTID_EXISTS";
		break;
	case 0xC000022C:
		value = L"STATUS_CONVERT_TO_LARGE";
		break;
	case 0xC000022D:
		value = L"STATUS_RETRY";
		break;
	case 0xC000022E:
		value = L"STATUS_FOUND_OUT_OF_SCOPE";
		break;
	case 0xC000022F:
		value = L"STATUS_ALLOCATE_BUCKET";
		break;
	case 0xC0000230:
		value = L"STATUS_PROPSET_NOT_FOUND";
		break;
	case 0xC0000231:
		value = L"STATUS_MARSHALL_OVERFLOW";
		break;
	case 0xC0000232:
		value = L"STATUS_INVALID_VARIANT";
		break;
	case 0xC0000233:
		value = L"STATUS_DOMAIN_CONTROLLER_NOT_FOUND";
		break;
	case 0xC0000234:
		value = L"STATUS_ACCOUNT_LOCKED_OUT";
		break;
	case 0xC0000235:
		value = L"STATUS_HANDLE_NOT_CLOSABLE";
		break;
	case 0xC0000236:
		value = L"STATUS_CONNECTION_REFUSED";
		break;
	case 0xC0000237:
		value = L"STATUS_GRACEFUL_DISCONNECT";
		break;
	case 0xC0000238:
		value = L"STATUS_ADDRESS_ALREADY_ASSOCIATED";
		break;
	case 0xC0000239:
		value = L"STATUS_ADDRESS_NOT_ASSOCIATED";
		break;
	case 0xC000023A:
		value = L"STATUS_CONNECTION_INVALID";
		break;
	case 0xC000023B:
		value = L"STATUS_CONNECTION_ACTIVE";
		break;
	case 0xC000023C:
		value = L"STATUS_NETWORK_UNREACHABLE";
		break;
	case 0xC000023D:
		value = L"STATUS_HOST_UNREACHABLE";
		break;
	case 0xC000023E:
		value = L"STATUS_PROTOCOL_UNREACHABLE";
		break;
	case 0xC000023F:
		value = L"STATUS_PORT_UNREACHABLE";
		break;
	case 0xC0000240:
		value = L"STATUS_REQUEST_ABORTED";
		break;
	case 0xC0000241:
		value = L"STATUS_CONNECTION_ABORTED";
		break;
	case 0xC0000242:
		value = L"STATUS_BAD_COMPRESSION_BUFFER";
		break;
	case 0xC0000243:
		value = L"STATUS_USER_MAPPED_FILE";
		break;
	case 0xC0000244:
		value = L"STATUS_AUDIT_FAILED";
		break;
	case 0xC0000245:
		value = L"STATUS_TIMER_RESOLUTION_NOT_SET";
		break;
	case 0xC0000246:
		value = L"STATUS_CONNECTION_COUNT_LIMIT";
		break;
	case 0xC0000247:
		value = L"STATUS_LOGIN_TIME_RESTRICTION";
		break;
	case 0xC0000248:
		value = L"STATUS_LOGIN_WKSTA_RESTRICTION";
		break;
	case 0xC0000249:
		value = L"STATUS_IMAGE_MP_UP_MISMATCH";
		break;
	case 0xC0000250:
		value = L"STATUS_INSUFFICIENT_LOGON_INFO";
		break;
	case 0xC0000251:
		value = L"STATUS_BAD_DLL_ENTRYPOINT";
		break;
	case 0xC0000252:
		value = L"STATUS_BAD_SERVICE_ENTRYPOINT";
		break;
	case 0xC0000253:
		value = L"STATUS_LPC_REPLY_LOST";
		break;
	case 0xC0000254:
		value = L"STATUS_IP_ADDRESS_CONFLICT1";
		break;
	case 0xC0000255:
		value = L"STATUS_IP_ADDRESS_CONFLICT2";
		break;
	case 0xC0000256:
		value = L"STATUS_REGISTRY_QUOTA_LIMIT";
		break;
	case 0xC0000257:
		value = L"STATUS_PATH_NOT_COVERED";
		break;
	case 0xC0000258:
		value = L"STATUS_NO_CALLBACK_ACTIVE";
		break;
	case 0xC0000259:
		value = L"STATUS_LICENSE_QUOTA_EXCEEDED";
		break;
	case 0xC000025A:
		value = L"STATUS_PWD_TOO_SHORT";
		break;
	case 0xC000025B:
		value = L"STATUS_PWD_TOO_RECENT";
		break;
	case 0xC000025C:
		value = L"STATUS_PWD_HISTORY_CONFLICT";
		break;
	case 0xC000025E:
		value = L"STATUS_PLUGPLAY_NO_DEVICE";
		break;
	case 0xC000025F:
		value = L"STATUS_UNSUPPORTED_COMPRESSION";
		break;
	case 0xC0000260:
		value = L"STATUS_INVALID_HW_PROFILE";
		break;
	case 0xC0000261:
		value = L"STATUS_INVALID_PLUGPLAY_DEVICE_PATH";
		break;
	case 0xC0000262:
		value = L"STATUS_DRIVER_ORDINAL_NOT_FOUND";
		break;
	case 0xC0000263:
		value = L"STATUS_DRIVER_ENTRYPOINT_NOT_FOUND";
		break;
	case 0xC0000264:
		value = L"STATUS_RESOURCE_NOT_OWNED";
		break;
	case 0xC0000265:
		value = L"STATUS_TOO_MANY_LINKS";
		break;
	case 0xC0000266:
		value = L"STATUS_QUOTA_LIST_INCONSISTENT";
		break;
	case 0xC0000267:
		value = L"STATUS_FILE_IS_OFFLINE";
		break;
	case 0xC0000268:
		value = L"STATUS_EVALUATION_EXPIRATION";
		break;
	case 0xC0000269:
		value = L"STATUS_ILLEGAL_DLL_RELOCATION";
		break;
	case 0xC000026A:
		value = L"STATUS_LICENSE_VIOLATION";
		break;
	case 0xC000026B:
		value = L"STATUS_DLL_INIT_FAILED_LOGOFF";
		break;
	case 0xC000026C:
		value = L"STATUS_DRIVER_UNABLE_TO_LOAD";
		break;
	case 0xC000026D:
		value = L"STATUS_DFS_UNAVAILABLE";
		break;
	case 0xC000026E:
		value = L"STATUS_VOLUME_DISMOUNTED";
		break;
	case 0xC000026F:
		value = L"STATUS_WX86_INTERNAL_ERROR";
		break;
	case 0xC0000270:
		value = L"STATUS_WX86_FLOAT_STACK_CHECK";
		break;
	case 0xC0000271:
		value = L"STATUS_VALIDATE_CONTINUE";
		break;
	case 0xC0000272:
		value = L"STATUS_NO_MATCH";
		break;
	case 0xC0000273:
		value = L"STATUS_NO_MORE_MATCHES";
		break;
	case 0xC0000275:
		value = L"STATUS_NOT_A_REPARSE_POINT";
		break;
	case 0xC0000276:
		value = L"STATUS_IO_REPARSE_TAG_INVALID";
		break;
	case 0xC0000277:
		value = L"STATUS_IO_REPARSE_TAG_MISMATCH";
		break;
	case 0xC0000278:
		value = L"STATUS_IO_REPARSE_DATA_INVALID";
		break;
	case 0xC0000279:
		value = L"STATUS_IO_REPARSE_TAG_NOT_HANDLED";
		break;
	case 0xC0000280:
		value = L"STATUS_REPARSE_POINT_NOT_RESOLVED";
		break;
	case 0xC0000281:
		value = L"STATUS_DIRECTORY_IS_A_REPARSE_POINT";
		break;
	case 0xC0000282:
		value = L"STATUS_RANGE_LIST_CONFLICT";
		break;
	case 0xC0000283:
		value = L"STATUS_SOURCE_ELEMENT_EMPTY";
		break;
	case 0xC0000284:
		value = L"STATUS_DESTINATION_ELEMENT_FULL";
		break;
	case 0xC0000285:
		value = L"STATUS_ILLEGAL_ELEMENT_ADDRESS";
		break;
	case 0xC0000286:
		value = L"STATUS_MAGAZINE_NOT_PRESENT";
		break;
	case 0xC0000287:
		value = L"STATUS_REINITIALIZATION_NEEDED";
		break;
	case 0xC000028A:
		value = L"STATUS_ENCRYPTION_FAILED";
		break;
	case 0xC000028B:
		value = L"STATUS_DECRYPTION_FAILED";
		break;
	case 0xC000028C:
		value = L"STATUS_RANGE_NOT_FOUND";
		break;
	case 0xC000028D:
		value = L"STATUS_NO_RECOVERY_POLICY";
		break;
	case 0xC000028E:
		value = L"STATUS_NO_EFS";
		break;
	case 0xC000028F:
		value = L"STATUS_WRONG_EFS";
		break;
	case 0xC0000290:
		value = L"STATUS_NO_USER_KEYS";
		break;
	case 0xC0000291:
		value = L"STATUS_FILE_NOT_ENCRYPTED";
		break;
	case 0xC0000292:
		value = L"STATUS_NOT_EXPORT_FORMAT";
		break;
	case 0xC0000293:
		value = L"STATUS_FILE_ENCRYPTED";
		break;
	case 0xC0000295:
		value = L"STATUS_WMI_GUID_NOT_FOUND";
		break;
	case 0xC0000296:
		value = L"STATUS_WMI_INSTANCE_NOT_FOUND";
		break;
	case 0xC0000297:
		value = L"STATUS_WMI_ITEMID_NOT_FOUND";
		break;
	case 0xC0000298:
		value = L"STATUS_WMI_TRY_AGAIN";
		break;
	case 0xC0000299:
		value = L"STATUS_SHARED_POLICY";
		break;
	case 0xC000029A:
		value = L"STATUS_POLICY_OBJECT_NOT_FOUND";
		break;
	case 0xC000029B:
		value = L"STATUS_POLICY_ONLY_IN_DS";
		break;
	case 0xC000029C:
		value = L"STATUS_VOLUME_NOT_UPGRADED";
		break;
	case 0xC000029D:
		value = L"STATUS_REMOTE_STORAGE_NOT_ACTIVE";
		break;
	case 0xC000029E:
		value = L"STATUS_REMOTE_STORAGE_MEDIA_ERROR";
		break;
	case 0xC000029F:
		value = L"STATUS_NO_TRACKING_SERVICE";
		break;
	case 0xC00002A0:
		value = L"STATUS_SERVER_SID_MISMATCH";
		break;
	case 0xC00002A1:
		value = L"STATUS_DS_NO_ATTRIBUTE_OR_VALUE";
		break;
	case 0xC00002A2:
		value = L"STATUS_DS_INVALID_ATTRIBUTE_SYNTAX";
		break;
	case 0xC00002A3:
		value = L"STATUS_DS_ATTRIBUTE_TYPE_UNDEFINED";
		break;
	case 0xC00002A4:
		value = L"STATUS_DS_ATTRIBUTE_OR_VALUE_EXISTS";
		break;
	case 0xC00002A5:
		value = L"STATUS_DS_BUSY";
		break;
	case 0xC00002A6:
		value = L"STATUS_DS_UNAVAILABLE";
		break;
	case 0xC00002A7:
		value = L"STATUS_DS_NO_RIDS_ALLOCATED";
		break;
	case 0xC00002A8:
		value = L"STATUS_DS_NO_MORE_RIDS";
		break;
	case 0xC00002A9:
		value = L"STATUS_DS_INCORRECT_ROLE_OWNER";
		break;
	case 0xC00002AA:
		value = L"STATUS_DS_RIDMGR_INIT_ERROR";
		break;
	case 0xC00002AB:
		value = L"STATUS_DS_OBJ_CLASS_VIOLATION";
		break;
	case 0xC00002AC:
		value = L"STATUS_DS_CANT_ON_NON_LEAF";
		break;
	case 0xC00002AD:
		value = L"STATUS_DS_CANT_ON_RDN";
		break;
	case 0xC00002AE:
		value = L"STATUS_DS_CANT_MOD_OBJ_CLASS";
		break;
	case 0xC00002AF:
		value = L"STATUS_DS_CROSS_DOM_MOVE_FAILED";
		break;
	case 0xC00002B0:
		value = L"STATUS_DS_GC_NOT_AVAILABLE";
		break;
	case 0xC00002B1:
		value = L"STATUS_DIRECTORY_SERVICE_REQUIRED";
		break;
	case 0xC00002B2:
		value = L"STATUS_REPARSE_ATTRIBUTE_CONFLICT";
		break;
	case 0xC00002B3:
		value = L"STATUS_CANT_ENABLE_DENY_ONLY";
		break;
	case 0xC00002B4:
		value = L"STATUS_FLOAT_MULTIPLE_FAULTS";
		break;
	case 0xC00002B5:
		value = L"STATUS_FLOAT_MULTIPLE_TRAPS";
		break;
	case 0xC00002B6:
		value = L"STATUS_DEVICE_REMOVED";
		break;
	case 0xC00002B7:
		value = L"STATUS_JOURNAL_DELETE_IN_PROGRESS";
		break;
	case 0xC00002B8:
		value = L"STATUS_JOURNAL_NOT_ACTIVE";
		break;
	case 0xC00002B9:
		value = L"STATUS_NOINTERFACE";
		break;
	case 0xC00002C1:
		value = L"STATUS_DS_ADMIN_LIMIT_EXCEEDED";
		break;
	case 0xC00002C2:
		value = L"STATUS_DRIVER_FAILED_SLEEP";
		break;
	case 0xC00002C3:
		value = L"STATUS_MUTUAL_AUTHENTICATION_FAILED";
		break;
	case 0xC00002C4:
		value = L"STATUS_CORRUPT_SYSTEM_FILE";
		break;
	case 0xC00002C5:
		value = L"STATUS_DATATYPE_MISALIGNMENT_ERROR";
		break;
	case 0xC00002C6:
		value = L"STATUS_WMI_READ_ONLY";
		break;
	case 0xC00002C7:
		value = L"STATUS_WMI_SET_FAILURE";
		break;
	case 0xC00002C8:
		value = L"STATUS_COMMITMENT_MINIMUM";
		break;
	case 0xC00002C9:
		value = L"STATUS_REG_NAT_CONSUMPTION";
		break;
	case 0xC00002CA:
		value = L"STATUS_TRANSPORT_FULL";
		break;
	case 0xC00002CB:
		value = L"STATUS_DS_SAM_INIT_FAILURE";
		break;
	case 0xC00002CC:
		value = L"STATUS_ONLY_IF_CONNECTED";
		break;
	case 0xC00002CD:
		value = L"STATUS_DS_SENSITIVE_GROUP_VIOLATION";
		break;
	case 0xC00002CE:
		value = L"STATUS_PNP_RESTART_ENUMERATION";
		break;
	case 0xC00002CF:
		value = L"STATUS_JOURNAL_ENTRY_DELETED";
		break;
	case 0xC00002D0:
		value = L"STATUS_DS_CANT_MOD_PRIMARYGROUPID";
		break;
	case 0xC00002D1:
		value = L"STATUS_SYSTEM_IMAGE_BAD_SIGNATURE";
		break;
	case 0xC00002D2:
		value = L"STATUS_PNP_REBOOT_REQUIRED";
		break;
	case 0xC00002D3:
		value = L"STATUS_POWER_STATE_INVALID";
		break;
	case 0xC00002D4:
		value = L"STATUS_DS_INVALID_GROUP_TYPE";
		break;
	case 0xC00002D5:
		value = L"STATUS_DS_NO_NEST_GLOBALGROUP_IN_MIXEDDOMAIN";
		break;
	case 0xC00002D6:
		value = L"STATUS_DS_NO_NEST_LOCALGROUP_IN_MIXEDDOMAIN";
		break;
	case 0xC00002D7:
		value = L"STATUS_DS_GLOBAL_CANT_HAVE_LOCAL_MEMBER";
		break;
	case 0xC00002D8:
		value = L"STATUS_DS_GLOBAL_CANT_HAVE_UNIVERSAL_MEMBER";
		break;
	case 0xC00002D9:
		value = L"STATUS_DS_UNIVERSAL_CANT_HAVE_LOCAL_MEMBER";
		break;
	case 0xC00002DA:
		value = L"STATUS_DS_GLOBAL_CANT_HAVE_CROSSDOMAIN_MEMBER";
		break;
	case 0xC00002DB:
		value = L"STATUS_DS_LOCAL_CANT_HAVE_CROSSDOMAIN_LOCAL_MEMBER";
		break;
	case 0xC00002DC:
		value = L"STATUS_DS_HAVE_PRIMARY_MEMBERS";
		break;
	case 0xC00002DD:
		value = L"STATUS_WMI_NOT_SUPPORTED";
		break;
	case 0xC00002DE:
		value = L"STATUS_INSUFFICIENT_POWER";
		break;
	case 0xC00002DF:
		value = L"STATUS_SAM_NEED_BOOTKEY_PASSWORD";
		break;
	case 0xC00002E0:
		value = L"STATUS_SAM_NEED_BOOTKEY_FLOPPY";
		break;
	case 0xC00002E1:
		value = L"STATUS_DS_CANT_START";
		break;
	case 0xC00002E2:
		value = L"STATUS_DS_INIT_FAILURE";
		break;
	case 0xC00002E3:
		value = L"STATUS_SAM_INIT_FAILURE";
		break;
	case 0xC00002E4:
		value = L"STATUS_DS_GC_REQUIRED";
		break;
	case 0xC00002E5:
		value = L"STATUS_DS_LOCAL_MEMBER_OF_LOCAL_ONLY";
		break;
	case 0xC00002E6:
		value = L"STATUS_DS_NO_FPO_IN_UNIVERSAL_GROUPS";
		break;
	case 0xC00002E7:
		value = L"STATUS_DS_MACHINE_ACCOUNT_QUOTA_EXCEEDED";
		break;
	case 0xC00002E9:
		value = L"STATUS_CURRENT_DOMAIN_NOT_ALLOWED";
		break;
	case 0xC00002EA:
		value = L"STATUS_CANNOT_MAKE";
		break;
	case 0xC00002EB:
		value = L"STATUS_SYSTEM_SHUTDOWN";
		break;
	case 0xC00002EC:
		value = L"STATUS_DS_INIT_FAILURE_CONSOLE";
		break;
	case 0xC00002ED:
		value = L"STATUS_DS_SAM_INIT_FAILURE_CONSOLE";
		break;
	case 0xC00002EE:
		value = L"STATUS_UNFINISHED_CONTEXT_DELETED";
		break;
	case 0xC00002EF:
		value = L"STATUS_NO_TGT_REPLY";
		break;
	case 0xC00002F0:
		value = L"STATUS_OBJECTID_NOT_FOUND";
		break;
	case 0xC00002F1:
		value = L"STATUS_NO_IP_ADDRESSES";
		break;
	case 0xC00002F2:
		value = L"STATUS_WRONG_CREDENTIAL_HANDLE";
		break;
	case 0xC00002F3:
		value = L"STATUS_CRYPTO_SYSTEM_INVALID";
		break;
	case 0xC00002F4:
		value = L"STATUS_MAX_REFERRALS_EXCEEDED";
		break;
	case 0xC00002F5:
		value = L"STATUS_MUST_BE_KDC";
		break;
	case 0xC00002F6:
		value = L"STATUS_STRONG_CRYPTO_NOT_SUPPORTED";
		break;
	case 0xC00002F7:
		value = L"STATUS_TOO_MANY_PRINCIPALS";
		break;
	case 0xC00002F8:
		value = L"STATUS_NO_PA_DATA";
		break;
	case 0xC00002F9:
		value = L"STATUS_PKINIT_NAME_MISMATCH";
		break;
	case 0xC00002FA:
		value = L"STATUS_SMARTCARD_LOGON_REQUIRED";
		break;
	case 0xC00002FB:
		value = L"STATUS_KDC_INVALID_REQUEST";
		break;
	case 0xC00002FC:
		value = L"STATUS_KDC_UNABLE_TO_REFER";
		break;
	case 0xC00002FD:
		value = L"STATUS_KDC_UNKNOWN_ETYPE";
		break;
	case 0xC00002FE:
		value = L"STATUS_SHUTDOWN_IN_PROGRESS";
		break;
	case 0xC00002FF:
		value = L"STATUS_SERVER_SHUTDOWN_IN_PROGRESS";
		break;
	case 0xC0000300:
		value = L"STATUS_NOT_SUPPORTED_ON_SBS";
		break;
	case 0xC0000301:
		value = L"STATUS_WMI_GUID_DISCONNECTED";
		break;
	case 0xC0000302:
		value = L"STATUS_WMI_ALREADY_DISABLED";
		break;
	case 0xC0000303:
		value = L"STATUS_WMI_ALREADY_ENABLED";
		break;
	case 0xC0000304:
		value = L"STATUS_MFT_TOO_FRAGMENTED";
		break;
	case 0xC0000305:
		value = L"STATUS_COPY_PROTECTION_FAILURE";
		break;
	case 0xC0000306:
		value = L"STATUS_CSS_AUTHENTICATION_FAILURE";
		break;
	case 0xC0000307:
		value = L"STATUS_CSS_KEY_NOT_PRESENT";
		break;
	case 0xC0000308:
		value = L"STATUS_CSS_KEY_NOT_ESTABLISHED";
		break;
	case 0xC0000309:
		value = L"STATUS_CSS_SCRAMBLED_SECTOR";
		break;
	case 0xC000030A:
		value = L"STATUS_CSS_REGION_MISMATCH";
		break;
	case 0xC000030B:
		value = L"STATUS_CSS_RESETS_EXHAUSTED";
		break;
	case 0xC0000320:
		value = L"STATUS_PKINIT_FAILURE";
		break;
	case 0xC0000321:
		value = L"STATUS_SMARTCARD_SUBSYSTEM_FAILURE";
		break;
	case 0xC0000322:
		value = L"STATUS_NO_KERB_KEY";
		break;
	case 0xC0000350:
		value = L"STATUS_HOST_DOWN";
		break;
	case 0xC0000351:
		value = L"STATUS_UNSUPPORTED_PREAUTH";
		break;
	case 0xC0000352:
		value = L"STATUS_EFS_ALG_BLOB_TOO_BIG";
		break;
	case 0xC0000353:
		value = L"STATUS_PORT_NOT_SET";
		break;
	case 0xC0000354:
		value = L"STATUS_DEBUGGER_INACTIVE";
		break;
	case 0xC0000355:
		value = L"STATUS_DS_VERSION_CHECK_FAILURE";
		break;
	case 0xC0000356:
		value = L"STATUS_AUDITING_DISABLED";
		break;
	case 0xC0000357:
		value = L"STATUS_PRENT4_MACHINE_ACCOUNT";
		break;
	case 0xC0000358:
		value = L"STATUS_DS_AG_CANT_HAVE_UNIVERSAL_MEMBER";
		break;
	case 0xC0000359:
		value = L"STATUS_INVALID_IMAGE_WIN_32";
		break;
	case 0xC000035A:
		value = L"STATUS_INVALID_IMAGE_WIN_64";
		break;
	case 0xC000035B:
		value = L"STATUS_BAD_BINDINGS";
		break;
	case 0xC000035C:
		value = L"STATUS_NETWORK_SESSION_EXPIRED";
		break;
	case 0xC000035D:
		value = L"STATUS_APPHELP_BLOCK";
		break;
	case 0xC000035E:
		value = L"STATUS_ALL_SIDS_FILTERED";
		break;
	case 0xC000035F:
		value = L"STATUS_NOT_SAFE_MODE_DRIVER";
		break;
	case 0xC0000361:
		value = L"STATUS_ACCESS_DISABLED_BY_POLICY_DEFAULT";
		break;
	case 0xC0000362:
		value = L"STATUS_ACCESS_DISABLED_BY_POLICY_PATH";
		break;
	case 0xC0000363:
		value = L"STATUS_ACCESS_DISABLED_BY_POLICY_PUBLISHER";
		break;
	case 0xC0000364:
		value = L"STATUS_ACCESS_DISABLED_BY_POLICY_OTHER";
		break;
	case 0xC0000365:
		value = L"STATUS_FAILED_DRIVER_ENTRY";
		break;
	case 0xC0000366:
		value = L"STATUS_DEVICE_ENUMERATION_ERROR";
		break;
	case 0xC0000368:
		value = L"STATUS_MOUNT_POINT_NOT_RESOLVED";
		break;
	case 0xC0000369:
		value = L"STATUS_INVALID_DEVICE_OBJECT_PARAMETER";
		break;
	case 0xC000036A:
		value = L"STATUS_MCA_OCCURED";
		break;
	case 0xC000036B:
		value = L"STATUS_DRIVER_BLOCKED_CRITICAL";
		break;
	case 0xC000036C:
		value = L"STATUS_DRIVER_BLOCKED";
		break;
	case 0xC000036D:
		value = L"STATUS_DRIVER_DATABASE_ERROR";
		break;
	case 0xC000036E:
		value = L"STATUS_SYSTEM_HIVE_TOO_LARGE";
		break;
	case 0xC000036F:
		value = L"STATUS_INVALID_IMPORT_OF_NON_DLL";
		break;
	case 0xC0000371:
		value = L"STATUS_NO_SECRETS";
		break;
	case 0xC0000372:
		value = L"STATUS_ACCESS_DISABLED_NO_SAFER_UI_BY_POLICY";
		break;
	case 0xC0000373:
		value = L"STATUS_FAILED_STACK_SWITCH";
		break;
	case 0xC0000374:
		value = L"STATUS_HEAP_CORRUPTION";
		break;
	case 0xC0000380:
		value = L"STATUS_SMARTCARD_WRONG_PIN";
		break;
	case 0xC0000381:
		value = L"STATUS_SMARTCARD_CARD_BLOCKED";
		break;
	case 0xC0000382:
		value = L"STATUS_SMARTCARD_CARD_NOT_AUTHENTICATED";
		break;
	case 0xC0000383:
		value = L"STATUS_SMARTCARD_NO_CARD";
		break;
	case 0xC0000384:
		value = L"STATUS_SMARTCARD_NO_KEY_CONTAINER";
		break;
	case 0xC0000385:
		value = L"STATUS_SMARTCARD_NO_CERTIFICATE";
		break;
	case 0xC0000386:
		value = L"STATUS_SMARTCARD_NO_KEYSET";
		break;
	case 0xC0000387:
		value = L"STATUS_SMARTCARD_IO_ERROR";
		break;
	case 0xC0000388:
		value = L"STATUS_DOWNGRADE_DETECTED";
		break;
	case 0xC0000389:
		value = L"STATUS_SMARTCARD_CERT_REVOKED";
		break;
	case 0xC000038A:
		value = L"STATUS_ISSUING_CA_UNTRUSTED";
		break;
	case 0xC000038B:
		value = L"STATUS_REVOCATION_OFFLINE_C";
		break;
	case 0xC000038C:
		value = L"STATUS_PKINIT_CLIENT_FAILURE";
		break;
	case 0xC000038D:
		value = L"STATUS_SMARTCARD_CERT_EXPIRED";
		break;
	case 0xC000038E:
		value = L"STATUS_DRIVER_FAILED_PRIOR_UNLOAD";
		break;
	case 0xC000038F:
		value = L"STATUS_SMARTCARD_SILENT_CONTEXT";
		break;
	case 0xC0000401:
		value = L"STATUS_PER_USER_TRUST_QUOTA_EXCEEDED";
		break;
	case 0xC0000402:
		value = L"STATUS_ALL_USER_TRUST_QUOTA_EXCEEDED";
		break;
	case 0xC0000403:
		value = L"STATUS_USER_DELETE_TRUST_QUOTA_EXCEEDED";
		break;
	case 0xC0000404:
		value = L"STATUS_DS_NAME_NOT_UNIQUE";
		break;
	case 0xC0000405:
		value = L"STATUS_DS_DUPLICATE_ID_FOUND";
		break;
	case 0xC0000406:
		value = L"STATUS_DS_GROUP_CONVERSION_ERROR";
		break;
	case 0xC0000407:
		value = L"STATUS_VOLSNAP_PREPARE_HIBERNATE";
		break;
	case 0xC0000408:
		value = L"STATUS_USER2USER_REQUIRED";
		break;
	case 0xC0000409:
		value = L"STATUS_STACK_BUFFER_OVERRUN";
		break;
	case 0xC000040A:
		value = L"STATUS_NO_S4U_PROT_SUPPORT";
		break;
	case 0xC000040B:
		value = L"STATUS_CROSSREALM_DELEGATION_FAILURE";
		break;
	case 0xC000040C:
		value = L"STATUS_REVOCATION_OFFLINE_KDC";
		break;
	case 0xC000040D:
		value = L"STATUS_ISSUING_CA_UNTRUSTED_KDC";
		break;
	case 0xC000040E:
		value = L"STATUS_KDC_CERT_EXPIRED";
		break;
	case 0xC000040F:
		value = L"STATUS_KDC_CERT_REVOKED";
		break;
	case 0xC0000410:
		value = L"STATUS_PARAMETER_QUOTA_EXCEEDED";
		break;
	case 0xC0000411:
		value = L"STATUS_HIBERNATION_FAILURE";
		break;
	case 0xC0000412:
		value = L"STATUS_DELAY_LOAD_FAILED";
		break;
	case 0xC0000413:
		value = L"STATUS_AUTHENTICATION_FIREWALL_FAILED";
		break;
	case 0xC0000414:
		value = L"STATUS_VDM_DISALLOWED";
		break;
	case 0xC0000415:
		value = L"STATUS_HUNG_DISPLAY_DRIVER_THREAD";
		break;
	case 0xC0000416:
		value = L"STATUS_INSUFFICIENT_RESOURCE_FOR_SPECIFIED_SHARED_SECTION_SIZE";
		break;
	case 0xC0000417:
		value = L"STATUS_INVALID_CRUNTIME_PARAMETER";
		break;
	case 0xC0000418:
		value = L"STATUS_NTLM_BLOCKED";
		break;
	case 0xC0000419:
		value = L"STATUS_DS_SRC_SID_EXISTS_IN_FOREST";
		break;
	case 0xC000041A:
		value = L"STATUS_DS_DOMAIN_NAME_EXISTS_IN_FOREST";
		break;
	case 0xC000041B:
		value = L"STATUS_DS_FLAT_NAME_EXISTS_IN_FOREST";
		break;
	case 0xC000041C:
		value = L"STATUS_INVALID_USER_PRINCIPAL_NAME";
		break;
	case 0xC0000420:
		value = L"STATUS_ASSERTION_FAILURE";
		break;
	case 0xC0000421:
		value = L"STATUS_VERIFIER_STOP";
		break;
	case 0xC0000423:
		value = L"STATUS_CALLBACK_POP_STACK";
		break;
	case 0xC0000424:
		value = L"STATUS_INCOMPATIBLE_DRIVER_BLOCKED";
		break;
	case 0xC0000425:
		value = L"STATUS_HIVE_UNLOADED";
		break;
	case 0xC0000426:
		value = L"STATUS_COMPRESSION_DISABLED";
		break;
	case 0xC0000427:
		value = L"STATUS_FILE_SYSTEM_LIMITATION";
		break;
	case 0xC0000428:
		value = L"STATUS_INVALID_IMAGE_HASH";
		break;
	case 0xC0000429:
		value = L"STATUS_NOT_CAPABLE";
		break;
	case 0xC000042A:
		value = L"STATUS_REQUEST_OUT_OF_SEQUENCE";
		break;
	case 0xC000042B:
		value = L"STATUS_IMPLEMENTATION_LIMIT";
		break;
	case 0xC000042C:
		value = L"STATUS_ELEVATION_REQUIRED";
		break;
	case 0xC000042D:
		value = L"STATUS_NO_SECURITY_CONTEXT";
		break;
	case 0xC000042E:
		value = L"STATUS_PKU2U_CERT_FAILURE";
		break;
	case 0xC0000432:
		value = L"STATUS_BEYOND_VDL";
		break;
	case 0xC0000433:
		value = L"STATUS_ENCOUNTERED_WRITE_IN_PROGRESS";
		break;
	case 0xC0000434:
		value = L"STATUS_PTE_CHANGED";
		break;
	case 0xC0000435:
		value = L"STATUS_PURGE_FAILED";
		break;
	case 0xC0000440:
		value = L"STATUS_CRED_REQUIRES_CONFIRMATION";
		break;
	case 0xC0000441:
		value = L"STATUS_CS_ENCRYPTION_INVALID_SERVER_RESPONSE";
		break;
	case 0xC0000442:
		value = L"STATUS_CS_ENCRYPTION_UNSUPPORTED_SERVER";
		break;
	case 0xC0000443:
		value = L"STATUS_CS_ENCRYPTION_EXISTING_ENCRYPTED_FILE";
		break;
	case 0xC0000444:
		value = L"STATUS_CS_ENCRYPTION_NEW_ENCRYPTED_FILE";
		break;
	case 0xC0000445:
		value = L"STATUS_CS_ENCRYPTION_FILE_NOT_CSE";
		break;
	case 0xC0000446:
		value = L"STATUS_INVALID_LABEL";
		break;
	case 0xC0000450:
		value = L"STATUS_DRIVER_PROCESS_TERMINATED";
		break;
	case 0xC0000451:
		value = L"STATUS_AMBIGUOUS_SYSTEM_DEVICE";
		break;
	case 0xC0000452:
		value = L"STATUS_SYSTEM_DEVICE_NOT_FOUND";
		break;
	case 0xC0000453:
		value = L"STATUS_RESTART_BOOT_APPLICATION";
		break;
	case 0xC0000454:
		value = L"STATUS_INSUFFICIENT_NVRAM_RESOURCES";
		break;
	case 0xC0000460:
		value = L"STATUS_NO_RANGES_PROCESSED";
		break;
	case 0xC0000463:
		value = L"STATUS_DEVICE_FEATURE_NOT_SUPPORTED";
		break;
	case 0xC0000464:
		value = L"STATUS_DEVICE_UNREACHABLE";
		break;
	case 0xC0000465:
		value = L"STATUS_INVALID_TOKEN";
		break;
	case 0xC0000466:
		value = L"STATUS_SERVER_UNAVAILABLE";
		break;
	case 0xC0000467:
		value = L"STATUS_FILE_NOT_AVAILABLE";
		break;
	case 0xC0000500:
		value = L"STATUS_INVALID_TASK_NAME";
		break;
	case 0xC0000501:
		value = L"STATUS_INVALID_TASK_INDEX";
		break;
	case 0xC0000502:
		value = L"STATUS_THREAD_ALREADY_IN_TASK";
		break;
	case 0xC0000503:
		value = L"STATUS_CALLBACK_BYPASS";
		break;
	case 0xC0000602:
		value = L"STATUS_FAIL_FAST_EXCEPTION";
		break;
	case 0xC0000603:
		value = L"STATUS_IMAGE_CERT_REVOKED";
		break;
	case 0xC0000700:
		value = L"STATUS_PORT_CLOSED";
		break;
	case 0xC0000701:
		value = L"STATUS_MESSAGE_LOST";
		break;
	case 0xC0000702:
		value = L"STATUS_INVALID_MESSAGE";
		break;
	case 0xC0000703:
		value = L"STATUS_REQUEST_CANCELED";
		break;
	case 0xC0000704:
		value = L"STATUS_RECURSIVE_DISPATCH";
		break;
	case 0xC0000705:
		value = L"STATUS_LPC_RECEIVE_BUFFER_EXPECTED";
		break;
	case 0xC0000706:
		value = L"STATUS_LPC_INVALID_CONNECTION_USAGE";
		break;
	case 0xC0000707:
		value = L"STATUS_LPC_REQUESTS_NOT_ALLOWED";
		break;
	case 0xC0000708:
		value = L"STATUS_RESOURCE_IN_USE";
		break;
	case 0xC0000709:
		value = L"STATUS_HARDWARE_MEMORY_ERROR";
		break;
	case 0xC000070A:
		value = L"STATUS_THREADPOOL_HANDLE_EXCEPTION";
		break;
	case 0xC000070B:
		value = L"STATUS_THREADPOOL_SET_EVENT_ON_COMPLETION_FAILED";
		break;
	case 0xC000070C:
		value = L"STATUS_THREADPOOL_RELEASE_SEMAPHORE_ON_COMPLETION_FAILED";
		break;
	case 0xC000070D:
		value = L"STATUS_THREADPOOL_RELEASE_MUTEX_ON_COMPLETION_FAILED";
		break;
	case 0xC000070E:
		value = L"STATUS_THREADPOOL_FREE_LIBRARY_ON_COMPLETION_FAILED";
		break;
	case 0xC000070F:
		value = L"STATUS_THREADPOOL_RELEASED_DURING_OPERATION";
		break;
	case 0xC0000710:
		value = L"STATUS_CALLBACK_RETURNED_WHILE_IMPERSONATING";
		break;
	case 0xC0000711:
		value = L"STATUS_APC_RETURNED_WHILE_IMPERSONATING";
		break;
	case 0xC0000712:
		value = L"STATUS_PROCESS_IS_PROTECTED";
		break;
	case 0xC0000713:
		value = L"STATUS_MCA_EXCEPTION";
		break;
	case 0xC0000714:
		value = L"STATUS_CERTIFICATE_MAPPING_NOT_UNIQUE";
		break;
	case 0xC0000715:
		value = L"STATUS_SYMLINK_CLASS_DISABLED";
		break;
	case 0xC0000716:
		value = L"STATUS_INVALID_IDN_NORMALIZATION";
		break;
	case 0xC0000717:
		value = L"STATUS_NO_UNICODE_TRANSLATION";
		break;
	case 0xC0000718:
		value = L"STATUS_ALREADY_REGISTERED";
		break;
	case 0xC0000719:
		value = L"STATUS_CONTEXT_MISMATCH";
		break;
	case 0xC000071A:
		value = L"STATUS_PORT_ALREADY_HAS_COMPLETION_LIST";
		break;
	case 0xC000071B:
		value = L"STATUS_CALLBACK_RETURNED_THREAD_PRIORITY";
		break;
	case 0xC000071C:
		value = L"STATUS_INVALID_THREAD";
		break;
	case 0xC000071D:
		value = L"STATUS_CALLBACK_RETURNED_TRANSACTION";
		break;
	case 0xC000071E:
		value = L"STATUS_CALLBACK_RETURNED_LDR_LOCK";
		break;
	case 0xC000071F:
		value = L"STATUS_CALLBACK_RETURNED_LANG";
		break;
	case 0xC0000720:
		value = L"STATUS_CALLBACK_RETURNED_PRI_BACK";
		break;
	case 0xC0000721:
		value = L"STATUS_CALLBACK_RETURNED_THREAD_AFFINITY";
		break;
	case 0xC0000800:
		value = L"STATUS_DISK_REPAIR_DISABLED";
		break;
	case 0xC0000801:
		value = L"STATUS_DS_DOMAIN_RENAME_IN_PROGRESS";
		break;
	case 0xC0000802:
		value = L"STATUS_DISK_QUOTA_EXCEEDED";
		break;
	case 0xC0000804:
		value = L"STATUS_CONTENT_BLOCKED";
		break;
	case 0xC0000805:
		value = L"STATUS_BAD_CLUSTERS";
		break;
	case 0xC0000806:
		value = L"STATUS_VOLUME_DIRTY";
		break;
	case 0xC0000901:
		value = L"STATUS_FILE_CHECKED_OUT";
		break;
	case 0xC0000902:
		value = L"STATUS_CHECKOUT_REQUIRED";
		break;
	case 0xC0000903:
		value = L"STATUS_BAD_FILE_TYPE";
		break;
	case 0xC0000904:
		value = L"STATUS_FILE_TOO_LARGE";
		break;
	case 0xC0000905:
		value = L"STATUS_FORMS_AUTH_REQUIRED";
		break;
	case 0xC0000906:
		value = L"STATUS_VIRUS_INFECTED";
		break;
	case 0xC0000907:
		value = L"STATUS_VIRUS_DELETED";
		break;
	case 0xC0000908:
		value = L"STATUS_BAD_MCFG_TABLE";
		break;
	case 0xC0000909:
		value = L"STATUS_CANNOT_BREAK_OPLOCK";
		break;
	case 0xC0009898:
		value = L"STATUS_WOW_ASSERTION";
		break;
	case 0xC000A000:
		value = L"STATUS_INVALID_SIGNATURE";
		break;
	case 0xC000A001:
		value = L"STATUS_HMAC_NOT_SUPPORTED";
		break;
	case 0xC000A010:
		value = L"STATUS_IPSEC_QUEUE_OVERFLOW";
		break;
	case 0xC000A011:
		value = L"STATUS_ND_QUEUE_OVERFLOW";
		break;
	case 0xC000A012:
		value = L"STATUS_HOPLIMIT_EXCEEDED";
		break;
	case 0xC000A013:
		value = L"STATUS_PROTOCOL_NOT_SUPPORTED";
		break;
	case 0xC000A080:
		value = L"STATUS_LOST_WRITEBEHIND_DATA_NETWORK_DISCONNECTED";
		break;
	case 0xC000A081:
		value = L"STATUS_LOST_WRITEBEHIND_DATA_NETWORK_SERVER_ERROR";
		break;
	case 0xC000A082:
		value = L"STATUS_LOST_WRITEBEHIND_DATA_LOCAL_DISK_ERROR";
		break;
	case 0xC000A083:
		value = L"STATUS_XML_PARSE_ERROR";
		break;
	case 0xC000A084:
		value = L"STATUS_XMLDSIG_ERROR";
		break;
	case 0xC000A085:
		value = L"STATUS_WRONG_COMPARTMENT";
		break;
	case 0xC000A086:
		value = L"STATUS_AUTHIP_FAILURE";
		break;
	case 0xC000A087:
		value = L"STATUS_DS_OID_MAPPED_GROUP_CANT_HAVE_MEMBERS";
		break;
	case 0xC000A088:
		value = L"STATUS_DS_OID_NOT_FOUND";
		break;
	case 0xC000A100:
		value = L"STATUS_HASH_NOT_SUPPORTED";
		break;
	case 0xC000A101:
		value = L"STATUS_HASH_NOT_PRESENT";
		break;
	case 0xC000A2A1:
		value = L"STATUS_OFFLOAD_READ_FLT_NOT_SUPPORTED";
		break;
	case 0xC000A2A2:
		value = L"STATUS_OFFLOAD_WRITE_FLT_NOT_SUPPORTED";
		break;
	case 0xC000A2A3:
		value = L"STATUS_OFFLOAD_READ_FILE_NOT_SUPPORTED";
		break;
	case 0xC000A2A4:
		value = L"STATUS_OFFLOAD_WRITE_FILE_NOT_SUPPORTED";
		break;
	case 0xC0010001:
		value = L"DBG_NO_STATE_CHANGE";
		break;
	case 0xC0010002:
		value = L"DBG_APP_NOT_IDLE";
		break;
	case 0xC0020001:
		value = L"RPC_NT_INVALID_STRING_BINDING";
		break;
	case 0xC0020002:
		value = L"RPC_NT_WRONG_KIND_OF_BINDING";
		break;
	case 0xC0020003:
		value = L"RPC_NT_INVALID_BINDING";
		break;
	case 0xC0020004:
		value = L"RPC_NT_PROTSEQ_NOT_SUPPORTED";
		break;
	case 0xC0020005:
		value = L"RPC_NT_INVALID_RPC_PROTSEQ";
		break;
	case 0xC0020006:
		value = L"RPC_NT_INVALID_STRING_UUID";
		break;
	case 0xC0020007:
		value = L"RPC_NT_INVALID_ENDPOINT_FORMAT";
		break;
	case 0xC0020008:
		value = L"RPC_NT_INVALID_NET_ADDR";
		break;
	case 0xC0020009:
		value = L"RPC_NT_NO_ENDPOINT_FOUND";
		break;
	case 0xC002000A:
		value = L"RPC_NT_INVALID_TIMEOUT";
		break;
	case 0xC002000B:
		value = L"RPC_NT_OBJECT_NOT_FOUND";
		break;
	case 0xC002000C:
		value = L"RPC_NT_ALREADY_REGISTERED";
		break;
	case 0xC002000D:
		value = L"RPC_NT_TYPE_ALREADY_REGISTERED";
		break;
	case 0xC002000E:
		value = L"RPC_NT_ALREADY_LISTENING";
		break;
	case 0xC002000F:
		value = L"RPC_NT_NO_PROTSEQS_REGISTERED";
		break;
	case 0xC0020010:
		value = L"RPC_NT_NOT_LISTENING";
		break;
	case 0xC0020011:
		value = L"RPC_NT_UNKNOWN_MGR_TYPE";
		break;
	case 0xC0020012:
		value = L"RPC_NT_UNKNOWN_IF";
		break;
	case 0xC0020013:
		value = L"RPC_NT_NO_BINDINGS";
		break;
	case 0xC0020014:
		value = L"RPC_NT_NO_PROTSEQS";
		break;
	case 0xC0020015:
		value = L"RPC_NT_CANT_CREATE_ENDPOINT";
		break;
	case 0xC0020016:
		value = L"RPC_NT_OUT_OF_RESOURCES";
		break;
	case 0xC0020017:
		value = L"RPC_NT_SERVER_UNAVAILABLE";
		break;
	case 0xC0020018:
		value = L"RPC_NT_SERVER_TOO_BUSY";
		break;
	case 0xC0020019:
		value = L"RPC_NT_INVALID_NETWORK_OPTIONS";
		break;
	case 0xC002001A:
		value = L"RPC_NT_NO_CALL_ACTIVE";
		break;
	case 0xC002001B:
		value = L"RPC_NT_CALL_FAILED";
		break;
	case 0xC002001C:
		value = L"RPC_NT_CALL_FAILED_DNE";
		break;
	case 0xC002001D:
		value = L"RPC_NT_PROTOCOL_ERROR";
		break;
	case 0xC002001F:
		value = L"RPC_NT_UNSUPPORTED_TRANS_SYN";
		break;
	case 0xC0020021:
		value = L"RPC_NT_UNSUPPORTED_TYPE";
		break;
	case 0xC0020022:
		value = L"RPC_NT_INVALID_TAG";
		break;
	case 0xC0020023:
		value = L"RPC_NT_INVALID_BOUND";
		break;
	case 0xC0020024:
		value = L"RPC_NT_NO_ENTRY_NAME";
		break;
	case 0xC0020025:
		value = L"RPC_NT_INVALID_NAME_SYNTAX";
		break;
	case 0xC0020026:
		value = L"RPC_NT_UNSUPPORTED_NAME_SYNTAX";
		break;
	case 0xC0020028:
		value = L"RPC_NT_UUID_NO_ADDRESS";
		break;
	case 0xC0020029:
		value = L"RPC_NT_DUPLICATE_ENDPOINT";
		break;
	case 0xC002002A:
		value = L"RPC_NT_UNKNOWN_AUTHN_TYPE";
		break;
	case 0xC002002B:
		value = L"RPC_NT_MAX_CALLS_TOO_SMALL";
		break;
	case 0xC002002C:
		value = L"RPC_NT_STRING_TOO_LONG";
		break;
	case 0xC002002D:
		value = L"RPC_NT_PROTSEQ_NOT_FOUND";
		break;
	case 0xC002002E:
		value = L"RPC_NT_PROCNUM_OUT_OF_RANGE";
		break;
	case 0xC002002F:
		value = L"RPC_NT_BINDING_HAS_NO_AUTH";
		break;
	case 0xC0020030:
		value = L"RPC_NT_UNKNOWN_AUTHN_SERVICE";
		break;
	case 0xC0020031:
		value = L"RPC_NT_UNKNOWN_AUTHN_LEVEL";
		break;
	case 0xC0020032:
		value = L"RPC_NT_INVALID_AUTH_IDENTITY";
		break;
	case 0xC0020033:
		value = L"RPC_NT_UNKNOWN_AUTHZ_SERVICE";
		break;
	case 0xC0020034:
		value = L"EPT_NT_INVALID_ENTRY";
		break;
	case 0xC0020035:
		value = L"EPT_NT_CANT_PERFORM_OP";
		break;
	case 0xC0020036:
		value = L"EPT_NT_NOT_REGISTERED";
		break;
	case 0xC0020037:
		value = L"RPC_NT_NOTHING_TO_EXPORT";
		break;
	case 0xC0020038:
		value = L"RPC_NT_INCOMPLETE_NAME";
		break;
	case 0xC0020039:
		value = L"RPC_NT_INVALID_VERS_OPTION";
		break;
	case 0xC002003A:
		value = L"RPC_NT_NO_MORE_MEMBERS";
		break;
	case 0xC002003B:
		value = L"RPC_NT_NOT_ALL_OBJS_UNEXPORTED";
		break;
	case 0xC002003C:
		value = L"RPC_NT_INTERFACE_NOT_FOUND";
		break;
	case 0xC002003D:
		value = L"RPC_NT_ENTRY_ALREADY_EXISTS";
		break;
	case 0xC002003E:
		value = L"RPC_NT_ENTRY_NOT_FOUND";
		break;
	case 0xC002003F:
		value = L"RPC_NT_NAME_SERVICE_UNAVAILABLE";
		break;
	case 0xC0020040:
		value = L"RPC_NT_INVALID_NAF_ID";
		break;
	case 0xC0020041:
		value = L"RPC_NT_CANNOT_SUPPORT";
		break;
	case 0xC0020042:
		value = L"RPC_NT_NO_CONTEXT_AVAILABLE";
		break;
	case 0xC0020043:
		value = L"RPC_NT_INTERNAL_ERROR";
		break;
	case 0xC0020044:
		value = L"RPC_NT_ZERO_DIVIDE";
		break;
	case 0xC0020045:
		value = L"RPC_NT_ADDRESS_ERROR";
		break;
	case 0xC0020046:
		value = L"RPC_NT_FP_DIV_ZERO";
		break;
	case 0xC0020047:
		value = L"RPC_NT_FP_UNDERFLOW";
		break;
	case 0xC0020048:
		value = L"RPC_NT_FP_OVERFLOW";
		break;
	case 0xC0020049:
		value = L"RPC_NT_CALL_IN_PROGRESS";
		break;
	case 0xC002004A:
		value = L"RPC_NT_NO_MORE_BINDINGS";
		break;
	case 0xC002004B:
		value = L"RPC_NT_GROUP_MEMBER_NOT_FOUND";
		break;
	case 0xC002004C:
		value = L"EPT_NT_CANT_CREATE";
		break;
	case 0xC002004D:
		value = L"RPC_NT_INVALID_OBJECT";
		break;
	case 0xC002004F:
		value = L"RPC_NT_NO_INTERFACES";
		break;
	case 0xC0020050:
		value = L"RPC_NT_CALL_CANCELLED";
		break;
	case 0xC0020051:
		value = L"RPC_NT_BINDING_INCOMPLETE";
		break;
	case 0xC0020052:
		value = L"RPC_NT_COMM_FAILURE";
		break;
	case 0xC0020053:
		value = L"RPC_NT_UNSUPPORTED_AUTHN_LEVEL";
		break;
	case 0xC0020054:
		value = L"RPC_NT_NO_PRINC_NAME";
		break;
	case 0xC0020055:
		value = L"RPC_NT_NOT_RPC_ERROR";
		break;
	case 0xC0020057:
		value = L"RPC_NT_SEC_PKG_ERROR";
		break;
	case 0xC0020058:
		value = L"RPC_NT_NOT_CANCELLED";
		break;
	case 0xC0020062:
		value = L"RPC_NT_INVALID_ASYNC_HANDLE";
		break;
	case 0xC0020063:
		value = L"RPC_NT_INVALID_ASYNC_CALL";
		break;
	case 0xC0020064:
		value = L"RPC_NT_PROXY_ACCESS_DENIED";
		break;
	case 0xC0030001:
		value = L"RPC_NT_NO_MORE_ENTRIES";
		break;
	case 0xC0030002:
		value = L"RPC_NT_SS_CHAR_TRANS_OPEN_FAIL";
		break;
	case 0xC0030003:
		value = L"RPC_NT_SS_CHAR_TRANS_SHORT_FILE";
		break;
	case 0xC0030004:
		value = L"RPC_NT_SS_IN_NULL_CONTEXT";
		break;
	case 0xC0030005:
		value = L"RPC_NT_SS_CONTEXT_MISMATCH";
		break;
	case 0xC0030006:
		value = L"RPC_NT_SS_CONTEXT_DAMAGED";
		break;
	case 0xC0030007:
		value = L"RPC_NT_SS_HANDLES_MISMATCH";
		break;
	case 0xC0030008:
		value = L"RPC_NT_SS_CANNOT_GET_CALL_HANDLE";
		break;
	case 0xC0030009:
		value = L"RPC_NT_NULL_REF_POINTER";
		break;
	case 0xC003000A:
		value = L"RPC_NT_ENUM_VALUE_OUT_OF_RANGE";
		break;
	case 0xC003000B:
		value = L"RPC_NT_BYTE_COUNT_TOO_SMALL";
		break;
	case 0xC003000C:
		value = L"RPC_NT_BAD_STUB_DATA";
		break;
	case 0xC0030059:
		value = L"RPC_NT_INVALID_ES_ACTION";
		break;
	case 0xC003005A:
		value = L"RPC_NT_WRONG_ES_VERSION";
		break;
	case 0xC003005B:
		value = L"RPC_NT_WRONG_STUB_VERSION";
		break;
	case 0xC003005C:
		value = L"RPC_NT_INVALID_PIPE_OBJECT";
		break;
	case 0xC003005D:
		value = L"RPC_NT_INVALID_PIPE_OPERATION";
		break;
	case 0xC003005E:
		value = L"RPC_NT_WRONG_PIPE_VERSION";
		break;
	case 0xC003005F:
		value = L"RPC_NT_PIPE_CLOSED";
		break;
	case 0xC0030060:
		value = L"RPC_NT_PIPE_DISCIPLINE_ERROR";
		break;
	case 0xC0030061:
		value = L"RPC_NT_PIPE_EMPTY";
		break;
	case 0xC0040035:
		value = L"STATUS_PNP_BAD_MPS_TABLE";
		break;
	case 0xC0040036:
		value = L"STATUS_PNP_TRANSLATION_FAILED";
		break;
	case 0xC0040037:
		value = L"STATUS_PNP_IRQ_TRANSLATION_FAILED";
		break;
	case 0xC0040038:
		value = L"STATUS_PNP_INVALID_ID";
		break;
	case 0xC0040039:
		value = L"STATUS_IO_REISSUE_AS_CACHED";
		break;
	case 0xC00A0001:
		value = L"STATUS_CTX_WINSTATION_NAME_INVALID";
		break;
	case 0xC00A0002:
		value = L"STATUS_CTX_INVALID_PD";
		break;
	case 0xC00A0003:
		value = L"STATUS_CTX_PD_NOT_FOUND";
		break;
	case 0xC00A0006:
		value = L"STATUS_CTX_CLOSE_PENDING";
		break;
	case 0xC00A0007:
		value = L"STATUS_CTX_NO_OUTBUF";
		break;
	case 0xC00A0008:
		value = L"STATUS_CTX_MODEM_INF_NOT_FOUND";
		break;
	case 0xC00A0009:
		value = L"STATUS_CTX_INVALID_MODEMNAME";
		break;
	case 0xC00A000A:
		value = L"STATUS_CTX_RESPONSE_ERROR";
		break;
	case 0xC00A000B:
		value = L"STATUS_CTX_MODEM_RESPONSE_TIMEOUT";
		break;
	case 0xC00A000C:
		value = L"STATUS_CTX_MODEM_RESPONSE_NO_CARRIER";
		break;
	case 0xC00A000D:
		value = L"STATUS_CTX_MODEM_RESPONSE_NO_DIALTONE";
		break;
	case 0xC00A000E:
		value = L"STATUS_CTX_MODEM_RESPONSE_BUSY";
		break;
	case 0xC00A000F:
		value = L"STATUS_CTX_MODEM_RESPONSE_VOICE";
		break;
	case 0xC00A0010:
		value = L"STATUS_CTX_TD_ERROR";
		break;
	case 0xC00A0012:
		value = L"STATUS_CTX_LICENSE_CLIENT_INVALID";
		break;
	case 0xC00A0013:
		value = L"STATUS_CTX_LICENSE_NOT_AVAILABLE";
		break;
	case 0xC00A0014:
		value = L"STATUS_CTX_LICENSE_EXPIRED";
		break;
	case 0xC00A0015:
		value = L"STATUS_CTX_WINSTATION_NOT_FOUND";
		break;
	case 0xC00A0016:
		value = L"STATUS_CTX_WINSTATION_NAME_COLLISION";
		break;
	case 0xC00A0017:
		value = L"STATUS_CTX_WINSTATION_BUSY";
		break;
	case 0xC00A0018:
		value = L"STATUS_CTX_BAD_VIDEO_MODE";
		break;
	case 0xC00A0022:
		value = L"STATUS_CTX_GRAPHICS_INVALID";
		break;
	case 0xC00A0024:
		value = L"STATUS_CTX_NOT_CONSOLE";
		break;
	case 0xC00A0026:
		value = L"STATUS_CTX_CLIENT_QUERY_TIMEOUT";
		break;
	case 0xC00A0027:
		value = L"STATUS_CTX_CONSOLE_DISCONNECT";
		break;
	case 0xC00A0028:
		value = L"STATUS_CTX_CONSOLE_CONNECT";
		break;
	case 0xC00A002A:
		value = L"STATUS_CTX_SHADOW_DENIED";
		break;
	case 0xC00A002B:
		value = L"STATUS_CTX_WINSTATION_ACCESS_DENIED";
		break;
	case 0xC00A002E:
		value = L"STATUS_CTX_INVALID_WD";
		break;
	case 0xC00A002F:
		value = L"STATUS_CTX_WD_NOT_FOUND";
		break;
	case 0xC00A0030:
		value = L"STATUS_CTX_SHADOW_INVALID";
		break;
	case 0xC00A0031:
		value = L"STATUS_CTX_SHADOW_DISABLED";
		break;
	case 0xC00A0032:
		value = L"STATUS_RDP_PROTOCOL_ERROR";
		break;
	case 0xC00A0033:
		value = L"STATUS_CTX_CLIENT_LICENSE_NOT_SET";
		break;
	case 0xC00A0034:
		value = L"STATUS_CTX_CLIENT_LICENSE_IN_USE";
		break;
	case 0xC00A0035:
		value = L"STATUS_CTX_SHADOW_ENDED_BY_MODE_CHANGE";
		break;
	case 0xC00A0036:
		value = L"STATUS_CTX_SHADOW_NOT_RUNNING";
		break;
	case 0xC00A0037:
		value = L"STATUS_CTX_LOGON_DISABLED";
		break;
	case 0xC00A0038:
		value = L"STATUS_CTX_SECURITY_LAYER_ERROR";
		break;
	case 0xC00A0039:
		value = L"STATUS_TS_INCOMPATIBLE_SESSIONS";
		break;
	case 0xC00B0001:
		value = L"STATUS_MUI_FILE_NOT_FOUND";
		break;
	case 0xC00B0002:
		value = L"STATUS_MUI_INVALID_FILE";
		break;
	case 0xC00B0003:
		value = L"STATUS_MUI_INVALID_RC_CONFIG";
		break;
	case 0xC00B0004:
		value = L"STATUS_MUI_INVALID_LOCALE_NAME";
		break;
	case 0xC00B0005:
		value = L"STATUS_MUI_INVALID_ULTIMATEFALLBACK_NAME";
		break;
	case 0xC00B0006:
		value = L"STATUS_MUI_FILE_NOT_LOADED";
		break;
	case 0xC00B0007:
		value = L"STATUS_RESOURCE_ENUM_USER_STOP";
		break;
	case 0xC0130001:
		value = L"STATUS_CLUSTER_INVALID_NODE";
		break;
	case 0xC0130002:
		value = L"STATUS_CLUSTER_NODE_EXISTS";
		break;
	case 0xC0130003:
		value = L"STATUS_CLUSTER_JOIN_IN_PROGRESS";
		break;
	case 0xC0130004:
		value = L"STATUS_CLUSTER_NODE_NOT_FOUND";
		break;
	case 0xC0130005:
		value = L"STATUS_CLUSTER_LOCAL_NODE_NOT_FOUND";
		break;
	case 0xC0130006:
		value = L"STATUS_CLUSTER_NETWORK_EXISTS";
		break;
	case 0xC0130007:
		value = L"STATUS_CLUSTER_NETWORK_NOT_FOUND";
		break;
	case 0xC0130008:
		value = L"STATUS_CLUSTER_NETINTERFACE_EXISTS";
		break;
	case 0xC0130009:
		value = L"STATUS_CLUSTER_NETINTERFACE_NOT_FOUND";
		break;
	case 0xC013000A:
		value = L"STATUS_CLUSTER_INVALID_REQUEST";
		break;
	case 0xC013000B:
		value = L"STATUS_CLUSTER_INVALID_NETWORK_PROVIDER";
		break;
	case 0xC013000C:
		value = L"STATUS_CLUSTER_NODE_DOWN";
		break;
	case 0xC013000D:
		value = L"STATUS_CLUSTER_NODE_UNREACHABLE";
		break;
	case 0xC013000E:
		value = L"STATUS_CLUSTER_NODE_NOT_MEMBER";
		break;
	case 0xC013000F:
		value = L"STATUS_CLUSTER_JOIN_NOT_IN_PROGRESS";
		break;
	case 0xC0130010:
		value = L"STATUS_CLUSTER_INVALID_NETWORK";
		break;
	case 0xC0130011:
		value = L"STATUS_CLUSTER_NO_NET_ADAPTERS";
		break;
	case 0xC0130012:
		value = L"STATUS_CLUSTER_NODE_UP";
		break;
	case 0xC0130013:
		value = L"STATUS_CLUSTER_NODE_PAUSED";
		break;
	case 0xC0130014:
		value = L"STATUS_CLUSTER_NODE_NOT_PAUSED";
		break;
	case 0xC0130015:
		value = L"STATUS_CLUSTER_NO_SECURITY_CONTEXT";
		break;
	case 0xC0130016:
		value = L"STATUS_CLUSTER_NETWORK_NOT_INTERNAL";
		break;
	case 0xC0130017:
		value = L"STATUS_CLUSTER_POISONED";
		break;
	case 0xC0140001:
		value = L"STATUS_ACPI_INVALID_OPCODE";
		break;
	case 0xC0140002:
		value = L"STATUS_ACPI_STACK_OVERFLOW";
		break;
	case 0xC0140003:
		value = L"STATUS_ACPI_ASSERT_FAILED";
		break;
	case 0xC0140004:
		value = L"STATUS_ACPI_INVALID_INDEX";
		break;
	case 0xC0140005:
		value = L"STATUS_ACPI_INVALID_ARGUMENT";
		break;
	case 0xC0140006:
		value = L"STATUS_ACPI_FATAL";
		break;
	case 0xC0140007:
		value = L"STATUS_ACPI_INVALID_SUPERNAME";
		break;
	case 0xC0140008:
		value = L"STATUS_ACPI_INVALID_ARGTYPE";
		break;
	case 0xC0140009:
		value = L"STATUS_ACPI_INVALID_OBJTYPE";
		break;
	case 0xC014000A:
		value = L"STATUS_ACPI_INVALID_TARGETTYPE";
		break;
	case 0xC014000B:
		value = L"STATUS_ACPI_INCORRECT_ARGUMENT_COUNT";
		break;
	case 0xC014000C:
		value = L"STATUS_ACPI_ADDRESS_NOT_MAPPED";
		break;
	case 0xC014000D:
		value = L"STATUS_ACPI_INVALID_EVENTTYPE";
		break;
	case 0xC014000E:
		value = L"STATUS_ACPI_HANDLER_COLLISION";
		break;
	case 0xC014000F:
		value = L"STATUS_ACPI_INVALID_DATA";
		break;
	case 0xC0140010:
		value = L"STATUS_ACPI_INVALID_REGION";
		break;
	case 0xC0140011:
		value = L"STATUS_ACPI_INVALID_ACCESS_SIZE";
		break;
	case 0xC0140012:
		value = L"STATUS_ACPI_ACQUIRE_GLOBAL_LOCK";
		break;
	case 0xC0140013:
		value = L"STATUS_ACPI_ALREADY_INITIALIZED";
		break;
	case 0xC0140014:
		value = L"STATUS_ACPI_NOT_INITIALIZED";
		break;
	case 0xC0140015:
		value = L"STATUS_ACPI_INVALID_MUTEX_LEVEL";
		break;
	case 0xC0140016:
		value = L"STATUS_ACPI_MUTEX_NOT_OWNED";
		break;
	case 0xC0140017:
		value = L"STATUS_ACPI_MUTEX_NOT_OWNER";
		break;
	case 0xC0140018:
		value = L"STATUS_ACPI_RS_ACCESS";
		break;
	case 0xC0140019:
		value = L"STATUS_ACPI_INVALID_TABLE";
		break;
	case 0xC0140020:
		value = L"STATUS_ACPI_REG_HANDLER_FAILED";
		break;
	case 0xC0140021:
		value = L"STATUS_ACPI_POWER_REQUEST_FAILED";
		break;
	case 0xC0150001:
		value = L"STATUS_SXS_SECTION_NOT_FOUND";
		break;
	case 0xC0150002:
		value = L"STATUS_SXS_CANT_GEN_ACTCTX";
		break;
	case 0xC0150003:
		value = L"STATUS_SXS_INVALID_ACTCTXDATA_FORMAT";
		break;
	case 0xC0150004:
		value = L"STATUS_SXS_ASSEMBLY_NOT_FOUND";
		break;
	case 0xC0150005:
		value = L"STATUS_SXS_MANIFEST_FORMAT_ERROR";
		break;
	case 0xC0150006:
		value = L"STATUS_SXS_MANIFEST_PARSE_ERROR";
		break;
	case 0xC0150007:
		value = L"STATUS_SXS_ACTIVATION_CONTEXT_DISABLED";
		break;
	case 0xC0150008:
		value = L"STATUS_SXS_KEY_NOT_FOUND";
		break;
	case 0xC0150009:
		value = L"STATUS_SXS_VERSION_CONFLICT";
		break;
	case 0xC015000A:
		value = L"STATUS_SXS_WRONG_SECTION_TYPE";
		break;
	case 0xC015000B:
		value = L"STATUS_SXS_THREAD_QUERIES_DISABLED";
		break;
	case 0xC015000C:
		value = L"STATUS_SXS_ASSEMBLY_MISSING";
		break;
	case 0xC015000E:
		value = L"STATUS_SXS_PROCESS_DEFAULT_ALREADY_SET";
		break;
	case 0xC015000F:
		value = L"STATUS_SXS_EARLY_DEACTIVATION";
		break;
	case 0xC0150010:
		value = L"STATUS_SXS_INVALID_DEACTIVATION";
		break;
	case 0xC0150011:
		value = L"STATUS_SXS_MULTIPLE_DEACTIVATION";
		break;
	case 0xC0150012:
		value = L"STATUS_SXS_SYSTEM_DEFAULT_ACTIVATION_CONTEXT_EMPTY";
		break;
	case 0xC0150013:
		value = L"STATUS_SXS_PROCESS_TERMINATION_REQUESTED";
		break;
	case 0xC0150014:
		value = L"STATUS_SXS_CORRUPT_ACTIVATION_STACK";
		break;
	case 0xC0150015:
		value = L"STATUS_SXS_CORRUPTION";
		break;
	case 0xC0150016:
		value = L"STATUS_SXS_INVALID_IDENTITY_ATTRIBUTE_VALUE";
		break;
	case 0xC0150017:
		value = L"STATUS_SXS_INVALID_IDENTITY_ATTRIBUTE_NAME";
		break;
	case 0xC0150018:
		value = L"STATUS_SXS_IDENTITY_DUPLICATE_ATTRIBUTE";
		break;
	case 0xC0150019:
		value = L"STATUS_SXS_IDENTITY_PARSE_ERROR";
		break;
	case 0xC015001A:
		value = L"STATUS_SXS_COMPONENT_STORE_CORRUPT";
		break;
	case 0xC015001B:
		value = L"STATUS_SXS_FILE_HASH_MISMATCH";
		break;
	case 0xC015001C:
		value = L"STATUS_SXS_MANIFEST_IDENTITY_SAME_BUT_CONTENTS_DIFFERENT";
		break;
	case 0xC015001D:
		value = L"STATUS_SXS_IDENTITIES_DIFFERENT";
		break;
	case 0xC015001E:
		value = L"STATUS_SXS_ASSEMBLY_IS_NOT_A_DEPLOYMENT";
		break;
	case 0xC015001F:
		value = L"STATUS_SXS_FILE_NOT_PART_OF_ASSEMBLY";
		break;
	case 0xC0150020:
		value = L"STATUS_ADVANCED_INSTALLER_FAILED";
		break;
	case 0xC0150021:
		value = L"STATUS_XML_ENCODING_MISMATCH";
		break;
	case 0xC0150022:
		value = L"STATUS_SXS_MANIFEST_TOO_BIG";
		break;
	case 0xC0150023:
		value = L"STATUS_SXS_SETTING_NOT_REGISTERED";
		break;
	case 0xC0150024:
		value = L"STATUS_SXS_TRANSACTION_CLOSURE_INCOMPLETE";
		break;
	case 0xC0150025:
		value = L"STATUS_SMI_PRIMITIVE_INSTALLER_FAILED";
		break;
	case 0xC0150026:
		value = L"STATUS_GENERIC_COMMAND_FAILED";
		break;
	case 0xC0150027:
		value = L"STATUS_SXS_FILE_HASH_MISSING";
		break;
	case 0xC0190001:
		value = L"STATUS_TRANSACTIONAL_CONFLICT";
		break;
	case 0xC0190002:
		value = L"STATUS_INVALID_TRANSACTION";
		break;
	case 0xC0190003:
		value = L"STATUS_TRANSACTION_NOT_ACTIVE";
		break;
	case 0xC0190004:
		value = L"STATUS_TM_INITIALIZATION_FAILED";
		break;
	case 0xC0190005:
		value = L"STATUS_RM_NOT_ACTIVE";
		break;
	case 0xC0190006:
		value = L"STATUS_RM_METADATA_CORRUPT";
		break;
	case 0xC0190007:
		value = L"STATUS_TRANSACTION_NOT_JOINED";
		break;
	case 0xC0190008:
		value = L"STATUS_DIRECTORY_NOT_RM";
		break;
	case 0xC019000A:
		value = L"STATUS_TRANSACTIONS_UNSUPPORTED_REMOTE";
		break;
	case 0xC019000B:
		value = L"STATUS_LOG_RESIZE_INVALID_SIZE";
		break;
	case 0xC019000C:
		value = L"STATUS_REMOTE_FILE_VERSION_MISMATCH";
		break;
	case 0xC019000F:
		value = L"STATUS_CRM_PROTOCOL_ALREADY_EXISTS";
		break;
	case 0xC0190010:
		value = L"STATUS_TRANSACTION_PROPAGATION_FAILED";
		break;
	case 0xC0190011:
		value = L"STATUS_CRM_PROTOCOL_NOT_FOUND";
		break;
	case 0xC0190012:
		value = L"STATUS_TRANSACTION_SUPERIOR_EXISTS";
		break;
	case 0xC0190013:
		value = L"STATUS_TRANSACTION_REQUEST_NOT_VALID";
		break;
	case 0xC0190014:
		value = L"STATUS_TRANSACTION_NOT_REQUESTED";
		break;
	case 0xC0190015:
		value = L"STATUS_TRANSACTION_ALREADY_ABORTED";
		break;
	case 0xC0190016:
		value = L"STATUS_TRANSACTION_ALREADY_COMMITTED";
		break;
	case 0xC0190017:
		value = L"STATUS_TRANSACTION_INVALID_MARSHALL_BUFFER";
		break;
	case 0xC0190018:
		value = L"STATUS_CURRENT_TRANSACTION_NOT_VALID";
		break;
	case 0xC0190019:
		value = L"STATUS_LOG_GROWTH_FAILED";
		break;
	case 0xC0190021:
		value = L"STATUS_OBJECT_NO_LONGER_EXISTS";
		break;
	case 0xC0190022:
		value = L"STATUS_STREAM_MINIVERSION_NOT_FOUND";
		break;
	case 0xC0190023:
		value = L"STATUS_STREAM_MINIVERSION_NOT_VALID";
		break;
	case 0xC0190024:
		value = L"STATUS_MINIVERSION_INACCESSIBLE_FROM_SPECIFIED_TRANSACTION";
		break;
	case 0xC0190025:
		value = L"STATUS_CANT_OPEN_MINIVERSION_WITH_MODIFY_INTENT";
		break;
	case 0xC0190026:
		value = L"STATUS_CANT_CREATE_MORE_STREAM_MINIVERSIONS";
		break;
	case 0xC0190028:
		value = L"STATUS_HANDLE_NO_LONGER_VALID";
		break;
	case 0xC0190030:
		value = L"STATUS_LOG_CORRUPTION_DETECTED";
		break;
	case 0xC0190032:
		value = L"STATUS_RM_DISCONNECTED";
		break;
	case 0xC0190033:
		value = L"STATUS_ENLISTMENT_NOT_SUPERIOR";
		break;
	case 0xC0190036:
		value = L"STATUS_FILE_IDENTITY_NOT_PERSISTENT";
		break;
	case 0xC0190037:
		value = L"STATUS_CANT_BREAK_TRANSACTIONAL_DEPENDENCY";
		break;
	case 0xC0190038:
		value = L"STATUS_CANT_CROSS_RM_BOUNDARY";
		break;
	case 0xC0190039:
		value = L"STATUS_TXF_DIR_NOT_EMPTY";
		break;
	case 0xC019003A:
		value = L"STATUS_INDOUBT_TRANSACTIONS_EXIST";
		break;
	case 0xC019003B:
		value = L"STATUS_TM_VOLATILE";
		break;
	case 0xC019003C:
		value = L"STATUS_ROLLBACK_TIMER_EXPIRED";
		break;
	case 0xC019003D:
		value = L"STATUS_TXF_ATTRIBUTE_CORRUPT";
		break;
	case 0xC019003E:
		value = L"STATUS_EFS_NOT_ALLOWED_IN_TRANSACTION";
		break;
	case 0xC019003F:
		value = L"STATUS_TRANSACTIONAL_OPEN_NOT_ALLOWED";
		break;
	case 0xC0190040:
		value = L"STATUS_TRANSACTED_MAPPING_UNSUPPORTED_REMOTE";
		break;
	case 0xC0190043:
		value = L"STATUS_TRANSACTION_REQUIRED_PROMOTION";
		break;
	case 0xC0190044:
		value = L"STATUS_CANNOT_EXECUTE_FILE_IN_TRANSACTION";
		break;
	case 0xC0190045:
		value = L"STATUS_TRANSACTIONS_NOT_FROZEN";
		break;
	case 0xC0190046:
		value = L"STATUS_TRANSACTION_FREEZE_IN_PROGRESS";
		break;
	case 0xC0190047:
		value = L"STATUS_NOT_SNAPSHOT_VOLUME";
		break;
	case 0xC0190048:
		value = L"STATUS_NO_SAVEPOINT_WITH_OPEN_FILES";
		break;
	case 0xC0190049:
		value = L"STATUS_SPARSE_NOT_ALLOWED_IN_TRANSACTION";
		break;
	case 0xC019004A:
		value = L"STATUS_TM_IDENTITY_MISMATCH";
		break;
	case 0xC019004B:
		value = L"STATUS_FLOATED_SECTION";
		break;
	case 0xC019004C:
		value = L"STATUS_CANNOT_ACCEPT_TRANSACTED_WORK";
		break;
	case 0xC019004D:
		value = L"STATUS_CANNOT_ABORT_TRANSACTIONS";
		break;
	case 0xC019004E:
		value = L"STATUS_TRANSACTION_NOT_FOUND";
		break;
	case 0xC019004F:
		value = L"STATUS_RESOURCEMANAGER_NOT_FOUND";
		break;
	case 0xC0190050:
		value = L"STATUS_ENLISTMENT_NOT_FOUND";
		break;
	case 0xC0190051:
		value = L"STATUS_TRANSACTIONMANAGER_NOT_FOUND";
		break;
	case 0xC0190052:
		value = L"STATUS_TRANSACTIONMANAGER_NOT_ONLINE";
		break;
	case 0xC0190053:
		value = L"STATUS_TRANSACTIONMANAGER_RECOVERY_NAME_COLLISION";
		break;
	case 0xC0190054:
		value = L"STATUS_TRANSACTION_NOT_ROOT";
		break;
	case 0xC0190055:
		value = L"STATUS_TRANSACTION_OBJECT_EXPIRED";
		break;
	case 0xC0190056:
		value = L"STATUS_COMPRESSION_NOT_ALLOWED_IN_TRANSACTION";
		break;
	case 0xC0190057:
		value = L"STATUS_TRANSACTION_RESPONSE_NOT_ENLISTED";
		break;
	case 0xC0190058:
		value = L"STATUS_TRANSACTION_RECORD_TOO_LONG";
		break;
	case 0xC0190059:
		value = L"STATUS_NO_LINK_TRACKING_IN_TRANSACTION";
		break;
	case 0xC019005A:
		value = L"STATUS_OPERATION_NOT_SUPPORTED_IN_TRANSACTION";
		break;
	case 0xC019005B:
		value = L"STATUS_TRANSACTION_INTEGRITY_VIOLATED";
		break;
	case 0xC0190060:
		value = L"STATUS_EXPIRED_HANDLE";
		break;
	case 0xC0190061:
		value = L"STATUS_TRANSACTION_NOT_ENLISTED";
		break;
	case 0xC01A0001:
		value = L"STATUS_LOG_SECTOR_INVALID";
		break;
	case 0xC01A0002:
		value = L"STATUS_LOG_SECTOR_PARITY_INVALID";
		break;
	case 0xC01A0003:
		value = L"STATUS_LOG_SECTOR_REMAPPED";
		break;
	case 0xC01A0004:
		value = L"STATUS_LOG_BLOCK_INCOMPLETE";
		break;
	case 0xC01A0005:
		value = L"STATUS_LOG_INVALID_RANGE";
		break;
	case 0xC01A0006:
		value = L"STATUS_LOG_BLOCKS_EXHAUSTED";
		break;
	case 0xC01A0007:
		value = L"STATUS_LOG_READ_CONTEXT_INVALID";
		break;
	case 0xC01A0008:
		value = L"STATUS_LOG_RESTART_INVALID";
		break;
	case 0xC01A0009:
		value = L"STATUS_LOG_BLOCK_VERSION";
		break;
	case 0xC01A000A:
		value = L"STATUS_LOG_BLOCK_INVALID";
		break;
	case 0xC01A000B:
		value = L"STATUS_LOG_READ_MODE_INVALID";
		break;
	case 0xC01A000D:
		value = L"STATUS_LOG_METADATA_CORRUPT";
		break;
	case 0xC01A000E:
		value = L"STATUS_LOG_METADATA_INVALID";
		break;
	case 0xC01A000F:
		value = L"STATUS_LOG_METADATA_INCONSISTENT";
		break;
	case 0xC01A0010:
		value = L"STATUS_LOG_RESERVATION_INVALID";
		break;
	case 0xC01A0011:
		value = L"STATUS_LOG_CANT_DELETE";
		break;
	case 0xC01A0012:
		value = L"STATUS_LOG_CONTAINER_LIMIT_EXCEEDED";
		break;
	case 0xC01A0013:
		value = L"STATUS_LOG_START_OF_LOG";
		break;
	case 0xC01A0014:
		value = L"STATUS_LOG_POLICY_ALREADY_INSTALLED";
		break;
	case 0xC01A0015:
		value = L"STATUS_LOG_POLICY_NOT_INSTALLED";
		break;
	case 0xC01A0016:
		value = L"STATUS_LOG_POLICY_INVALID";
		break;
	case 0xC01A0017:
		value = L"STATUS_LOG_POLICY_CONFLICT";
		break;
	case 0xC01A0018:
		value = L"STATUS_LOG_PINNED_ARCHIVE_TAIL";
		break;
	case 0xC01A0019:
		value = L"STATUS_LOG_RECORD_NONEXISTENT";
		break;
	case 0xC01A001A:
		value = L"STATUS_LOG_RECORDS_RESERVED_INVALID";
		break;
	case 0xC01A001B:
		value = L"STATUS_LOG_SPACE_RESERVED_INVALID";
		break;
	case 0xC01A001C:
		value = L"STATUS_LOG_TAIL_INVALID";
		break;
	case 0xC01A001D:
		value = L"STATUS_LOG_FULL";
		break;
	case 0xC01A001E:
		value = L"STATUS_LOG_MULTIPLEXED";
		break;
	case 0xC01A001F:
		value = L"STATUS_LOG_DEDICATED";
		break;
	case 0xC01A0020:
		value = L"STATUS_LOG_ARCHIVE_NOT_IN_PROGRESS";
		break;
	case 0xC01A0021:
		value = L"STATUS_LOG_ARCHIVE_IN_PROGRESS";
		break;
	case 0xC01A0022:
		value = L"STATUS_LOG_EPHEMERAL";
		break;
	case 0xC01A0023:
		value = L"STATUS_LOG_NOT_ENOUGH_CONTAINERS";
		break;
	case 0xC01A0024:
		value = L"STATUS_LOG_CLIENT_ALREADY_REGISTERED";
		break;
	case 0xC01A0025:
		value = L"STATUS_LOG_CLIENT_NOT_REGISTERED";
		break;
	case 0xC01A0026:
		value = L"STATUS_LOG_FULL_HANDLER_IN_PROGRESS";
		break;
	case 0xC01A0027:
		value = L"STATUS_LOG_CONTAINER_READ_FAILED";
		break;
	case 0xC01A0028:
		value = L"STATUS_LOG_CONTAINER_WRITE_FAILED";
		break;
	case 0xC01A0029:
		value = L"STATUS_LOG_CONTAINER_OPEN_FAILED";
		break;
	case 0xC01A002A:
		value = L"STATUS_LOG_CONTAINER_STATE_INVALID";
		break;
	case 0xC01A002B:
		value = L"STATUS_LOG_STATE_INVALID";
		break;
	case 0xC01A002C:
		value = L"STATUS_LOG_PINNED";
		break;
	case 0xC01A002D:
		value = L"STATUS_LOG_METADATA_FLUSH_FAILED";
		break;
	case 0xC01A002E:
		value = L"STATUS_LOG_INCONSISTENT_SECURITY";
		break;
	case 0xC01A002F:
		value = L"STATUS_LOG_APPENDED_FLUSH_FAILED";
		break;
	case 0xC01A0030:
		value = L"STATUS_LOG_PINNED_RESERVATION";
		break;
	case 0xC01B00EA:
		value = L"STATUS_VIDEO_HUNG_DISPLAY_DRIVER_THREAD";
		break;
	case 0xC01C0001:
		value = L"STATUS_FLT_NO_HANDLER_DEFINED";
		break;
	case 0xC01C0002:
		value = L"STATUS_FLT_CONTEXT_ALREADY_DEFINED";
		break;
	case 0xC01C0003:
		value = L"STATUS_FLT_INVALID_ASYNCHRONOUS_REQUEST";
		break;
	case 0xC01C0004:
		value = L"STATUS_FLT_DISALLOW_FAST_IO";
		break;
	case 0xC01C0005:
		value = L"STATUS_FLT_INVALID_NAME_REQUEST";
		break;
	case 0xC01C0006:
		value = L"STATUS_FLT_NOT_SAFE_TO_POST_OPERATION";
		break;
	case 0xC01C0007:
		value = L"STATUS_FLT_NOT_INITIALIZED";
		break;
	case 0xC01C0008:
		value = L"STATUS_FLT_FILTER_NOT_READY";
		break;
	case 0xC01C0009:
		value = L"STATUS_FLT_POST_OPERATION_CLEANUP";
		break;
	case 0xC01C000A:
		value = L"STATUS_FLT_INTERNAL_ERROR";
		break;
	case 0xC01C000B:
		value = L"STATUS_FLT_DELETING_OBJECT";
		break;
	case 0xC01C000C:
		value = L"STATUS_FLT_MUST_BE_NONPAGED_POOL";
		break;
	case 0xC01C000D:
		value = L"STATUS_FLT_DUPLICATE_ENTRY";
		break;
	case 0xC01C000E:
		value = L"STATUS_FLT_CBDQ_DISABLED";
		break;
	case 0xC01C000F:
		value = L"STATUS_FLT_DO_NOT_ATTACH";
		break;
	case 0xC01C0010:
		value = L"STATUS_FLT_DO_NOT_DETACH";
		break;
	case 0xC01C0011:
		value = L"STATUS_FLT_INSTANCE_ALTITUDE_COLLISION";
		break;
	case 0xC01C0012:
		value = L"STATUS_FLT_INSTANCE_NAME_COLLISION";
		break;
	case 0xC01C0013:
		value = L"STATUS_FLT_FILTER_NOT_FOUND";
		break;
	case 0xC01C0014:
		value = L"STATUS_FLT_VOLUME_NOT_FOUND";
		break;
	case 0xC01C0015:
		value = L"STATUS_FLT_INSTANCE_NOT_FOUND";
		break;
	case 0xC01C0016:
		value = L"STATUS_FLT_CONTEXT_ALLOCATION_NOT_FOUND";
		break;
	case 0xC01C0017:
		value = L"STATUS_FLT_INVALID_CONTEXT_REGISTRATION";
		break;
	case 0xC01C0018:
		value = L"STATUS_FLT_NAME_CACHE_MISS";
		break;
	case 0xC01C0019:
		value = L"STATUS_FLT_NO_DEVICE_OBJECT";
		break;
	case 0xC01C001A:
		value = L"STATUS_FLT_VOLUME_ALREADY_MOUNTED";
		break;
	case 0xC01C001B:
		value = L"STATUS_FLT_ALREADY_ENLISTED";
		break;
	case 0xC01C001C:
		value = L"STATUS_FLT_CONTEXT_ALREADY_LINKED";
		break;
	case 0xC01C0020:
		value = L"STATUS_FLT_NO_WAITER_FOR_REPLY";
		break;
	case 0xC01D0001:
		value = L"STATUS_MONITOR_NO_DESCRIPTOR";
		break;
	case 0xC01D0002:
		value = L"STATUS_MONITOR_UNKNOWN_DESCRIPTOR_FORMAT";
		break;
	case 0xC01D0003:
		value = L"STATUS_MONITOR_INVALID_DESCRIPTOR_CHECKSUM";
		break;
	case 0xC01D0004:
		value = L"STATUS_MONITOR_INVALID_STANDARD_TIMING_BLOCK";
		break;
	case 0xC01D0005:
		value = L"STATUS_MONITOR_WMI_DATABLOCK_REGISTRATION_FAILED";
		break;
	case 0xC01D0006:
		value = L"STATUS_MONITOR_INVALID_SERIAL_NUMBER_MONDSC_BLOCK";
		break;
	case 0xC01D0007:
		value = L"STATUS_MONITOR_INVALID_USER_FRIENDLY_MONDSC_BLOCK";
		break;
	case 0xC01D0008:
		value = L"STATUS_MONITOR_NO_MORE_DESCRIPTOR_DATA";
		break;
	case 0xC01D0009:
		value = L"STATUS_MONITOR_INVALID_DETAILED_TIMING_BLOCK";
		break;
	case 0xC01D000A:
		value = L"STATUS_MONITOR_INVALID_MANUFACTURE_DATE";
		break;
	case 0xC01E0000:
		value = L"STATUS_GRAPHICS_NOT_EXCLUSIVE_MODE_OWNER";
		break;
	case 0xC01E0001:
		value = L"STATUS_GRAPHICS_INSUFFICIENT_DMA_BUFFER";
		break;
	case 0xC01E0002:
		value = L"STATUS_GRAPHICS_INVALID_DISPLAY_ADAPTER";
		break;
	case 0xC01E0003:
		value = L"STATUS_GRAPHICS_ADAPTER_WAS_RESET";
		break;
	case 0xC01E0004:
		value = L"STATUS_GRAPHICS_INVALID_DRIVER_MODEL";
		break;
	case 0xC01E0005:
		value = L"STATUS_GRAPHICS_PRESENT_MODE_CHANGED";
		break;
	case 0xC01E0006:
		value = L"STATUS_GRAPHICS_PRESENT_OCCLUDED";
		break;
	case 0xC01E0007:
		value = L"STATUS_GRAPHICS_PRESENT_DENIED";
		break;
	case 0xC01E0008:
		value = L"STATUS_GRAPHICS_CANNOTCOLORCONVERT";
		break;
	case 0xC01E000B:
		value = L"STATUS_GRAPHICS_PRESENT_REDIRECTION_DISABLED";
		break;
	case 0xC01E000C:
		value = L"STATUS_GRAPHICS_PRESENT_UNOCCLUDED";
		break;
	case 0xC01E0100:
		value = L"STATUS_GRAPHICS_NO_VIDEO_MEMORY";
		break;
	case 0xC01E0101:
		value = L"STATUS_GRAPHICS_CANT_LOCK_MEMORY";
		break;
	case 0xC01E0102:
		value = L"STATUS_GRAPHICS_ALLOCATION_BUSY";
		break;
	case 0xC01E0103:
		value = L"STATUS_GRAPHICS_TOO_MANY_REFERENCES";
		break;
	case 0xC01E0104:
		value = L"STATUS_GRAPHICS_TRY_AGAIN_LATER";
		break;
	case 0xC01E0105:
		value = L"STATUS_GRAPHICS_TRY_AGAIN_NOW";
		break;
	case 0xC01E0106:
		value = L"STATUS_GRAPHICS_ALLOCATION_INVALID";
		break;
	case 0xC01E0107:
		value = L"STATUS_GRAPHICS_UNSWIZZLING_APERTURE_UNAVAILABLE";
		break;
	case 0xC01E0108:
		value = L"STATUS_GRAPHICS_UNSWIZZLING_APERTURE_UNSUPPORTED";
		break;
	case 0xC01E0109:
		value = L"STATUS_GRAPHICS_CANT_EVICT_PINNED_ALLOCATION";
		break;
	case 0xC01E0110:
		value = L"STATUS_GRAPHICS_INVALID_ALLOCATION_USAGE";
		break;
	case 0xC01E0111:
		value = L"STATUS_GRAPHICS_CANT_RENDER_LOCKED_ALLOCATION";
		break;
	case 0xC01E0112:
		value = L"STATUS_GRAPHICS_ALLOCATION_CLOSED";
		break;
	case 0xC01E0113:
		value = L"STATUS_GRAPHICS_INVALID_ALLOCATION_INSTANCE";
		break;
	case 0xC01E0114:
		value = L"STATUS_GRAPHICS_INVALID_ALLOCATION_HANDLE";
		break;
	case 0xC01E0115:
		value = L"STATUS_GRAPHICS_WRONG_ALLOCATION_DEVICE";
		break;
	case 0xC01E0116:
		value = L"STATUS_GRAPHICS_ALLOCATION_CONTENT_LOST";
		break;
	case 0xC01E0200:
		value = L"STATUS_GRAPHICS_GPU_EXCEPTION_ON_DEVICE";
		break;
	case 0xC01E0300:
		value = L"STATUS_GRAPHICS_INVALID_VIDPN_TOPOLOGY";
		break;
	case 0xC01E0301:
		value = L"STATUS_GRAPHICS_VIDPN_TOPOLOGY_NOT_SUPPORTED";
		break;
	case 0xC01E0302:
		value = L"STATUS_GRAPHICS_VIDPN_TOPOLOGY_CURRENTLY_NOT_SUPPORTED";
		break;
	case 0xC01E0303:
		value = L"STATUS_GRAPHICS_INVALID_VIDPN";
		break;
	case 0xC01E0304:
		value = L"STATUS_GRAPHICS_INVALID_VIDEO_PRESENT_SOURCE";
		break;
	case 0xC01E0305:
		value = L"STATUS_GRAPHICS_INVALID_VIDEO_PRESENT_TARGET";
		break;
	case 0xC01E0306:
		value = L"STATUS_GRAPHICS_VIDPN_MODALITY_NOT_SUPPORTED";
		break;
	case 0xC01E0308:
		value = L"STATUS_GRAPHICS_INVALID_VIDPN_SOURCEMODESET";
		break;
	case 0xC01E0309:
		value = L"STATUS_GRAPHICS_INVALID_VIDPN_TARGETMODESET";
		break;
	case 0xC01E030A:
		value = L"STATUS_GRAPHICS_INVALID_FREQUENCY";
		break;
	case 0xC01E030B:
		value = L"STATUS_GRAPHICS_INVALID_ACTIVE_REGION";
		break;
	case 0xC01E030C:
		value = L"STATUS_GRAPHICS_INVALID_TOTAL_REGION";
		break;
	case 0xC01E0310:
		value = L"STATUS_GRAPHICS_INVALID_VIDEO_PRESENT_SOURCE_MODE";
		break;
	case 0xC01E0311:
		value = L"STATUS_GRAPHICS_INVALID_VIDEO_PRESENT_TARGET_MODE";
		break;
	case 0xC01E0312:
		value = L"STATUS_GRAPHICS_PINNED_MODE_MUST_REMAIN_IN_SET";
		break;
	case 0xC01E0313:
		value = L"STATUS_GRAPHICS_PATH_ALREADY_IN_TOPOLOGY";
		break;
	case 0xC01E0314:
		value = L"STATUS_GRAPHICS_MODE_ALREADY_IN_MODESET";
		break;
	case 0xC01E0315:
		value = L"STATUS_GRAPHICS_INVALID_VIDEOPRESENTSOURCESET";
		break;
	case 0xC01E0316:
		value = L"STATUS_GRAPHICS_INVALID_VIDEOPRESENTTARGETSET";
		break;
	case 0xC01E0317:
		value = L"STATUS_GRAPHICS_SOURCE_ALREADY_IN_SET";
		break;
	case 0xC01E0318:
		value = L"STATUS_GRAPHICS_TARGET_ALREADY_IN_SET";
		break;
	case 0xC01E0319:
		value = L"STATUS_GRAPHICS_INVALID_VIDPN_PRESENT_PATH";
		break;
	case 0xC01E031A:
		value = L"STATUS_GRAPHICS_NO_RECOMMENDED_VIDPN_TOPOLOGY";
		break;
	case 0xC01E031B:
		value = L"STATUS_GRAPHICS_INVALID_MONITOR_FREQUENCYRANGESET";
		break;
	case 0xC01E031C:
		value = L"STATUS_GRAPHICS_INVALID_MONITOR_FREQUENCYRANGE";
		break;
	case 0xC01E031D:
		value = L"STATUS_GRAPHICS_FREQUENCYRANGE_NOT_IN_SET";
		break;
	case 0xC01E031F:
		value = L"STATUS_GRAPHICS_FREQUENCYRANGE_ALREADY_IN_SET";
		break;
	case 0xC01E0320:
		value = L"STATUS_GRAPHICS_STALE_MODESET";
		break;
	case 0xC01E0321:
		value = L"STATUS_GRAPHICS_INVALID_MONITOR_SOURCEMODESET";
		break;
	case 0xC01E0322:
		value = L"STATUS_GRAPHICS_INVALID_MONITOR_SOURCE_MODE";
		break;
	case 0xC01E0323:
		value = L"STATUS_GRAPHICS_NO_RECOMMENDED_FUNCTIONAL_VIDPN";
		break;
	case 0xC01E0324:
		value = L"STATUS_GRAPHICS_MODE_ID_MUST_BE_UNIQUE";
		break;
	case 0xC01E0325:
		value = L"STATUS_GRAPHICS_EMPTY_ADAPTER_MONITOR_MODE_SUPPORT_INTERSECTION";
		break;
	case 0xC01E0326:
		value = L"STATUS_GRAPHICS_VIDEO_PRESENT_TARGETS_LESS_THAN_SOURCES";
		break;
	case 0xC01E0327:
		value = L"STATUS_GRAPHICS_PATH_NOT_IN_TOPOLOGY";
		break;
	case 0xC01E0328:
		value = L"STATUS_GRAPHICS_ADAPTER_MUST_HAVE_AT_LEAST_ONE_SOURCE";
		break;
	case 0xC01E0329:
		value = L"STATUS_GRAPHICS_ADAPTER_MUST_HAVE_AT_LEAST_ONE_TARGET";
		break;
	case 0xC01E032A:
		value = L"STATUS_GRAPHICS_INVALID_MONITORDESCRIPTORSET";
		break;
	case 0xC01E032B:
		value = L"STATUS_GRAPHICS_INVALID_MONITORDESCRIPTOR";
		break;
	case 0xC01E032C:
		value = L"STATUS_GRAPHICS_MONITORDESCRIPTOR_NOT_IN_SET";
		break;
	case 0xC01E032D:
		value = L"STATUS_GRAPHICS_MONITORDESCRIPTOR_ALREADY_IN_SET";
		break;
	case 0xC01E032E:
		value = L"STATUS_GRAPHICS_MONITORDESCRIPTOR_ID_MUST_BE_UNIQUE";
		break;
	case 0xC01E032F:
		value = L"STATUS_GRAPHICS_INVALID_VIDPN_TARGET_SUBSET_TYPE";
		break;
	case 0xC01E0330:
		value = L"STATUS_GRAPHICS_RESOURCES_NOT_RELATED";
		break;
	case 0xC01E0331:
		value = L"STATUS_GRAPHICS_SOURCE_ID_MUST_BE_UNIQUE";
		break;
	case 0xC01E0332:
		value = L"STATUS_GRAPHICS_TARGET_ID_MUST_BE_UNIQUE";
		break;
	case 0xC01E0333:
		value = L"STATUS_GRAPHICS_NO_AVAILABLE_VIDPN_TARGET";
		break;
	case 0xC01E0334:
		value = L"STATUS_GRAPHICS_MONITOR_COULD_NOT_BE_ASSOCIATED_WITH_ADAPTER";
		break;
	case 0xC01E0335:
		value = L"STATUS_GRAPHICS_NO_VIDPNMGR";
		break;
	case 0xC01E0336:
		value = L"STATUS_GRAPHICS_NO_ACTIVE_VIDPN";
		break;
	case 0xC01E0337:
		value = L"STATUS_GRAPHICS_STALE_VIDPN_TOPOLOGY";
		break;
	case 0xC01E0338:
		value = L"STATUS_GRAPHICS_MONITOR_NOT_CONNECTED";
		break;
	case 0xC01E0339:
		value = L"STATUS_GRAPHICS_SOURCE_NOT_IN_TOPOLOGY";
		break;
	case 0xC01E033A:
		value = L"STATUS_GRAPHICS_INVALID_PRIMARYSURFACE_SIZE";
		break;
	case 0xC01E033B:
		value = L"STATUS_GRAPHICS_INVALID_VISIBLEREGION_SIZE";
		break;
	case 0xC01E033C:
		value = L"STATUS_GRAPHICS_INVALID_STRIDE";
		break;
	case 0xC01E033D:
		value = L"STATUS_GRAPHICS_INVALID_PIXELFORMAT";
		break;
	case 0xC01E033E:
		value = L"STATUS_GRAPHICS_INVALID_COLORBASIS";
		break;
	case 0xC01E033F:
		value = L"STATUS_GRAPHICS_INVALID_PIXELVALUEACCESSMODE";
		break;
	case 0xC01E0340:
		value = L"STATUS_GRAPHICS_TARGET_NOT_IN_TOPOLOGY";
		break;
	case 0xC01E0341:
		value = L"STATUS_GRAPHICS_NO_DISPLAY_MODE_MANAGEMENT_SUPPORT";
		break;
	case 0xC01E0342:
		value = L"STATUS_GRAPHICS_VIDPN_SOURCE_IN_USE";
		break;
	case 0xC01E0343:
		value = L"STATUS_GRAPHICS_CANT_ACCESS_ACTIVE_VIDPN";
		break;
	case 0xC01E0344:
		value = L"STATUS_GRAPHICS_INVALID_PATH_IMPORTANCE_ORDINAL";
		break;
	case 0xC01E0345:
		value = L"STATUS_GRAPHICS_INVALID_PATH_CONTENT_GEOMETRY_TRANSFORMATION";
		break;
	case 0xC01E0346:
		value = L"STATUS_GRAPHICS_PATH_CONTENT_GEOMETRY_TRANSFORMATION_NOT_SUPPORTED";
		break;
	case 0xC01E0347:
		value = L"STATUS_GRAPHICS_INVALID_GAMMA_RAMP";
		break;
	case 0xC01E0348:
		value = L"STATUS_GRAPHICS_GAMMA_RAMP_NOT_SUPPORTED";
		break;
	case 0xC01E0349:
		value = L"STATUS_GRAPHICS_MULTISAMPLING_NOT_SUPPORTED";
		break;
	case 0xC01E034A:
		value = L"STATUS_GRAPHICS_MODE_NOT_IN_MODESET";
		break;
	case 0xC01E034D:
		value = L"STATUS_GRAPHICS_INVALID_VIDPN_TOPOLOGY_RECOMMENDATION_REASON";
		break;
	case 0xC01E034E:
		value = L"STATUS_GRAPHICS_INVALID_PATH_CONTENT_TYPE";
		break;
	case 0xC01E034F:
		value = L"STATUS_GRAPHICS_INVALID_COPYPROTECTION_TYPE";
		break;
	case 0xC01E0350:
		value = L"STATUS_GRAPHICS_UNASSIGNED_MODESET_ALREADY_EXISTS";
		break;
	case 0xC01E0352:
		value = L"STATUS_GRAPHICS_INVALID_SCANLINE_ORDERING";
		break;
	case 0xC01E0353:
		value = L"STATUS_GRAPHICS_TOPOLOGY_CHANGES_NOT_ALLOWED";
		break;
	case 0xC01E0354:
		value = L"STATUS_GRAPHICS_NO_AVAILABLE_IMPORTANCE_ORDINALS";
		break;
	case 0xC01E0355:
		value = L"STATUS_GRAPHICS_INCOMPATIBLE_PRIVATE_FORMAT";
		break;
	case 0xC01E0356:
		value = L"STATUS_GRAPHICS_INVALID_MODE_PRUNING_ALGORITHM";
		break;
	case 0xC01E0357:
		value = L"STATUS_GRAPHICS_INVALID_MONITOR_CAPABILITY_ORIGIN";
		break;
	case 0xC01E0358:
		value = L"STATUS_GRAPHICS_INVALID_MONITOR_FREQUENCYRANGE_CONSTRAINT";
		break;
	case 0xC01E0359:
		value = L"STATUS_GRAPHICS_MAX_NUM_PATHS_REACHED";
		break;
	case 0xC01E035A:
		value = L"STATUS_GRAPHICS_CANCEL_VIDPN_TOPOLOGY_AUGMENTATION";
		break;
	case 0xC01E035B:
		value = L"STATUS_GRAPHICS_INVALID_CLIENT_TYPE";
		break;
	case 0xC01E035C:
		value = L"STATUS_GRAPHICS_CLIENTVIDPN_NOT_SET";
		break;
	case 0xC01E0400:
		value = L"STATUS_GRAPHICS_SPECIFIED_CHILD_ALREADY_CONNECTED";
		break;
	case 0xC01E0401:
		value = L"STATUS_GRAPHICS_CHILD_DESCRIPTOR_NOT_SUPPORTED";
		break;
	case 0xC01E0430:
		value = L"STATUS_GRAPHICS_NOT_A_LINKED_ADAPTER";
		break;
	case 0xC01E0431:
		value = L"STATUS_GRAPHICS_LEADLINK_NOT_ENUMERATED";
		break;
	case 0xC01E0432:
		value = L"STATUS_GRAPHICS_CHAINLINKS_NOT_ENUMERATED";
		break;
	case 0xC01E0433:
		value = L"STATUS_GRAPHICS_ADAPTER_CHAIN_NOT_READY";
		break;
	case 0xC01E0434:
		value = L"STATUS_GRAPHICS_CHAINLINKS_NOT_STARTED";
		break;
	case 0xC01E0435:
		value = L"STATUS_GRAPHICS_CHAINLINKS_NOT_POWERED_ON";
		break;
	case 0xC01E0436:
		value = L"STATUS_GRAPHICS_INCONSISTENT_DEVICE_LINK_STATE";
		break;
	case 0xC01E0438:
		value = L"STATUS_GRAPHICS_NOT_POST_DEVICE_DRIVER";
		break;
	case 0xC01E043B:
		value = L"STATUS_GRAPHICS_ADAPTER_ACCESS_NOT_EXCLUDED";
		break;
	case 0xC01E0500:
		value = L"STATUS_GRAPHICS_OPM_NOT_SUPPORTED";
		break;
	case 0xC01E0501:
		value = L"STATUS_GRAPHICS_COPP_NOT_SUPPORTED";
		break;
	case 0xC01E0502:
		value = L"STATUS_GRAPHICS_UAB_NOT_SUPPORTED";
		break;
	case 0xC01E0503:
		value = L"STATUS_GRAPHICS_OPM_INVALID_ENCRYPTED_PARAMETERS";
		break;
	case 0xC01E0504:
		value = L"STATUS_GRAPHICS_OPM_PARAMETER_ARRAY_TOO_SMALL";
		break;
	case 0xC01E0505:
		value = L"STATUS_GRAPHICS_OPM_NO_PROTECTED_OUTPUTS_EXIST";
		break;
	case 0xC01E0506:
		value = L"STATUS_GRAPHICS_PVP_NO_DISPLAY_DEVICE_CORRESPONDS_TO_NAME";
		break;
	case 0xC01E0507:
		value = L"STATUS_GRAPHICS_PVP_DISPLAY_DEVICE_NOT_ATTACHED_TO_DESKTOP";
		break;
	case 0xC01E0508:
		value = L"STATUS_GRAPHICS_PVP_MIRRORING_DEVICES_NOT_SUPPORTED";
		break;
	case 0xC01E050A:
		value = L"STATUS_GRAPHICS_OPM_INVALID_POINTER";
		break;
	case 0xC01E050B:
		value = L"STATUS_GRAPHICS_OPM_INTERNAL_ERROR";
		break;
	case 0xC01E050C:
		value = L"STATUS_GRAPHICS_OPM_INVALID_HANDLE";
		break;
	case 0xC01E050D:
		value = L"STATUS_GRAPHICS_PVP_NO_MONITORS_CORRESPOND_TO_DISPLAY_DEVICE";
		break;
	case 0xC01E050E:
		value = L"STATUS_GRAPHICS_PVP_INVALID_CERTIFICATE_LENGTH";
		break;
	case 0xC01E050F:
		value = L"STATUS_GRAPHICS_OPM_SPANNING_MODE_ENABLED";
		break;
	case 0xC01E0510:
		value = L"STATUS_GRAPHICS_OPM_THEATER_MODE_ENABLED";
		break;
	case 0xC01E0511:
		value = L"STATUS_GRAPHICS_PVP_HFS_FAILED";
		break;
	case 0xC01E0512:
		value = L"STATUS_GRAPHICS_OPM_INVALID_SRM";
		break;
	case 0xC01E0513:
		value = L"STATUS_GRAPHICS_OPM_OUTPUT_DOES_NOT_SUPPORT_HDCP";
		break;
	case 0xC01E0514:
		value = L"STATUS_GRAPHICS_OPM_OUTPUT_DOES_NOT_SUPPORT_ACP";
		break;
	case 0xC01E0515:
		value = L"STATUS_GRAPHICS_OPM_OUTPUT_DOES_NOT_SUPPORT_CGMSA";
		break;
	case 0xC01E0516:
		value = L"STATUS_GRAPHICS_OPM_HDCP_SRM_NEVER_SET";
		break;
	case 0xC01E0517:
		value = L"STATUS_GRAPHICS_OPM_RESOLUTION_TOO_HIGH";
		break;
	case 0xC01E0518:
		value = L"STATUS_GRAPHICS_OPM_ALL_HDCP_HARDWARE_ALREADY_IN_USE";
		break;
	case 0xC01E051A:
		value = L"STATUS_GRAPHICS_OPM_PROTECTED_OUTPUT_NO_LONGER_EXISTS";
		break;
	case 0xC01E051B:
		value = L"STATUS_GRAPHICS_OPM_SESSION_TYPE_CHANGE_IN_PROGRESS";
		break;
	case 0xC01E051C:
		value = L"STATUS_GRAPHICS_OPM_PROTECTED_OUTPUT_DOES_NOT_HAVE_COPP_SEMANTICS";
		break;
	case 0xC01E051D:
		value = L"STATUS_GRAPHICS_OPM_INVALID_INFORMATION_REQUEST";
		break;
	case 0xC01E051E:
		value = L"STATUS_GRAPHICS_OPM_DRIVER_INTERNAL_ERROR";
		break;
	case 0xC01E051F:
		value = L"STATUS_GRAPHICS_OPM_PROTECTED_OUTPUT_DOES_NOT_HAVE_OPM_SEMANTICS";
		break;
	case 0xC01E0520:
		value = L"STATUS_GRAPHICS_OPM_SIGNALING_NOT_SUPPORTED";
		break;
	case 0xC01E0521:
		value = L"STATUS_GRAPHICS_OPM_INVALID_CONFIGURATION_REQUEST";
		break;
	case 0xC01E0580:
		value = L"STATUS_GRAPHICS_I2C_NOT_SUPPORTED";
		break;
	case 0xC01E0581:
		value = L"STATUS_GRAPHICS_I2C_DEVICE_DOES_NOT_EXIST";
		break;
	case 0xC01E0582:
		value = L"STATUS_GRAPHICS_I2C_ERROR_TRANSMITTING_DATA";
		break;
	case 0xC01E0583:
		value = L"STATUS_GRAPHICS_I2C_ERROR_RECEIVING_DATA";
		break;
	case 0xC01E0584:
		value = L"STATUS_GRAPHICS_DDCCI_VCP_NOT_SUPPORTED";
		break;
	case 0xC01E0585:
		value = L"STATUS_GRAPHICS_DDCCI_INVALID_DATA";
		break;
	case 0xC01E0586:
		value = L"STATUS_GRAPHICS_DDCCI_MONITOR_RETURNED_INVALID_TIMING_STATUS_BYTE";
		break;
	case 0xC01E0587:
		value = L"STATUS_GRAPHICS_DDCCI_INVALID_CAPABILITIES_STRING";
		break;
	case 0xC01E0588:
		value = L"STATUS_GRAPHICS_MCA_INTERNAL_ERROR";
		break;
	case 0xC01E0589:
		value = L"STATUS_GRAPHICS_DDCCI_INVALID_MESSAGE_COMMAND";
		break;
	case 0xC01E058A:
		value = L"STATUS_GRAPHICS_DDCCI_INVALID_MESSAGE_LENGTH";
		break;
	case 0xC01E058B:
		value = L"STATUS_GRAPHICS_DDCCI_INVALID_MESSAGE_CHECKSUM";
		break;
	case 0xC01E058C:
		value = L"STATUS_GRAPHICS_INVALID_PHYSICAL_MONITOR_HANDLE";
		break;
	case 0xC01E058D:
		value = L"STATUS_GRAPHICS_MONITOR_NO_LONGER_EXISTS";
		break;
	case 0xC01E05E0:
		value = L"STATUS_GRAPHICS_ONLY_CONSOLE_SESSION_SUPPORTED";
		break;
	case 0xC01E05E1:
		value = L"STATUS_GRAPHICS_NO_DISPLAY_DEVICE_CORRESPONDS_TO_NAME";
		break;
	case 0xC01E05E2:
		value = L"STATUS_GRAPHICS_DISPLAY_DEVICE_NOT_ATTACHED_TO_DESKTOP";
		break;
	case 0xC01E05E3:
		value = L"STATUS_GRAPHICS_MIRRORING_DEVICES_NOT_SUPPORTED";
		break;
	case 0xC01E05E4:
		value = L"STATUS_GRAPHICS_INVALID_POINTER";
		break;
	case 0xC01E05E5:
		value = L"STATUS_GRAPHICS_NO_MONITORS_CORRESPOND_TO_DISPLAY_DEVICE";
		break;
	case 0xC01E05E6:
		value = L"STATUS_GRAPHICS_PARAMETER_ARRAY_TOO_SMALL";
		break;
	case 0xC01E05E7:
		value = L"STATUS_GRAPHICS_INTERNAL_ERROR";
		break;
	case 0xC01E05E8:
		value = L"STATUS_GRAPHICS_SESSION_TYPE_CHANGE_IN_PROGRESS";
		break;
	case 0xC0210000:
		value = L"STATUS_FVE_LOCKED_VOLUME";
		break;
	case 0xC0210001:
		value = L"STATUS_FVE_NOT_ENCRYPTED";
		break;
	case 0xC0210002:
		value = L"STATUS_FVE_BAD_INFORMATION";
		break;
	case 0xC0210003:
		value = L"STATUS_FVE_TOO_SMALL";
		break;
	case 0xC0210004:
		value = L"STATUS_FVE_FAILED_WRONG_FS";
		break;
	case 0xC0210005:
		value = L"STATUS_FVE_FAILED_BAD_FS";
		break;
	case 0xC0210006:
		value = L"STATUS_FVE_FS_NOT_EXTENDED";
		break;
	case 0xC0210007:
		value = L"STATUS_FVE_FS_MOUNTED";
		break;
	case 0xC0210008:
		value = L"STATUS_FVE_NO_LICENSE";
		break;
	case 0xC0210009:
		value = L"STATUS_FVE_ACTION_NOT_ALLOWED";
		break;
	case 0xC021000A:
		value = L"STATUS_FVE_BAD_DATA";
		break;
	case 0xC021000B:
		value = L"STATUS_FVE_VOLUME_NOT_BOUND";
		break;
	case 0xC021000C:
		value = L"STATUS_FVE_NOT_DATA_VOLUME";
		break;
	case 0xC021000D:
		value = L"STATUS_FVE_CONV_READ_ERROR";
		break;
	case 0xC021000E:
		value = L"STATUS_FVE_CONV_WRITE_ERROR";
		break;
	case 0xC021000F:
		value = L"STATUS_FVE_OVERLAPPED_UPDATE";
		break;
	case 0xC0210010:
		value = L"STATUS_FVE_FAILED_SECTOR_SIZE";
		break;
	case 0xC0210011:
		value = L"STATUS_FVE_FAILED_AUTHENTICATION";
		break;
	case 0xC0210012:
		value = L"STATUS_FVE_NOT_OS_VOLUME";
		break;
	case 0xC0210013:
		value = L"STATUS_FVE_KEYFILE_NOT_FOUND";
		break;
	case 0xC0210014:
		value = L"STATUS_FVE_KEYFILE_INVALID";
		break;
	case 0xC0210015:
		value = L"STATUS_FVE_KEYFILE_NO_VMK";
		break;
	case 0xC0210016:
		value = L"STATUS_FVE_TPM_DISABLED";
		break;
	case 0xC0210017:
		value = L"STATUS_FVE_TPM_SRK_AUTH_NOT_ZERO";
		break;
	case 0xC0210018:
		value = L"STATUS_FVE_TPM_INVALID_PCR";
		break;
	case 0xC0210019:
		value = L"STATUS_FVE_TPM_NO_VMK";
		break;
	case 0xC021001A:
		value = L"STATUS_FVE_PIN_INVALID";
		break;
	case 0xC021001B:
		value = L"STATUS_FVE_AUTH_INVALID_APPLICATION";
		break;
	case 0xC021001C:
		value = L"STATUS_FVE_AUTH_INVALID_CONFIG";
		break;
	case 0xC021001D:
		value = L"STATUS_FVE_DEBUGGER_ENABLED";
		break;
	case 0xC021001E:
		value = L"STATUS_FVE_DRY_RUN_FAILED";
		break;
	case 0xC021001F:
		value = L"STATUS_FVE_BAD_METADATA_POINTER";
		break;
	case 0xC0210020:
		value = L"STATUS_FVE_OLD_METADATA_COPY";
		break;
	case 0xC0210021:
		value = L"STATUS_FVE_REBOOT_REQUIRED";
		break;
	case 0xC0210022:
		value = L"STATUS_FVE_RAW_ACCESS";
		break;
	case 0xC0210023:
		value = L"STATUS_FVE_RAW_BLOCKED";
		break;
	case 0xC0210026:
		value = L"STATUS_FVE_NO_FEATURE_LICENSE";
		break;
	case 0xC0210027:
		value = L"STATUS_FVE_POLICY_USER_DISABLE_RDV_NOT_ALLOWED";
		break;
	case 0xC0210028:
		value = L"STATUS_FVE_CONV_RECOVERY_FAILED";
		break;
	case 0xC0210029:
		value = L"STATUS_FVE_VIRTUALIZED_SPACE_TOO_BIG";
		break;
	case 0xC0210030:
		value = L"STATUS_FVE_VOLUME_TOO_SMALL";
		break;
	case 0xC0220001:
		value = L"STATUS_FWP_CALLOUT_NOT_FOUND";
		break;
	case 0xC0220002:
		value = L"STATUS_FWP_CONDITION_NOT_FOUND";
		break;
	case 0xC0220003:
		value = L"STATUS_FWP_FILTER_NOT_FOUND";
		break;
	case 0xC0220004:
		value = L"STATUS_FWP_LAYER_NOT_FOUND";
		break;
	case 0xC0220005:
		value = L"STATUS_FWP_PROVIDER_NOT_FOUND";
		break;
	case 0xC0220006:
		value = L"STATUS_FWP_PROVIDER_CONTEXT_NOT_FOUND";
		break;
	case 0xC0220007:
		value = L"STATUS_FWP_SUBLAYER_NOT_FOUND";
		break;
	case 0xC0220008:
		value = L"STATUS_FWP_NOT_FOUND";
		break;
	case 0xC0220009:
		value = L"STATUS_FWP_ALREADY_EXISTS";
		break;
	case 0xC022000A:
		value = L"STATUS_FWP_IN_USE";
		break;
	case 0xC022000B:
		value = L"STATUS_FWP_DYNAMIC_SESSION_IN_PROGRESS";
		break;
	case 0xC022000C:
		value = L"STATUS_FWP_WRONG_SESSION";
		break;
	case 0xC022000D:
		value = L"STATUS_FWP_NO_TXN_IN_PROGRESS";
		break;
	case 0xC022000E:
		value = L"STATUS_FWP_TXN_IN_PROGRESS";
		break;
	case 0xC022000F:
		value = L"STATUS_FWP_TXN_ABORTED";
		break;
	case 0xC0220010:
		value = L"STATUS_FWP_SESSION_ABORTED";
		break;
	case 0xC0220011:
		value = L"STATUS_FWP_INCOMPATIBLE_TXN";
		break;
	case 0xC0220012:
		value = L"STATUS_FWP_TIMEOUT";
		break;
	case 0xC0220013:
		value = L"STATUS_FWP_NET_EVENTS_DISABLED";
		break;
	case 0xC0220014:
		value = L"STATUS_FWP_INCOMPATIBLE_LAYER";
		break;
	case 0xC0220015:
		value = L"STATUS_FWP_KM_CLIENTS_ONLY";
		break;
	case 0xC0220016:
		value = L"STATUS_FWP_LIFETIME_MISMATCH";
		break;
	case 0xC0220017:
		value = L"STATUS_FWP_BUILTIN_OBJECT";
		break;
	case 0xC0220018:
		value = L"STATUS_FWP_TOO_MANY_BOOTTIME_FILTERS or STATUS_FWP_TOO_MANY_CALLOUTS";
		break;
	case 0xC0220019:
		value = L"STATUS_FWP_NOTIFICATION_DROPPED";
		break;
	case 0xC022001A:
		value = L"STATUS_FWP_TRAFFIC_MISMATCH";
		break;
	case 0xC022001B:
		value = L"STATUS_FWP_INCOMPATIBLE_SA_STATE";
		break;
	case 0xC022001C:
		value = L"STATUS_FWP_NULL_POINTER";
		break;
	case 0xC022001D:
		value = L"STATUS_FWP_INVALID_ENUMERATOR";
		break;
	case 0xC022001E:
		value = L"STATUS_FWP_INVALID_FLAGS";
		break;
	case 0xC022001F:
		value = L"STATUS_FWP_INVALID_NET_MASK";
		break;
	case 0xC0220020:
		value = L"STATUS_FWP_INVALID_RANGE";
		break;
	case 0xC0220021:
		value = L"STATUS_FWP_INVALID_INTERVAL";
		break;
	case 0xC0220022:
		value = L"STATUS_FWP_ZERO_LENGTH_ARRAY";
		break;
	case 0xC0220023:
		value = L"STATUS_FWP_NULL_DISPLAY_NAME";
		break;
	case 0xC0220024:
		value = L"STATUS_FWP_INVALID_ACTION_TYPE";
		break;
	case 0xC0220025:
		value = L"STATUS_FWP_INVALID_WEIGHT";
		break;
	case 0xC0220026:
		value = L"STATUS_FWP_MATCH_TYPE_MISMATCH";
		break;
	case 0xC0220027:
		value = L"STATUS_FWP_TYPE_MISMATCH";
		break;
	case 0xC0220028:
		value = L"STATUS_FWP_OUT_OF_BOUNDS";
		break;
	case 0xC0220029:
		value = L"STATUS_FWP_RESERVED";
		break;
	case 0xC022002A:
		value = L"STATUS_FWP_DUPLICATE_CONDITION";
		break;
	case 0xC022002B:
		value = L"STATUS_FWP_DUPLICATE_KEYMOD";
		break;
	case 0xC022002C:
		value = L"STATUS_FWP_ACTION_INCOMPATIBLE_WITH_LAYER";
		break;
	case 0xC022002D:
		value = L"STATUS_FWP_ACTION_INCOMPATIBLE_WITH_SUBLAYER";
		break;
	case 0xC022002E:
		value = L"STATUS_FWP_CONTEXT_INCOMPATIBLE_WITH_LAYER";
		break;
	case 0xC022002F:
		value = L"STATUS_FWP_CONTEXT_INCOMPATIBLE_WITH_CALLOUT";
		break;
	case 0xC0220030:
		value = L"STATUS_FWP_INCOMPATIBLE_AUTH_METHOD";
		break;
	case 0xC0220031:
		value = L"STATUS_FWP_INCOMPATIBLE_DH_GROUP";
		break;
	case 0xC0220032:
		value = L"STATUS_FWP_EM_NOT_SUPPORTED";
		break;
	case 0xC0220033:
		value = L"STATUS_FWP_NEVER_MATCH";
		break;
	case 0xC0220034:
		value = L"STATUS_FWP_PROVIDER_CONTEXT_MISMATCH";
		break;
	case 0xC0220035:
		value = L"STATUS_FWP_INVALID_PARAMETER";
		break;
	case 0xC0220036:
		value = L"STATUS_FWP_TOO_MANY_SUBLAYERS";
		break;
	case 0xC0220037:
		value = L"STATUS_FWP_CALLOUT_NOTIFICATION_FAILED";
		break;
	case 0xC0220038:
		value = L"STATUS_FWP_INCOMPATIBLE_AUTH_CONFIG";
		break;
	case 0xC0220039:
		value = L"STATUS_FWP_INCOMPATIBLE_CIPHER_CONFIG";
		break;
	case 0xC022003C:
		value = L"STATUS_FWP_DUPLICATE_AUTH_METHOD";
		break;
	case 0xC0220100:
		value = L"STATUS_FWP_TCPIP_NOT_READY";
		break;
	case 0xC0220101:
		value = L"STATUS_FWP_INJECT_HANDLE_CLOSING";
		break;
	case 0xC0220102:
		value = L"STATUS_FWP_INJECT_HANDLE_STALE";
		break;
	case 0xC0220103:
		value = L"STATUS_FWP_CANNOT_PEND";
		break;
	case 0xC0230002:
		value = L"STATUS_NDIS_CLOSING";
		break;
	case 0xC0230004:
		value = L"STATUS_NDIS_BAD_VERSION";
		break;
	case 0xC0230005:
		value = L"STATUS_NDIS_BAD_CHARACTERISTICS";
		break;
	case 0xC0230006:
		value = L"STATUS_NDIS_ADAPTER_NOT_FOUND";
		break;
	case 0xC0230007:
		value = L"STATUS_NDIS_OPEN_FAILED";
		break;
	case 0xC0230008:
		value = L"STATUS_NDIS_DEVICE_FAILED";
		break;
	case 0xC0230009:
		value = L"STATUS_NDIS_MULTICAST_FULL";
		break;
	case 0xC023000A:
		value = L"STATUS_NDIS_MULTICAST_EXISTS";
		break;
	case 0xC023000B:
		value = L"STATUS_NDIS_MULTICAST_NOT_FOUND";
		break;
	case 0xC023000C:
		value = L"STATUS_NDIS_REQUEST_ABORTED";
		break;
	case 0xC023000D:
		value = L"STATUS_NDIS_RESET_IN_PROGRESS";
		break;
	case 0xC023000F:
		value = L"STATUS_NDIS_INVALID_PACKET";
		break;
	case 0xC0230010:
		value = L"STATUS_NDIS_INVALID_DEVICE_REQUEST";
		break;
	case 0xC0230011:
		value = L"STATUS_NDIS_ADAPTER_NOT_READY";
		break;
	case 0xC0230014:
		value = L"STATUS_NDIS_INVALID_LENGTH";
		break;
	case 0xC0230015:
		value = L"STATUS_NDIS_INVALID_DATA";
		break;
	case 0xC0230016:
		value = L"STATUS_NDIS_BUFFER_TOO_SHORT";
		break;
	case 0xC0230017:
		value = L"STATUS_NDIS_INVALID_OID";
		break;
	case 0xC0230018:
		value = L"STATUS_NDIS_ADAPTER_REMOVED";
		break;
	case 0xC0230019:
		value = L"STATUS_NDIS_UNSUPPORTED_MEDIA";
		break;
	case 0xC023001A:
		value = L"STATUS_NDIS_GROUP_ADDRESS_IN_USE";
		break;
	case 0xC023001B:
		value = L"STATUS_NDIS_FILE_NOT_FOUND";
		break;
	case 0xC023001C:
		value = L"STATUS_NDIS_ERROR_READING_FILE";
		break;
	case 0xC023001D:
		value = L"STATUS_NDIS_ALREADY_MAPPED";
		break;
	case 0xC023001E:
		value = L"STATUS_NDIS_RESOURCE_CONFLICT";
		break;
	case 0xC023001F:
		value = L"STATUS_NDIS_MEDIA_DISCONNECTED";
		break;
	case 0xC0230022:
		value = L"STATUS_NDIS_INVALID_ADDRESS";
		break;
	case 0xC023002A:
		value = L"STATUS_NDIS_PAUSED";
		break;
	case 0xC023002B:
		value = L"STATUS_NDIS_INTERFACE_NOT_FOUND";
		break;
	case 0xC023002C:
		value = L"STATUS_NDIS_UNSUPPORTED_REVISION";
		break;
	case 0xC023002D:
		value = L"STATUS_NDIS_INVALID_PORT";
		break;
	case 0xC023002E:
		value = L"STATUS_NDIS_INVALID_PORT_STATE";
		break;
	case 0xC023002F:
		value = L"STATUS_NDIS_LOW_POWER_STATE";
		break;
	case 0xC02300BB:
		value = L"STATUS_NDIS_NOT_SUPPORTED";
		break;
	case 0xC023100F:
		value = L"STATUS_NDIS_OFFLOAD_POLICY";
		break;
	case 0xC0231012:
		value = L"STATUS_NDIS_OFFLOAD_CONNECTION_REJECTED";
		break;
	case 0xC0231013:
		value = L"STATUS_NDIS_OFFLOAD_PATH_REJECTED";
		break;
	case 0xC0232000:
		value = L"STATUS_NDIS_DOT11_AUTO_CONFIG_ENABLED";
		break;
	case 0xC0232001:
		value = L"STATUS_NDIS_DOT11_MEDIA_IN_USE";
		break;
	case 0xC0232002:
		value = L"STATUS_NDIS_DOT11_POWER_STATE_INVALID";
		break;
	case 0xC0232003:
		value = L"STATUS_NDIS_PM_WOL_PATTERN_LIST_FULL";
		break;
	case 0xC0232004:
		value = L"STATUS_NDIS_PM_PROTOCOL_OFFLOAD_LIST_FULL";
		break;
	case 0xC0360001:
		value = L"STATUS_IPSEC_BAD_SPI";
		break;
	case 0xC0360002:
		value = L"STATUS_IPSEC_SA_LIFETIME_EXPIRED";
		break;
	case 0xC0360003:
		value = L"STATUS_IPSEC_WRONG_SA";
		break;
	case 0xC0360004:
		value = L"STATUS_IPSEC_REPLAY_CHECK_FAILED";
		break;
	case 0xC0360005:
		value = L"STATUS_IPSEC_INVALID_PACKET";
		break;
	case 0xC0360006:
		value = L"STATUS_IPSEC_INTEGRITY_CHECK_FAILED";
		break;
	case 0xC0360007:
		value = L"STATUS_IPSEC_CLEAR_TEXT_DROP";
		break;
	case 0xC0360008:
		value = L"STATUS_IPSEC_AUTH_FIREWALL_DROP";
		break;
	case 0xC0360009:
		value = L"STATUS_IPSEC_THROTTLE_DROP";
		break;
	case 0xC0368000:
		value = L"STATUS_IPSEC_DOSP_BLOCK";
		break;
	case 0xC0368001:
		value = L"STATUS_IPSEC_DOSP_RECEIVED_MULTICAST";
		break;
	case 0xC0368002:
		value = L"STATUS_IPSEC_DOSP_INVALID_PACKET";
		break;
	case 0xC0368003:
		value = L"STATUS_IPSEC_DOSP_STATE_LOOKUP_FAILED";
		break;
	case 0xC0368004:
		value = L"STATUS_IPSEC_DOSP_MAX_ENTRIES";
		break;
	case 0xC0368005:
		value = L"STATUS_IPSEC_DOSP_KEYMOD_NOT_ALLOWED";
		break;
	case 0xC0368006:
		value = L"STATUS_IPSEC_DOSP_MAX_PER_IP_RATELIMIT_QUEUES";
		break;
	case 0xC038005B:
		value = L"STATUS_VOLMGR_MIRROR_NOT_SUPPORTED";
		break;
	case 0xC038005C:
		value = L"STATUS_VOLMGR_RAID5_NOT_SUPPORTED";
		break;
	case 0xC03A0014:
		value = L"STATUS_VIRTDISK_PROVIDER_NOT_FOUND";
		break;
	case 0xC03A0015:
		value = L"STATUS_VIRTDISK_NOT_VIRTUAL_DISK";
		break;
	case 0xC03A0016:
		value = L"STATUS_VHD_PARENT_VHD_ACCESS_DENIED";
		break;
	case 0xC03A0017:
		value = L"STATUS_VHD_CHILD_PARENT_SIZE_MISMATCH";
		break;
	case 0xC03A0018:
		value = L"STATUS_VHD_DIFFERENCING_CHAIN_CYCLE_DETECTED";
		break;
	case 0xC03A0019:
		value = L"STATUS_VHD_DIFFERENCING_CHAIN_ERROR_IN_PARENT";
		break;
	default:
		value = L"UNKNOWN";
}
