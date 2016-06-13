//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBMainWorkspaceTransaction.h"

#import "FBApplicationUpdateScenesTransactionObserver.h"
#import "FBSynchronizedTransactionDelegate.h"
#import "SBSceneLayoutWorkspaceTransactionDelegate.h"
#import "SBUIAnimationControllerObserver.h"

@class FBUIApplicationSceneDeactivationAssertion, NSArray, NSCountedSet, NSSet, NSString, SBAppRepairTransaction, SBSceneLayoutWorkspaceTransaction, SBUIAnimationController, SBWorkspaceApplicationTransitionContext;

@interface SBToAppsWorkspaceTransaction : SBMainWorkspaceTransaction <FBApplicationUpdateScenesTransactionObserver, SBSceneLayoutWorkspaceTransactionDelegate, FBSynchronizedTransactionDelegate, SBUIAnimationControllerObserver>
{
    CDUnknownBlockType _transitionCompletion;
    FBUIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
    CDUnknownBlockType _layoutTransitionContinuation;
    SBAppRepairTransaction *_appRepairTransaction;
    SBUIAnimationController *_animationController;
    SBWorkspaceApplicationTransitionContext *_additionalTransitionContext;
    NSArray *_fromApplications;
    NSCountedSet *_completionDelayRequesters;
    BOOL _underLockScreenInForeground;
    BOOL _gestureInitiated;
    unsigned int _preactivationForegroundRunningApplicationCount;
    BOOL _toAndFromApplicationsDiffer;
    BOOL _notifiedSlaves;
    BOOL _retriedAfterVoluntaryExit;
    BOOL _applicationStateNeedsCapture;
    BOOL _previousTransitionPerformedDeactivations;
    BOOL _dismissedOverlays;
    SBSceneLayoutWorkspaceTransaction *_layoutTransaction;
    NSSet *_trackedProcesses;
}

@property(readonly, nonatomic) NSSet *trackedProcesses; // @synthesize trackedProcesses=_trackedProcesses;
@property(readonly, nonatomic) SBSceneLayoutWorkspaceTransaction *layoutTransaction; // @synthesize layoutTransaction=_layoutTransaction;
- (void).cxx_destruct;
- (void)_fireAndClearResultBlockIfNecessaryForFailure:(BOOL)arg1;
- (id)animationController;
- (void)animationControllerDidRevealApplication:(id)arg1;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)animationController:(id)arg1 willBeginAnimation:(BOOL)arg2;
- (void)synchronizedTransaction:(id)arg1 didCommitSynchronizedTransactions:(id)arg2;
- (void)synchronizedTransaction:(id)arg1 willCommitSynchronizedTransactions:(id)arg2;
- (void)synchronizedTransactionReadyToCommit:(id)arg1;
- (void)transaction:(id)arg1 didCommitSceneUpdate:(id)arg2;
- (void)transaction:(id)arg1 willCommitSceneUpdate:(id)arg2;
- (BOOL)shouldWatchdog:(id *)arg1;
- (double)watchdogTimeout;
- (BOOL)transactionShouldConsiderLockStateForForegroundScenesDuringTransition:(id)arg1;
- (void)transaction:(id)arg1 didEndLayoutTransitionWithContinuation:(CDUnknownBlockType)arg2;
- (void)transaction:(id)arg1 performTransitionWithCompletion:(CDUnknownBlockType)arg2;
- (void)transactionWillBeginLayoutTransition:(id)arg1;
- (id)_customizedDescriptionProperties;
- (void)_didInterruptWithReason:(id)arg1;
- (BOOL)_shouldFailForChildTransaction:(id)arg1;
- (void)_willInterruptWithReason:(id)arg1;
- (void)_willFailWithReason:(id)arg1;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_didComplete;
- (BOOL)_canBeInterrupted;
- (void)_willBegin;
- (void)performAdditionalTransition:(id)arg1;
- (void)addSlaveTransaction:(id)arg1;
- (void)_captureApplicationState;
- (void)_notifySlavesIfNecessary;
- (void)_checkForAnimationCompletion;
- (void)_noteAnimationFinished;
- (void)_clearAnimation;
- (void)_beginAnimationIfNecessary;
- (BOOL)_beginAnimation;
- (void)_configureAnimation;
- (BOOL)_onlyPerformingDeactivations;
- (BOOL)_shouldUpdateUnderLockStateForForegroundScenes;
- (void)_performPostAnimationTasksWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performPreAnimationTasksWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)_hasPostAnimationTasks;
- (BOOL)_hasPreAnimationTasks;
- (void)_animationDidRevealApplication;
- (void)_animationDidFinish;
- (void)_animationWillBegin:(BOOL)arg1;
- (id)_setupAnimation;
- (unsigned int)_serialOverlayPreDismissalOptions;
- (void)_synchronizeWithSceneUpdates;
- (BOOL)_transitionWasCancelled;
- (void)_endTransition;
- (void)_beginTransition;
- (void)_stopDelayingTransitionCompletionForRequester:(id)arg1;
- (void)_delayTransitionCompletionForRequester:(id)arg1;
- (void)_handleApplicationUpdateScenesTransactionFailed:(id)arg1;
- (void)_relinquishResignActiveAssertion;
- (void)_acquireResignActiveAssertion;
- (void)_handleApplicationDidNotChange:(id)arg1;
- (void)_completeCurrentTransition;
- (id)_transitionContext;
- (id)_scenesToBackground;
- (id)_applicationForScene:(id)arg1;
- (void)activateApplications;
- (void)enumerateDeactivatingApplicationsWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateToApplicationsWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)toAndFromAppsDiffer;
- (BOOL)isGoingToLauncher;
- (void)performToAppStateCleanup;
- (BOOL)shouldAnimateOrientationChangeOnCompletion;
- (BOOL)isGoingToMainSwitcher;
- (BOOL)isFromSideSwitcher;
- (BOOL)isFromMainSwitcher;
- (BOOL)shouldPlaceOutgoingScenesUnderLockOnCompletion;
- (BOOL)shouldRestoreSpringBoardContentOnCleanup;
- (BOOL)shouldPerformToAppStateCleanupOnCompletion;
@property(readonly, nonatomic) NSArray *deactivatingApplications;
@property(readonly, nonatomic) NSArray *activatingApplications;
@property(readonly, nonatomic) NSArray *fromApplications;
@property(readonly, nonatomic) NSArray *toApplications;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
