//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "BSDescriptionProviding.h"
#import "SBApplicationHosting.h"
#import "SBDisplay.h"

@class FBDisplayLayoutElement, NSHashTable, NSMutableDictionary, NSString, SBActivationSettings, SBAlertManager, SBAlertView, SBDeactivationSettings, SBProcessSettings, SBStateSettings, UIScreen;

@interface SBAlert : UIViewController <BSDescriptionProviding, SBDisplay, SBApplicationHosting>
{
    id <SBAlertDelegate> _alertDelegate;
    SBAlertView *_display;
    NSMutableDictionary *_dictionary;
    BOOL _isWallpaperTunnelActive;
    BOOL _backgroundStyleIsSet;
    int _backgroundStyle;
    BOOL _isForcingBackgroundStyleUpdate;
    BOOL _suppressesBanners;
    BOOL _expectsFaceContact;
    BOOL _occluding;
    SBActivationSettings *_activationSettings;
    SBDeactivationSettings *_deactivationSettings;
    SBStateSettings *_stateSettings;
    SBProcessSettings *_processSettings;
    int _orientationChangedEventsEnabled;
    BOOL _requestedDismissal;
    UIScreen *_targetScreen;
    FBDisplayLayoutElement *_displayLayoutElement;
    NSHashTable *_observers;
    SBAlertManager *_alertManager;
}

+ (void)test;
+ (void)registerForAlerts;
@property(retain, nonatomic) SBAlertManager *alertManager; // @synthesize alertManager=_alertManager;
@property(nonatomic) BOOL expectsFaceContact; // @synthesize expectsFaceContact=_expectsFaceContact;
@property(nonatomic, getter=_requestedDismissal, setter=_setRequestedDismissal:) BOOL requestedDismissal; // @synthesize requestedDismissal=_requestedDismissal;
- (void).cxx_destruct;
- (id)_displayLayoutElementIdentifier;
- (void)_deactivateLayoutElement;
@property(nonatomic, getter=_isOccluding, setter=_setOccluding:) BOOL _occluding;
- (BOOL)_isLockAlert;
- (void)_removeFromImpersonatedAppIfNecessary;
- (id)_impersonatesApplicationWithBundleID;
- (void)removeFromView;
- (void)alertViewIsReadyToDismiss:(id)arg1;
- (void)setDisplay:(id)arg1;
- (void)setAlertDelegate:(id)arg1;
- (id)alertDelegate;
- (BOOL)_shouldDismissSwitcherOnActivation;
- (void)hostedAppWillRotateToInterfaceOrientation:(int)arg1;
- (id)hostedApp;
- (BOOL)isHostingAnApp;
- (BOOL)canHostAnApp;
@property(readonly, nonatomic) int whitePointAdaptivityStyle;
@property(readonly, nonatomic) BOOL activatedForSiri;
@property(readonly, nonatomic) BOOL suppressesSiri;
@property(readonly, nonatomic) BOOL suppressesControlCenter;
@property(readonly, nonatomic) BOOL suppressesNotificationCenter;
@property(nonatomic) BOOL suppressesBanners;
- (void)handleAutoLock;
- (BOOL)handleHeadsetButtonPressed:(BOOL)arg1;
- (BOOL)handleVolumeDownButtonPressed;
- (BOOL)handleVolumeUpButtonPressed;
- (BOOL)handleLockButtonPressed;
- (BOOL)hasTranslucentBackground;
- (BOOL)shouldPendAlertItemsWhileActive;
- (void)handleSlideshowHardwareButton;
- (BOOL)handleMenuButtonHeld;
- (BOOL)handleMenuButtonDoubleTap;
- (BOOL)handleMenuButtonTap;
- (void)animateDeactivation;
- (BOOL)currentlyAnimatingDeactivation;
- (void)willBeginDeactivationForTransitionToApps:(id)arg1 animated:(BOOL)arg2;
- (void)didFinishAnimatingOut;
- (void)didFinishAnimatingIn;
- (id)legibilitySettings;
- (id)effectiveStatusBarStyleRequest;
- (int)effectiveStatusBarStyle;
- (id)statusBarStyleRequest;
- (int)starkStatusBarStyle;
- (int)statusBarStyle;
- (double)longPressDurationForHomeButton;
- (double)autoLockTime;
- (double)autoDimTime;
- (BOOL)managesOwnStatusBarAtActivation;
- (BOOL)allowsEventOnlySuspension;
- (BOOL)orientationChangedEventsEnabled;
- (void)setOrientationChangedEventsEnabled:(BOOL)arg1;
- (void)deactivate;
- (void)activate;
- (int)statusBarStyleOverridesToCancel;
- (void)displayDidDisappear;
- (void)displayWillAppear;
- (float)finalAlpha;
- (BOOL)wantsTimeInStatusBar;
- (BOOL)showsSpringBoardStatusBar;
- (BOOL)undimsDisplay;
- (void)didStackWithAlert:(id)arg1;
- (void)willStackWithAlert:(id)arg1;
- (BOOL)allowsStackingOfAlert:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;
- (void)removeBackgroundStyleWithAnimationFactory:(id)arg1;
- (void)setBackgroundStyle:(int)arg1 withAnimationFactory:(id)arg2 force:(BOOL)arg3;
- (void)setBackgroundStyle:(int)arg1 withAnimationFactory:(id)arg2;
- (int)customBackgroundStyle;
- (BOOL)wantsCustomBackgroundStyleForAllWallpaperVariants;
- (BOOL)wantsCustomBackgroundStyle;
- (BOOL)isWallpaperTunnelActive;
- (void)setWallpaperTunnelActive:(BOOL)arg1;
- (void)clearProcessSettings;
- (void)applyProcessSettings:(id)arg1;
- (id)copyProcessSettings;
- (id)objectForProcessSetting:(int)arg1;
- (void)setObject:(id)arg1 forProcessSetting:(int)arg2;
- (BOOL)boolForProcessSetting:(int)arg1;
- (int)flagForProcessSetting:(int)arg1;
- (void)setFlag:(int)arg1 forProcessSetting:(int)arg2;
- (void)clearStateSettings;
- (void)applyStateSettings:(id)arg1;
- (id)copyStateSettings;
- (id)objectForStateSetting:(unsigned int)arg1;
- (void)setObject:(id)arg1 forStateSetting:(unsigned int)arg2;
- (BOOL)boolForStateSetting:(unsigned int)arg1;
- (int)flagForStateSetting:(unsigned int)arg1;
- (void)setFlag:(int)arg1 forStateSetting:(unsigned int)arg2;
- (void)clearDeactivationSettings;
- (void)applyDeactivationSettings:(id)arg1;
- (id)copyDeactivationSettings;
- (id)objectForDeactivationSetting:(unsigned int)arg1;
- (void)setObject:(id)arg1 forDeactivationSetting:(unsigned int)arg2;
- (BOOL)boolForDeactivationSetting:(unsigned int)arg1;
- (int)flagForDeactivationSetting:(unsigned int)arg1;
- (void)setFlag:(int)arg1 forDeactivationSetting:(unsigned int)arg2;
- (void)clearActivationSettings;
- (void)applyActivationSettings:(id)arg1;
- (id)copyActivationSettings;
- (id)objectForActivationSetting:(unsigned int)arg1;
- (void)setObject:(id)arg1 forActivationSetting:(unsigned int)arg2;
- (BOOL)boolForActivationSetting:(unsigned int)arg1;
- (int)flagForActivationSetting:(unsigned int)arg1;
- (void)setFlag:(int)arg1 forActivationSetting:(unsigned int)arg2;
- (id)copyDisplaySettings;
- (void)dismissAlert;
- (void)clearDisplay;
- (id)display;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (unsigned int)supportedInterfaceOrientations;
- (int)preferredInterfaceOrientationForPresentation;
- (BOOL)shouldAutorotate;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (BOOL)wantsFullScreenLayout;
- (id)_screen;
- (void)_setTargetScreen:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)isRemote;
- (BOOL)matchesInCallUIService;
- (BOOL)matchesAnyInCallService;
- (BOOL)matchesRemoteAlertService:(id)arg1 options:(id)arg2;
- (id)effectiveViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
