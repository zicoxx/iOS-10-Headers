//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

@interface SBOrientationLockManager : NSObject
{
    int _userLockedOrientation;
    int _previousLockedOrientation;
    struct __CFRunLoopObserver *_runLoopObserver;
    NSMutableSet *_lockOverrideReasons;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_handler_runLoopObserverDispose;
- (void)_setupRunLoopObserverIfNecessaryForOrientation:(int)arg1 andInitialLockState:(BOOL)arg2;
- (void)_updateLockStateWithOrientation:(int)arg1 forceUpdateHID:(BOOL)arg2 changes:(CDUnknownBlockType)arg3;
- (void)_updateLockStateWithChanges:(CDUnknownBlockType)arg1;
- (void)updateLockOverrideForCurrentDeviceOrientation;
- (BOOL)lockOverrideEnabled;
- (void)enableLockOverrideForReason:(id)arg1 forceOrientation:(int)arg2;
- (void)enableLockOverrideForReason:(id)arg1 suggestOrientation:(int)arg2;
- (void)setLockOverrideEnabled:(BOOL)arg1 forReason:(id)arg2;
- (void)_removeLockOverrideReason:(id)arg1;
- (void)_addLockOverrideReason:(id)arg1 orientation:(int)arg2 force:(BOOL)arg3;
- (int)userLockOrientation;
- (int)effectiveLockedOrientation;
- (BOOL)isUserLocked;
- (BOOL)isEffectivelyLocked;
- (void)unlock;
- (void)lock:(int)arg1;
- (void)lock;
- (void)dealloc;
- (id)init;
- (void)restoreStateFromPrefs;

@end
