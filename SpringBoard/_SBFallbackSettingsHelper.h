//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBVolumePressBandit.h"

@class NSString, NSTimer;

@interface _SBFallbackSettingsHelper : NSObject <SBVolumePressBandit>
{
    NSTimer *_clearTimer;
    unsigned int _pressesWithinInterval;
}

+ (BOOL)useFallbackSettingsHelperOnThisDevice;
- (void).cxx_destruct;
- (void)reset;
- (void)handleTimerFired:(id)arg1;
- (BOOL)shouldUseFallbackAction;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
