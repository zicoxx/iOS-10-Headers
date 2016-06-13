//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIMainScreenAnimationController.h"

@class NSArray, SBAppStatusBarSettingsAssertion, SBMainAlertManager, SBRemoteAlertAdapter, SBWindowSelfHostWrapper, UIView;

@interface SBUIAnimationFadeRemoteAlertToApps : SBUIMainScreenAnimationController
{
    SBRemoteAlertAdapter *_alert;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
    SBMainAlertManager *_alertManager;
    SBWindowSelfHostWrapper *_appContextHostWrapper;
    NSArray *_accessoryHostWrappers;
    UIView *_alertContextHostView;
}

- (void).cxx_destruct;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (void)_setHidden:(BOOL)arg1;
- (id)_getTransitionWindow;
- (id)animationSettings;
- (double)animationDuration;
- (void)dealloc;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

