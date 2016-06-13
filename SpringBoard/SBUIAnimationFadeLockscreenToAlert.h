//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIMainScreenAnimationController.h"

@class SBAlertManager, SBAppStatusBarSettingsAssertion, SBLockScreenViewController, SBUIFullscreenAlertAdapter;

@interface SBUIAnimationFadeLockscreenToAlert : SBUIMainScreenAnimationController
{
    SBLockScreenViewController *_lockScreenViewController;
    SBAlertManager *_alertManager;
    SBUIFullscreenAlertAdapter *_toAlert;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
    BOOL _alertViewIsAnimatingItself;
    BOOL _alertIsTransparent;
    BOOL _finishedPrimaryFadeAnimation;
    BOOL _needsLockScreenAlphaRestoredOnCompletion;
}

- (void).cxx_destruct;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (void)_alertViewFinishedAnimatingItself;
- (void)_fadeAnimationFinished;
- (void)_evaluateTotalAnimationCompletion;
- (void)_animationFinished;
- (id)animationSettings;
- (double)animationDuration;
- (void)dealloc;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

