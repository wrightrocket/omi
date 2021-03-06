/*
**==============================================================================
**
** DO NOT EDIT THIS FILE!!! IT WAS AUTOMATICALLY GENERATED
**
**==============================================================================
*/

#include "wstags.h"

typedef struct _HashStrTuple
{
    unsigned char code;
    char ch;
    unsigned short tag;
    const HASHSTR_CHAR* str;
}
HashStrTuple;

static const HashStrTuple _tuples[] =
{
    {
        0x00, /* code */
        'a', /* ch */
        WSMANTAG_MESSAGE_ID,
        HASHSTR_T("MessageID")
    },
    {
        0x02, /* code */
        0, /* ch */
        WSMANTAG_ENUM_MODE_OBJECT_AND_EPR,
        HASHSTR_T("EnumerateObjectAndEPR")
    },
    {
        0x04, /* code */
        0, /* ch */
        WSMAN_OPTION_MSFTWINRM_USE_PRECISE_ARRAYS,
        HASHSTR_T("msftwinrm:UsePreciseArrays")
    },
    {
        0x0F, /* code */
        0, /* ch */
        WSMAN_OPTION_WMI_INCLUDE_CLASS_ORIGIN,
        HASHSTR_T("wmi:IncludeClassOrigin")
    },
    {
        0x10, /* code */
        'w', /* ch */
        WSMANTAG_RESOURCE_URI,
        HASHSTR_T("ResourceURI")
    },
    {
        0x11, /* code */
        0, /* ch */
        WSMAN_OPTION_WMI_INCLUDE_QUALIFIERS,
        HASHSTR_T("wmi:IncludeQualifiers")
    },
    {
        0x11, /* code */
        0, /* ch */
        WSMAN_OPTION_WMI_INCLUDE_INHERITANCE_HIERARCHY,
        HASHSTR_T("wmi:IncludeInheritanceHierarchy")
    },
    {
        0x18, /* code */
        0, /* ch */
        WSMAN_OPTION_WMI_INCLUDE_INHERITED_ELEMENTS,
        HASHSTR_T("wmi:IncludeInheritedElements")
    },
    {
        0x1B, /* code */
        0, /* ch */
        WSMANTAG_ENUM_MODE_EPR,
        HASHSTR_T("EnumerateEPR")
    },
    {
        0x21, /* code */
        'w', /* ch */
        WSMANTAG_BOOKMARK,
        HASHSTR_T("Bookmark")
    },
    {
        0x21, /* code */
        0, /* ch */
        WSMANTAG_ACTION_EVENTING,
        HASHSTR_T("http://schemas.xmlsoap.org/ws/2004/08/eventing")
    },
    {
        0x22, /* code */
        0, /* ch */
        WSMAN_OPTION_INCLUDE_INHERITED_ELEMENTS,
        HASHSTR_T("IncludeInheritedElements")
    },
    {
        0x23, /* code */
        0, /* ch */
        WSMANTAG_ENUM_POLYMORPHISM_MODE_INCLUDE_PROPS,
        HASHSTR_T("IncludeSubClassProperties")
    },
    {
        0x23, /* code */
        0, /* ch */
        WSMANTAG_ACTION_GETSTATUS,
        HASHSTR_T("http://schemas.xmlsoap.org/ws/2004/08/eventing/GetStatus")
    },
    {
        0x23, /* code */
        'n', /* ch */
        WSMANTAG_PULL_ENUMERATION_CONTEXT,
        HASHSTR_T("EnumerationContext")
    },
    {
        0x23, /* code */
        0, /* ch */
        WSMANTAG_ACTION_SHELL_CONNECT,
        HASHSTR_T("http://schemas.microsoft.com/wbem/wsman/1/windows/shell/Connect")
    },
    {
        0x25, /* code */
        'b', /* ch */
        WSMANTAG_ENUM_POLYMORPHISM_MODE,
        HASHSTR_T("PolymorphismMode")
    },
    {
        0x27, /* code */
        'w', /* ch */
        WSMANTAG_OPTION,
        HASHSTR_T("Option")
    },
    {
        0x27, /* code */
        'w', /* ch */
        WSMANTAG_MAX_ENVELOPE_SIZE,
        HASHSTR_T("MaxEnvelopeSize")
    },
    {
        0x28, /* code */
        0, /* ch */
        WSMANTAG_ACTION_FAULT_EVENTING,
        HASHSTR_T("http://schemas.xmlsoap.org/ws/2004/08/eventing/fault")
    },
    {
        0x28, /* code */
        0, /* ch */
        WSMANTAG_ACTION_FAULT_TRANSFER,
        HASHSTR_T("http://schemas.xmlsoap.org/ws/2004/08/transfer/fault")
    },
    {
        0x29, /* code */
        'a', /* ch */
        WSMANTAG_ACTION,
        HASHSTR_T("Action")
    },
    {
        0x29, /* code */
        'n', /* ch */
        WSMANTAG_ENUM_ENUMERATE,
        HASHSTR_T("Enumerate")
    },
    {
        0x29, /* code */
        'w', /* ch */
        WSMANTAG_SELECTOR,
        HASHSTR_T("Selector")
    },
    {
        0x29, /* code */
        'h', /* ch */
        WSMANTAG_COMPRESSION_TYPE,
        HASHSTR_T("CompressionType")
    },
    {
        0x2A, /* code */
        0, /* ch */
        WSMAN_DELIVERY_MODE_EVENTS,
        HASHSTR_T("http://schemas.dmtf.org/wbem/wsman/1/wsman/Events")
    },
    {
        0x2A, /* code */
        0, /* ch */
        WSMANTAG_ACTION_FAULT_ADDRESSING,
        HASHSTR_T("http://schemas.xmlsoap.org/ws/2004/08/addressing/fault")
    },
    {
        0x2B, /* code */
        0, /* ch */
        WSMAN_OPTION_INCLUDE_QUALIFIERS,
        HASHSTR_T("IncludeQualifiers")
    },
    {
        0x2B, /* code */
        0, /* ch */
        WSMAN_OPTION_INCLUDE_INHERITANCE_HIERARCHY,
        HASHSTR_T("IncludeInheritanceHierarchy")
    },
    {
        0x2B, /* code */
        0, /* ch */
        WSMAN_DELIVERY_MODE_PULL,
        HASHSTR_T("http://schemas.dmtf.org/wbem/wsman/1/wsman/Pull")
    },
    {
        0x2B, /* code */
        0, /* ch */
        WSMANTAG_ACTION_RENEW,
        HASHSTR_T("http://schemas.xmlsoap.org/ws/2004/08/eventing/Renew")
    },
    {
        0x2B, /* code */
        'w', /* ch */
        WSMANTAG_SUBSCRIBE_CONTENTENCODING,
        HASHSTR_T("ContentEncoding")
    },
    {
        0x2B, /* code */
        'w', /* ch */
        WSMANTAG_OPERATION_TIMEOUT,
        HASHSTR_T("OperationTimeout")
    },
    {
        0x2B, /* code */
        'p', /* ch */
        WSMANTAG_DATA_LOCALE,
        HASHSTR_T("DataLocale")
    },
    {
        0x2B, /* code */
        0, /* ch */
        WSMANTAG_ACTION_FAULT_ENUMERATION,
        HASHSTR_T("http://schemas.xmlsoap.org/ws/2004/08/enumeration/fault")
    },
    {
        0x2C, /* code */
        'w', /* ch */
        WSMANTAG_SELECTOR_SET,
        HASHSTR_T("SelectorSet")
    },
    {
        0x2C, /* code */
        0, /* ch */
        WSMANTAG_ACTION_FAULT_WSMAN,
        HASHSTR_T("http://schemas.dmtf.org/wbem/wsman/1/wsman/fault")
    },
    {
        0x2D, /* code */
        'w', /* ch */
        WSMANTAG_SEND_BOOKMARKS,
        HASHSTR_T("SendBookmarks")
    },
    {
        0x2E, /* code */
        0, /* ch */
        WSMANTAG_ACTION_GET,
        HASHSTR_T("http://schemas.xmlsoap.org/ws/2004/09/transfer/Get")
    },
    {
        0x2E, /* code */
        0, /* ch */
        WSMANTAG_ACTION_PUT,
        HASHSTR_T("http://schemas.xmlsoap.org/ws/2004/09/transfer/Put")
    },
    {
        0x2F, /* code */
        0, /* ch */
        WSMANTAG_ENUM_POLYMORPHISM_MODE_NONE,
        HASHSTR_T("None")
    },
    {
        0x2F, /* code */
        0, /* ch */
        WSMANTAG_ENUM_POLYMORPHISM_MODE_EXCLUDE_PROPS,
        HASHSTR_T("ExcludeSubClassProperties")
    },
    {
        0x2F, /* code */
        'n', /* ch */
        WSMANTAG_MAX_TIME,
        HASHSTR_T("MaxTime")
    },
    {
        0x2F, /* code */
        'w', /* ch */
        WSMANTAG_ENUM_MODE,
        HASHSTR_T("EnumerationMode")
    },
    {
        0x2F, /* code */
        'w', /* ch */
        WSMANTAG_LOCALE,
        HASHSTR_T("Locale")
    },
    {
        0x30, /* code */
        'n', /* ch */
        WSMANTAG_ENUM_RELEASE,
        HASHSTR_T("Release")
    },
    {
        0x30, /* code */
        0, /* ch */
        WSMANTAG_ACTION_SHELL_SEND,
        HASHSTR_T("http://schemas.microsoft.com/wbem/wsman/1/windows/shell/Send")
    },
    {
        0x30, /* code */
        0, /* ch */
        WSMANTAG_ACTION_CREATE_RESPONSE,
        HASHSTR_T("http://schemas.xmlsoap.org/ws/2004/09/transfer/CreateResponse")
    },
    {
        0x30, /* code */
        0, /* ch */
        WSMANTAG_ACTION_DELETE_RESPONSE,
        HASHSTR_T("http://schemas.xmlsoap.org/ws/2004/09/transfer/DeleteResponse")
    },
    {
        0x31, /* code */
        'e', /* ch */
        WSMANTAG_EXPIRES,
        HASHSTR_T("Expires")
    },
    {
        0x31, /* code */
        'w', /* ch */
        WSMANTAG_SUBSCRIBE_HEARTBEATS,
        HASHSTR_T("Heartbeats")
    },
    {
        0x31, /* code */
        'e', /* ch */
        WSMANTAG_SUBSCRIBE_IDENTIFIER,
        HASHSTR_T("Identifier")
    },
    {
        0x32, /* code */
        0, /* ch */
        WSMANTAG_ACTION_PULL,
        HASHSTR_T("http://schemas.xmlsoap.org/ws/2004/09/enumeration/Pull")
    },
    {
        0x32, /* code */
        'w', /* ch */
        WSMANTAG_ENUM_FILTER,
        HASHSTR_T("Filter")
    },
    {
        0x32, /* code */
        'w', /* ch */
        WSMANTAG_OPTION_SET,
        HASHSTR_T("OptionSet")
    },
    {
        0x32, /* code */
        'w', /* ch */
        WSMANTAG_ENUM_OPTIMIZE_ENUMERATION,
        HASHSTR_T("OptimizeEnumeration")
    },
    {
        0x32, /* code */
        0, /* ch */
        WSMANTAG_ACTION_SHELL_RECEIVE,
        HASHSTR_T("http://schemas.microsoft.com/wbem/wsman/1/windows/shell/Receive")
    },
    {
        0x33, /* code */
        'n', /* ch */
        WSMANTAG_MAX_CHARACTERS,
        HASHSTR_T("MaxCharacters")
    },
    {
        0x33, /* code */
        0, /* ch */
        WSMANTAG_ACTION_SHELL_COMMAND,
        HASHSTR_T("http://schemas.microsoft.com/wbem/wsman/1/windows/shell/Command")
    },
    {
        0x33, /* code */
        0, /* ch */
        WSMANTAG_ACTION_PULL_RESPONSE,
        HASHSTR_T("http://schemas.xmlsoap.org/ws/2004/09/enumeration/PullResponse")
    },
    {
        0x34, /* code */
        0, /* ch */
        WSMANTAG_ACTION_RELEASE,
        HASHSTR_T("http://schemas.xmlsoap.org/ws/2004/09/enumeration/Release")
    },
    {
        0x34, /* code */
        'a', /* ch */
        WSMANTAG_RELATES_TO,
        HASHSTR_T("RelatesTo")
    },
    {
        0x35, /* code */
        0, /* ch */
        WSMAN_OPTION_INCLUDE_CLASS_ORIGIN,
        HASHSTR_T("IncludeClassOrigin")
    },
    {
        0x35, /* code */
        0, /* ch */
        WSMAN_DELIVERY_MODE_PUSH_WITH_ACK,
        HASHSTR_T("http://schemas.dmtf.org/wbem/wsman/1/wsman/PushWithAck")
    },
    {
        0x35, /* code */
        0, /* ch */
        WSMANTAG_ACTION_SUBSCRIBE,
        HASHSTR_T("http://schemas.xmlsoap.org/ws/2004/08/eventing/Subscribe")
    },
    {
        0x35, /* code */
        'a', /* ch */
        WSMANTAG_ADDRESS,
        HASHSTR_T("Address")
    },
    {
        0x35, /* code */
        'e', /* ch */
        WSMANTAG_SUBSCRIBE_DELIVER,
        HASHSTR_T("Delivery")
    },
    {
        0x35, /* code */
        'w', /* ch */
        WSMANTAG_SUBSCRIBE_CONNECTION_RETRY,
        HASHSTR_T("ConnectionRetry")
    },
    {
        0x35, /* code */
        'n', /* ch */
        WSMANTAG_PULL_MAX_ELEMENTS,
        HASHSTR_T("MaxElements")
    },
    {
        0x35, /* code */
        'w', /* ch */
        WSMANTAG_ENUM_MAX_ELEMENTS,
        HASHSTR_T("MaxElements")
    },
    {
        0x35, /* code */
        'w', /* ch */
        WSMANTAG_CONNECTION_RETRY,
        HASHSTR_T("ConnectionRetry")
    },
    {
        0x36, /* code */
        0, /* ch */
        WSMANTAG_ACTION_ENUMERATE,
        HASHSTR_T("http://schemas.xmlsoap.org/ws/2004/09/enumeration/Enumerate")
    },
    {
        0x37, /* code */
        0, /* ch */
        WSMANTAG_ENUM_DIALIECT,
        HASHSTR_T("Dialect")
    },
    {
        0x37, /* code */
        0, /* ch */
        WSMANTAG_ACTION_UNSUBSCRIBE,
        HASHSTR_T("http://schemas.xmlsoap.org/ws/2004/08/eventing/Unsubscribe")
    },
    {
        0x37, /* code */
        0, /* ch */
        WSMANTAG_ACTION_GET_RESPONSE,
        HASHSTR_T("http://schemas.xmlsoap.org/ws/2004/09/transfer/GetResponse")
    },
    {
        0x37, /* code */
        0, /* ch */
        WSMANTAG_ACTION_PUT_RESPONSE,
        HASHSTR_T("http://schemas.xmlsoap.org/ws/2004/09/transfer/PutResponse")
    },
    {
        0x38, /* code */
        0, /* ch */
        WSMANTAG_ACTION_CREATE,
        HASHSTR_T("http://schemas.xmlsoap.org/ws/2004/09/transfer/Create")
    },
    {
        0x38, /* code */
        0, /* ch */
        WSMANTAG_ACTION_DELETE,
        HASHSTR_T("http://schemas.xmlsoap.org/ws/2004/09/transfer/Delete")
    },
    {
        0x38, /* code */
        'i', /* ch */
        WSMANTAG_IDENTIFY,
        HASHSTR_T("Identify")
    },
    {
        0x38, /* code */
        'n', /* ch */
        WSMANTAG_ENUM_PULL,
        HASHSTR_T("Pull")
    },
    {
        0x38, /* code */
        0, /* ch */
        WSMAN_RESOURCE_URI_SHELL,
        HASHSTR_T("http://schemas.microsoft.com/powershell/Microsoft.PowerShell")
    },
    {
        0x39, /* code */
        'a', /* ch */
        WSMANTAG_TO,
        HASHSTR_T("To")
    },
    {
        0x3A, /* code */
        'a', /* ch */
        WSMANTAG_REPLY_TO,
        HASHSTR_T("ReplyTo")
    },
    {
        0x3A, /* code */
        0, /* ch */
        WSMANTAG_ACTION_SHELL_SIGNAL,
        HASHSTR_T("http://schemas.microsoft.com/wbem/wsman/1/windows/shell/Signal")
    },
    {
        0x3C, /* code */
        's', /* ch */
        WSMANTAG_HEADER,
        HASHSTR_T("Header")
    },
    {
        0x3E, /* code */
        0, /* ch */
        WSMANTAG_ENUM_MODE_OBJECT,
        HASHSTR_T("EnumerateObject")
    },
    {
        0x3E, /* code */
        'p', /* ch */
        WSMANTAG_SESSION_ID,
        HASHSTR_T("SessionId")
    },
    {
        0x41, /* code */
        0, /* ch */
        WSMAN_DELIVERY_MODE_PUSH,
        HASHSTR_T("http://schemas.xmlsoap.org/ws/2004/08/eventing/DeliveryModes/Push")
    },
    {
        0x44, /* code */
        0, /* ch */
        WSMANTAG_ACTION_SHELL_RECONNECT_RESPONSE,
        HASHSTR_T("http://schemas.microsoft.com/wbem/wsman/1/windows/shell/ReconnectResponse")
    },
    {
        0x47, /* code */
        0, /* ch */
        WSMANTAG_ACTION_SHELL_DISCONNECT_RESPONSE,
        HASHSTR_T("http://schemas.microsoft.com/wbem/wsman/1/windows/shell/DisconnectResponse")
    },
    {
        0x49, /* code */
        0, /* ch */
        WSMANTAG_ACTION_SHELL_SEND_RESPONSE,
        HASHSTR_T("http://schemas.microsoft.com/wbem/wsman/1/windows/shell/SendResponse")
    },
    {
        0x4A, /* code */
        0, /* ch */
        WSMANTAG_ACTION_SHELL_COMMAND_RESPONSE,
        HASHSTR_T("http://schemas.microsoft.com/wbem/wsman/1/windows/shell/CommandResponse")
    },
    {
        0x4A, /* code */
        0, /* ch */
        WSMANTAG_ACTION_SHELL_RECEIVE_RESPONSE,
        HASHSTR_T("http://schemas.microsoft.com/wbem/wsman/1/windows/shell/ReceiveResponse")
    },
    {
        0x4A, /* code */
        0, /* ch */
        WSMANTAG_ACTION_SHELL_CONNECT_RESPONSE,
        HASHSTR_T("http://schemas.microsoft.com/wbem/wsman/1/windows/shell/ConnectResponse")
    },
    {
        0x4B, /* code */
        0, /* ch */
        WSMANTAG_ACTION_SHELL_SIGNAL_RESPONSE,
        HASHSTR_T("http://schemas.microsoft.com/wbem/wsman/1/windows/shell/SignalResponse")
    },
    {
        0x4E, /* code */
        0, /* ch */
        WSMANTAG_ACTION_ENUMERATE_RESPONSE,
        HASHSTR_T("http://schemas.xmlsoap.org/ws/2004/09/enumeration/EnumerateResponse")
    },
    {
        0x5D, /* code */
        0, /* ch */
        WSMANTAG_ACTION_SHELL_RECONNECT,
        HASHSTR_T("http://schemas.microsoft.com/wbem/wsman/1/windows/shell/Reconnect")
    },
    {
        0x5E, /* code */
        0, /* ch */
        WSMANTAG_ACTION_SHELL_DISCONNECT,
        HASHSTR_T("http://schemas.microsoft.com/wbem/wsman/1/windows/shell/Disconnect")
    },
    {
        0x76, /* code */
        0, /* ch */
        WSMAN_RESOURCE_URI_WS_CIM_SCHEMA,
        HASHSTR_T("http://schemas.dmtf.org/wbem/ws-cim/1/cim-schema/2/*")
    },
    {
        0x77, /* code */
        0, /* ch */
        WSMAN_RESOURCE_URI_CIM_XML_SCHEMA,
        HASHSTR_T("http://schemas.dmtf.org/wbem/cim-xml/2/cim-schema/2/*")
    },
    {
        0xFF, /* code */
    }
};

static const size_t _ntuples = sizeof(_tuples) / sizeof(_tuples[0]) - 1;

int HashStr(HASHSTR_CHAR c, const HASHSTR_CHAR* s, size_t n)
{

    size_t i;
    size_t j;
    unsigned char h = (unsigned char)s[0] ^ (unsigned char)s[n-1] ^ (unsigned char)n;

    for (i = 0; h > _tuples[i].code; i++)
        ;

    for (j = i; j < _ntuples && h == _tuples[j].code; j++)
    {
        if (c == _tuples[j].ch && HASHSTR_STRCMP(s, _tuples[j].str) == 0)
            return _tuples[j].tag;
    }

    /* Not found */
    return 0;
}
