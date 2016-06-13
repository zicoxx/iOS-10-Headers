//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSystemGestureWorkspaceTransaction.h"

#import "SBSceneLayoutWorkspaceTransactionDelegate.h"
#import "SBUIAnimationControllerObserver.h"
#import "SBWorkspaceTransitionLayoutDelegate.h"

@class NSString, NSTimer, SBAutoPiPWorkspaceTransaction, SBSceneLayoutWorkspaceTransaction, SBUISwitchAppSwipeAnimationController, SBWorkspaceApplicationTransitionContext;

@interface SBSwitchAppSwipeTransaction : SBSystemGestureWorkspaceTransaction <SBUIAnimationControllerObserver, SBSceneLayoutWorkspaceTransactionDelegate, SBWorkspaceTransitionLayoutDelegate>
{
    id <SBSwitchAppSwipeTransactionDelegate> _delegate;
    SBUISwitchAppSwipeAnimationController *_animationController;
    SBSceneLayoutWorkspaceTransaction *_sceneLayoutTransaction;
    CDUnknownBlockType _layoutCompletion;
    CDUnknownBlockType _layoutContinuation;
    NSTimer *_delayedAppLaunchTimer;
    BOOL _trackingGesture;
    BOOL _endLayoutTransition;
    BOOL _completingAnimation;
    float _basePercentage;
    SBWorkspaceApplicationTransitionContext *_originalTransitionContext;
    SBWorkspaceApplicationTransitionContext *_startingTransitionContext;
    SBWorkspaceApplicationTransitionContext *_nextTransitionContext;
    SBWorkspaceApplicationTransitionContext *_previousTransitionContext;
    SBWorkspaceApplicationTransitionContext *_endingTransitionContext;
    SBAutoPiPWorkspaceTransaction *_autoPiPTransaction;
}

@property(readonly, nonatomic) SBWorkspaceApplicationTransitionContext *endingTransitionContext; // @synthesize endingTransitionContext=_endingTransitionContext;
@property(retain, nonatomic) SBWorkspaceApplicationTransitionContext *previousTransitionContext; // @synthesize previousTransitionContext=_previousTransitionContext;
@property(retain, nonatomic) SBWorkspaceApplicationTransitionContext *nextTransitionContext; // @synthesize nextTransitionContext=_nextTransitionContext;
@property(nonatomic) __weak id <SBSwitchAppSwipeTransactionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=isTrackingGesture) BOOL trackingGesture; // @synthesize trackingGesture=_trackingGesture;
- (void).cxx_destruct;
- (struct CGRect)transitionContext:(id)arg1 referenceFrameForEntity:(id)arg2;
- (id)originalLayoutStateForTransitionContext:(id)arg1;
- (id)layoutStateForTransitionContext:(id)arg1;
- (void)transaction:(id)arg1 didEndLayoutTransitionWithContinuation:(CDUnknownBlockType)arg2;
- (void)transaction:(id)arg1 performTransitionWithCompletion:(CDUnknownBlockType)arg2;
- (void)transactionWillBeginLayoutTransition:(id)arg1;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)animationController:(id)arg1 willBeginAnimation:(BOOL)arg2;
- (void)_continueLayoutTransitionWithContext:(id)arg1 toCompletion:(BOOL)arg2 startAutoPiP:(BOOL)arg3 updateScenes:(BOOL)arg4;
- (void)_continueLayoutTransitionToCompletion:(BOOL)arg1 startAutoPiP:(BOOL)arg2 updateScenes:(BOOL)arg3;
- (void)_pendingAppLaunchTimerFired;
- (void)_schedulePendingAppLaunch;
- (void)_cancelPendingAppLaunch;
- (void)_gestureCancelled;
- (void)_gestureEndedWithCompletionType:(int)arg1;
- (void)_gestureChanged:(float)arg1;
- (void)_finishWithCompletionType:(int)arg1;
- (void)systemGestureStateChanged:(id)arg1;
- (id)_customizedDescriptionProperties;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_didComplete;
- (BOOL)_canBeInterrupted;
- (void)_begin;
- (void)startTrackingGesture:(id)arg1;
@property(readonly, nonatomic, getter=isFinishedAnimating) BOOL finishedAnimating;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1;
- (id)initWithTransitionRequest:(id)arg1 originalTransitionContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

