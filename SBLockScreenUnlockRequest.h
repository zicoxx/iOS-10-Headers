//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class FBSProcessHandle, NSString;

@interface SBLockScreenUnlockRequest : NSObject <NSCopying>
{
    NSString *_name;
    int _source;
    int _intent;
    FBSProcessHandle *_process;
}

@property(retain, nonatomic) FBSProcessHandle *process; // @synthesize process=_process;
@property(nonatomic) int intent; // @synthesize intent=_intent;
@property(nonatomic) int source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
