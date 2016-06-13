//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBToAppsWorkspaceTransaction.h"

#import "SBAlertManagerObserver.h"

@class NSString, SBAlertChangeTransaction, SBAutoPiPWorkspaceTransaction, SBFAuthenticationAssertion, SBUIAnimationController, SBWorkspaceAlert, SBWorkspaceAlertTransitionContext;

@interface SBAlertToAppsWorkspaceTransaction : SBToAppsWorkspaceTransaction <SBAlertManagerObserver>
{
    SBWorkspaceAlertTransitionContext *_alertTransitionContext;
    SBWorkspaceAlert *_alert;
    SBAlertChangeTransaction *_alertChangeTransaction;
    SBUIAnimationController *_animation;
    SBFAuthenticationAssertion *_siriAuthenticationAssertion;
    NSString *_ignoreOcclusionsReasonForActivatingApps;
    SBAutoPiPWorkspaceTransaction *_autoPiPTransaction;
    BOOL _preventAlertDeactivationForAnimation;
    BOOL _preventAlertDeactivationForAnimationLegacy;
    BOOL _createdAnimation;
    BOOL _animateActivation;
    BOOL _goingToSpringBoard;
    BOOL _animatedAppActivation;
    BOOL _activatingFromAssistant;
    BOOL _fadeAssistant;
    BOOL _waitingForAppActivation;
    int _pidToAutoPIP;
    BOOL _automaticallyPippingInCallAlert;
    BOOL _deactivateAfterNextLaunch;
}

@property(nonatomic) BOOL deactivateAfterNextLaunch; // @synthesize deactivateAfterNextLaunch=_deactivateAfterNextLaunch;
@property(readonly, nonatomic) SBWorkspaceAlert *alert; // @synthesize alert=_alert;
- (void).cxx_destruct;
- (void)_cleanUpAfterAnimation;
- (void)_deactivateAlertIfNecessary;
- (void)_alertAnimationComplete:(id)arg1;
- (BOOL)_isFromMainSwitcher;
- (id)_animationToApplications;
- (id)_animationToSpringBoard;
- (BOOL)_shouldAnimateTransition;
- (void)_doLegacyAlertAnimationWatchingThatNobodyWantsToSupportAnymoreInThisTransactionTodayPleaseGetRidOfMeSometimePlease;
- (void)_prepareApplicationsForActivationAnimated:(BOOL)arg1;
- (void)_activateApplications:(BOOL)arg1;
- (void)_animationDidFinish;
- (void)_animationDidRevealApplication;
- (void)_animationWillBegin:(BOOL)arg1;
- (void)_handleApplicationUpdateScenesTransactionFailed:(id)arg1;
- (void)_performPreAnimationTasksWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)_hasPreAnimationTasks;
- (void)_endTransition;
- (id)_setupAnimation;
- (void)_clearAnimation;
- (unsigned int)_serialOverlayPreDismissalOptions;
- (void)_beginTransition;
- (void)_synchronizeWithSceneUpdates;
- (BOOL)shouldPerformToAppStateCleanupOnCompletion;
- (void)activateApplications;
- (void)_didComplete;
- (void)_begin;
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

