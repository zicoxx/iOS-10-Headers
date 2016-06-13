//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "SBAssertionDelegate.h"

@class CPDistributedNotificationCenter, NSHashTable, NSMutableOrderedSet, NSMutableSet, NSString, SBAlertItemsObjectQueue;

@interface SBAlertItemsController : NSObject <SBAssertionDelegate, BSDescriptionProviding>
{
    SBAlertItemsObjectQueue *_alertItemsQueue;
    SBAlertItemsObjectQueue *_superModalItemsQueue;
    NSMutableOrderedSet *_alertItemPresentations;
    NSMutableOrderedSet *_superModalAlertItemPresentations;
    BOOL _inUILockedMode;
    NSMutableSet *_activePresenters;
    CPDistributedNotificationCenter *_notificationCenter;
    unsigned int _notificationClientCount;
    BOOL _systemShuttingDown;
    NSMutableSet *_forceAlertsToPendReasons;
    NSHashTable *_observers;
    NSMutableSet *_suppressionAssertions;
    BOOL _modernLockScreenEnabled;
    BOOL _isProcessingQueue;
    BOOL _delayProcessingQueue;
    id <SBAlertItemPresenter><SBLockScreenActionProvider> _lockScreenModalAlertItemPresenter;
    id <SBAlertItemPresenter> _lockScreenNotificationsAlertItemPresenter;
    id <SBAlertItemPresenter> _unlockedAlertItemPresenter;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <SBAlertItemPresenter> unlockedAlertItemPresenter; // @synthesize unlockedAlertItemPresenter=_unlockedAlertItemPresenter;
@property(retain, nonatomic) id <SBAlertItemPresenter> lockScreenNotificationsAlertItemPresenter; // @synthesize lockScreenNotificationsAlertItemPresenter=_lockScreenNotificationsAlertItemPresenter;
@property(retain, nonatomic) id <SBAlertItemPresenter><SBLockScreenActionProvider> lockScreenModalAlertItemPresenter; // @synthesize lockScreenModalAlertItemPresenter=_lockScreenModalAlertItemPresenter;
- (void).cxx_destruct;
- (void)assertionExpired:(id)arg1;
- (BOOL)captureSuppressionAssertionWithPort:(unsigned int)arg1 reason:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_notifyObservers:(CDUnknownBlockType)arg1;
- (void)_activeCallStateDidChange:(id)arg1;
- (void)_buddyDidExit;
- (void)_notificationClientEnded:(id)arg1;
- (void)_notificationClientStarted:(id)arg1;
- (void)noteSystemShuttingDown;
- (void)moveActiveUnlockedAlertsToPendingWithAnimation:(BOOL)arg1;
- (void)setForceAlertsToPend:(BOOL)arg1 forReason:(id)arg2;
- (void)_postAlertPresentedNotificationForType:(int)arg1 sender:(id)arg2 date:(id)arg3;
- (void)noteVolumeOrLockPressedOverLockedAlerts;
- (void)stopPendingAlertItemsForFullscreenAlert;
- (void)deactivateAlertItemsForFullscreenAlertActivationAndPendMiniAlerts:(BOOL)arg1;
- (BOOL)dontLockOverAlertItems;
- (BOOL)deactivateAlertForMenuClickOrSystemGestureWithAnimation:(BOOL)arg1;
- (BOOL)canDeactivateAlertForMenuClickOrSystemGesture;
- (id)visibleAlertItem;
- (BOOL)hasVisibleSuperModalAlert;
- (BOOL)hasVisibleAlert;
- (BOOL)hasLockScreenModalAlert;
- (BOOL)hasAlerts;
- (BOOL)hasAlertOfClass:(Class)arg1;
- (id)alertItemsOfClass:(Class)arg1;
- (BOOL)deactivateAlertItemsOfClass:(Class)arg1 reason:(int)arg2 animated:(BOOL)arg3;
- (BOOL)deactivateAlertItemsOfClass:(Class)arg1 reason:(int)arg2;
- (BOOL)deactivateAlertItemsOfClass:(Class)arg1;
- (void)_enumeratePresentationsWithType:(unsigned int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_presentationForAlertItem:(id)arg1 presenter:(id)arg2 fromPresentations:(id)arg3;
- (void)_removePresentationForAlertItem:(id)arg1 presenter:(id)arg2;
- (void)_dismissAlertItem:(id)arg1 forReason:(int)arg2 animated:(BOOL)arg3;
- (void)_presentAlertItem:(id)arg1 animated:(BOOL)arg2;
- (id)_activePresenterForAlertItem:(id)arg1;
- (id)_presenterForAlertItem:(id)arg1;
- (BOOL)_shouldPendAlertItem:(id)arg1;
- (id)_presentedAlertItemForPresenter:(id)arg1;
- (BOOL)_hasPresentationForPresenter:(id)arg1;
- (void)_processAlertItemsFromQueue:(id)arg1 animated:(BOOL)arg2;
- (void)_processAlertItemQueuesAnimated:(BOOL)arg1;
- (BOOL)_canProcessAlertItem:(id)arg1;
- (void)_performBatchActions:(CDUnknownBlockType)arg1 animated:(BOOL)arg2 processQueue:(BOOL)arg3;
- (void)_updateActiveDestinations;
- (void)activatePendedAlertsIfNecessary;
- (void)deactivateAlertItem:(id)arg1 reason:(int)arg2 animated:(BOOL)arg3;
- (void)deactivateAlertItem:(id)arg1 reason:(int)arg2;
- (void)deactivateAlertItem:(id)arg1;
- (void)activateAlertItem:(id)arg1 animated:(BOOL)arg2;
- (void)activateAlertItem:(id)arg1;
- (void)convertLockedAlertsToUnlockedAlerts;
- (void)convertUnlockedAlertsToLockedAlerts;
- (void)setInUILockedMode:(BOOL)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

