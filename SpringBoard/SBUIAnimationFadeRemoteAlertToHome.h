//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIMainScreenAnimationController.h"

@class SBAppStatusBarSettingsAssertion, SBMainAlertManager, SBRemoteAlertAdapter, SBWindowSelfHostWrapper;

@interface SBUIAnimationFadeRemoteAlertToHome : SBUIMainScreenAnimationController
{
    SBMainAlertManager *_alertManager;
    SBRemoteAlertAdapter *_alert;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
    SBWindowSelfHostWrapper *_appHostWrapper;
    int _targetStatusBarStyle;
}

- (void).cxx_destruct;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (id)animationSettings;
- (double)animationDuration;
- (void)dealloc;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

