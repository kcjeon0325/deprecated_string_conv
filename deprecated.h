

// #include "EnumToString.h"

namespace Test
{
namespace Test2
{
BEGIN_ENUM( Status )
{
    ENUM_ELEMENT2( OK, 0 ),
                   ENUM_ELEMENT( INVALID_ATTRIBUTE_ID ),
                   ENUM_ELEMENT( INCORRECT_TYPE_ID_FOR_THIS_ATTRIBUTE_ID ),
                   ENUM_ELEMENT( UNABLE_TO_SET_SETTING_AT_THIS_TIME ),
                   ENUM_ELEMENT( UNABLE_TO_SET_SETTING_VALUE_OUT_OF_RANGE ),
                   ENUM_ELEMENT( UNCONFIGURED_DEVICE ),
                   ENUM_ELEMENT( SYNC_OK ),
                   ENUM_ELEMENT( ASYNC ),
                   ENUM_ELEMENT( UNABLE_TO_GET_PROPERTY_AT_THIS_TIME ),
                   ENUM_ELEMENT( UNABLE_TO_GET_SETTING_AT_THIS_TIME ),
                   ENUM_ELEMENT( NOT_SUPPORTED_BY_THIS_DEVICE_MODEL )
}
END_ENUM( Status )
}
}
