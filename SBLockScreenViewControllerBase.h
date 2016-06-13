//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlert.h"

#import "SBAutoUnlockRule.h"
#import "SBMesaUnlockBehavior.h"
#import "SBScreenFadeAnimationControllerDelegate.h"

@class NSString, SBLockScreenActionContext;

@interface SBLockScreenViewControllerBase : SBAlert <SBScreenFadeAnimationControllerDelegate, SBAutoUnlockRule, SBMesaUnlockBehavior>
{
    SBLockScreenActionContext *_customLockScreenActionContext;
    BOOL _authenticated;
    float _backlightLevel;
    id <SBMesaUnlockBehaviorDelegate> _mesaUnlockBehaviorDelegate;
}

@property(nonatomic, getter=isAuthenticated) BOOL authenticated; // @synthesize authenticated=_authenticated;
@property(nonatomic) __weak id <SBMesaUnlockBehaviorDelegate> mesaUnlockBehaviorDelegate; // @synthesize mesaUnlockBehaviorDelegate=_mesaUnlockBehaviorDelegate;
@property(nonatomic) float backlightLevel; // @synthesize backlightLevel=_backlightLevel;
- (void).cxx_destruct;
- (void)biometricEventMonitor:(id)arg1 handleBiometricEvent:(unsigned int)arg2;
- (BOOL)shouldAutoUnlockForSource:(int)arg1;
- (void)screenFadeAnimationController:(id)arg1 setRelevantViewsHidden:(BOOL)arg2 forRequester:(id)arg3;
- (BOOL)shouldUnlockUIOnKeyDownEvent;
- (void)noteResetRestoreStateUpdated;
- (void)noteDeviceBlockedStatusUpdated;
- (BOOL)wantsLockScreenIdleTimer;
- (BOOL)isMainPageVisible;
- (BOOL)isShowingOverheatUI;
- (BOOL)isSystemGesturePermittedForPresentingController:(id)arg1;
- (void)shakeSlideToUnlockTextWithCustomText:(id)arg1;
- (void)setShowingMediaControls:(BOOL)arg1;
- (BOOL)isShowingMediaControls;
- (void)updateOrientationForUndim;
- (void)setCustomLockScreenActionContext:(id)arg1;
- (id)_customLockScreenActionContext;
- (id)currentLockScreenActionContext;
- (void)noteModalBannerIsVisible:(BOOL)arg1;
- (BOOL)lockScreenIsShowingBulletins;
- (BOOL)shouldShowStatusBarOnDeactivation;
- (BOOL)shouldShowLockStatusBarTime;
- (BOOL)shouldDisableALS;
- (BOOL)shouldShowSlideshowButton;
- (void)noteMenuButtonUp;
- (void)noteMenuButtonDown;
- (BOOL)handleMenuButtonHeld;
- (BOOL)handleMenuButtonTap;
- (void)noteExitingLostMode;
- (void)prepareToEnterLostMode;
- (void)_handlePassKitDismissal;
- (void)_handlePassKitPresentation;
- (void)updateCardItem:(id)arg1;
- (void)deactivateCardItem:(id)arg1;
- (void)activateCardItem:(id)arg1 animated:(BOOL)arg2;
- (void)disableLockScreenPluginWithContext:(id)arg1;
- (void)enableLockScreenPluginWithContext:(id)arg1;
- (id)activeLockScreenPlugin;
- (BOOL)isLockScreenPluginViewVisible;
- (void)setInScreenOffMode:(BOOL)arg1 forAutoUnlock:(BOOL)arg2;
- (void)setInScreenOffMode:(BOOL)arg1;
- (BOOL)isInScreenOffMode;
- (void)startLockScreenFadeInAnimationForSource:(int)arg1;
- (BOOL)canRelockForAutoDimTimer;
- (BOOL)wantsScreenToAutoDim;
- (void)prepareForMesaUnlockWithCompletion:(CDUnknownBlockType)arg1;
- (void)noteNextUnlockShouldReturnToCallIfPossible:(BOOL)arg1;
- (BOOL)isHidingPasscodeViewDuringCall;
- (void)setForcesPasscodeViewDuringCall:(BOOL)arg1;
- (void)noteStartingPhoneCallWhileUILocked;
- (BOOL)isMakingEmergencyCall;
- (void)emergencyDialerExitedWithError:(id)arg1;
- (void)exitEmergencyDialerAnimated:(BOOL)arg1;
- (void)launchEmergencyDialer;
- (void)launchInCallAlert;
- (void)activateCameraAnimated:(BOOL)arg1;
- (void)activateCamera;
- (id)_displayLayoutElementIdentifier;
- (BOOL)allowsStackingOfAlert:(id)arg1;
- (void)willBeginDeactivationForTransitionToApps:(id)arg1 animated:(BOOL)arg2;
- (BOOL)_isLockAlert;
- (void)prepareForExternalUIUnlock;
- (void)deactivate;
- (void)activate;
- (void)finishUIUnlockFromSource:(int)arg1;
- (void)attemptToUnlockUIFromNotification;
- (BOOL)canBeDeactivatedForUIUnlockFromSource:(int)arg1;
- (BOOL)canUIUnlockFromSource:(int)arg1;
- (void)prepareForUIUnlock;
- (void)setPasscodeLockVisible:(BOOL)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setPasscodeLockVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)isPasscodeLockVisible;
- (void)updateStatusBarForLockScreenTeardown;
- (void)updateLegibility;
- (BOOL)allowSystemGestureAtLocation:(struct CGPoint)arg1;
- (void)_transitionWallpaperFromLockWithOptionalOutTimingFunction:(id)arg1 adjustWindowLevel:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_transitionWallpaperFromLock;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

