//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBStatusBarStateProvider.h"

#import "UIStatusBarStateObserver.h"

@class NSCountedSet, NSString;

@interface SBMainStatusBarStateProvider : SBStatusBarStateProvider <UIStatusBarStateObserver>
{
    BOOL _overridePercent;
    BOOL _killActivity;
    char _itemIsDisabled[32];
    char _itemWasDisabled[32];
    NSCountedSet *_itemDisabledRequests[32];
    BOOL _timeEnabled;
    BOOL _timeCloaked;
    BOOL _allButBatteryCloaked;
    BOOL _telephonyAndBluetoothCloaked;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)statusBarStateProvider:(id)arg1 didPostStatusBarData:(const CDStruct_f23da3d9 *)arg2 withActions:(int)arg3;
- (void)_composePostDataFromAggregatorData:(CDStruct_f23da3d9 *)arg1;
- (BOOL)_shouldPostForVisitedItem:(int)arg1 withUpdates:(BOOL)arg2 toAggregatorData:(const CDStruct_f23da3d9 *)arg3;
- (void)setTelephonyAndBluetoothItemsCloaked:(BOOL)arg1;
- (void)setAllItemsExceptBatteryCloaked:(BOOL)arg1;
- (void)setTimeCloaked:(BOOL)arg1;
- (void)enableTime:(BOOL)arg1 crossfade:(BOOL)arg2 crossfadeDuration:(double)arg3;
- (void)enableTime:(BOOL)arg1;
- (void)updateTimeEnabled;
- (BOOL)isTimeEnabled;
- (void)_updateDisabledItems;
- (void)enableStatusBarItem:(int)arg1 requestor:(id)arg2;
- (void)disableStatusBarItem:(int)arg1 requestor:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

