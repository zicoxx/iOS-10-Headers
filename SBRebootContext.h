//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SBRebootContext : NSObject <NSCopying>
{
    NSString *_reason;
    BOOL _isDark;
    BOOL _fromOTASoftwareUpdate;
}

@property(nonatomic) BOOL fromOTASoftwareUpdate; // @synthesize fromOTASoftwareUpdate=_fromOTASoftwareUpdate;
@property(nonatomic, getter=isDark) BOOL dark; // @synthesize dark=_isDark;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithReason:(id)arg1;

@end

