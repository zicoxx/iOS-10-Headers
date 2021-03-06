//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGAffineTransform {
    float a;
    float b;
    float c;
    float d;
    float tx;
    float ty;
};

struct CGPoint {
    float x;
    float y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    float width;
    float height;
};

struct FBSceneLayer {
    Class _field1;
};

struct NSDictionary {
    Class _field1;
};

struct NSMutableSet {
    Class _field1;
};

struct NSNumber {
    Class _field1;
};

struct NSSet {
    Class _field1;
};

struct NSString {
    Class _field1;
};

struct SBIconCoordinate {
    int row;
    int col;
};

struct SBNormalizedTransitionInterval {
    float start;
    float duration;
};

struct SBWindowLevelRange_struct {
    float start;
    float end;
};

struct UIEdgeInsets {
    float top;
    float left;
    float bottom;
    float right;
};

struct _NSRange {
    unsigned int location;
    unsigned int length;
};

struct _opaque_pthread_t {
    long _field1;
    struct __darwin_pthread_handler_rec *_field2;
    char _field3[4088];
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    float _field3;
} CDStruct_dab69fe5;

typedef struct {
    unsigned long _field1;
    id *_field2;
    unsigned long *_field3;
    unsigned long _field4[5];
} CDStruct_11f37819;

typedef struct {
    char itemIsEnabled[32];
    char timeString[64];
    int gsmSignalStrengthRaw;
    int gsmSignalStrengthBars;
    char serviceString[100];
    char serviceCrossfadeString[100];
    char serviceImages[2][100];
    char operatorDirectory[1024];
    unsigned int serviceContentType;
    int wifiSignalStrengthRaw;
    int wifiSignalStrengthBars;
    unsigned int dataNetworkType;
    int batteryCapacity;
    unsigned int batteryState;
    char batteryDetailString[150];
    int bluetoothBatteryCapacity;
    int thermalColor;
    unsigned int thermalSunlightMode:1;
    unsigned int slowActivity:1;
    unsigned int syncActivity:1;
    char activityDisplayId[256];
    unsigned int bluetoothConnected:1;
    unsigned int displayRawGSMSignal:1;
    unsigned int displayRawWifiSignal:1;
    unsigned int locationIconType:1;
    unsigned int quietModeInactive:1;
    unsigned int tetheringConnectionCount;
    unsigned int batterySaverModeActive:1;
    unsigned int deviceIsRTL:1;
    unsigned int lock:1;
    char breadcrumbTitle[256];
    char breadcrumbSecondaryTitle[256];
    char personName[100];
    char returnToAppBundleIdentifier[100];
    unsigned int electronicTollCollectionAvailable:1;
    unsigned int wifiLinkWarning:1;
} CDStruct_f23da3d9;

typedef struct {
    unsigned int _field1[8];
} CDStruct_6ad76789;

typedef struct {
    unsigned int willActivate:1;
    unsigned int didActivate:1;
    unsigned int willDeactivate:1;
    unsigned int didDeactivate:1;
    unsigned int didChangeTop:1;
    unsigned int topBgStyleChange:1;
    unsigned int topStatusBarVisibile:1;
    unsigned int topOrientationEnable:1;
    unsigned int didCreateWindow:1;
    unsigned int willTearDownWindow:1;
    unsigned int didTearDownWindow:1;
    unsigned int didRemoveFromWindow:1;
} CDStruct_0ac80af1;

typedef struct {
    char _field1;
    char _field2;
    char _field3;
    char _field4;
    char _field5;
    float _field6;
    int _field7;
} CDStruct_3421d26a;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    char _field4;
    char _field5;
    int _field6;
    int _field7;
} CDStruct_c6f4f5e3;

typedef struct {
    float value;
    char inclusive;
} CDStruct_95053535;

typedef struct {
    float progress;
    float cornerRadiusProgress;
    float initialItemTranslation;
    float dimming;
} CDStruct_3ee5880e;

typedef struct {
    int startStyle;
    int endStyle;
    float transitionFraction;
} CDStruct_04b3617e;

typedef struct {
    int _field1;
    int _field2;
} CDStruct_1ef3fb1f;

typedef struct {
    char valid;
    CDStruct_04b3617e styleTransitionState;
} CDStruct_f206ec99;

typedef struct {
    int _field1;
    struct CGPoint _field2;
    struct CGPoint _field3;
} CDStruct_4c17c720;

typedef struct {
    struct {
        unsigned int _field1;
        unsigned int _field2;
        unsigned int _field3;
        unsigned int _field4;
        unsigned int _field5;
        int _field6;
    } _field1;
    struct {
        unsigned int _field1;
    } _field2;
} CDStruct_a54b61c1;

typedef struct {
    CDStruct_95053535 start;
    CDStruct_95053535 end;
} CDStruct_33193670;

typedef struct {
    float value;
    CDStruct_33193670 interval;
    int mode;
} CDStruct_6b1f2d91;

