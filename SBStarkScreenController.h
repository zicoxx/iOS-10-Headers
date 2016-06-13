//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVExternalDeviceDelegate.h"
#import "FBSceneLayerManagerObserver.h"
#import "SBAlertManagerDelegate.h"
#import "SBAlertManagerObserver.h"
#import "SBAlertObserver.h"
#import "SBStarkIconControllerDelegate.h"
#import "SBStarkWindowDelegate.h"
#import "UIStatusBarStyleDelegate.h"
#import "_UISettingsKeyObserver.h"

@class AVExternalDevice, FBDisplayLayoutElement, FBSDisplay, FBScene, NSHashTable, NSMapTable, NSMutableOrderedSet, NSMutableSet, NSString, SBAlertManager, SBAssistantWindow, SBCarDisplaySettings, SBStarkAnimationWindow, SBStarkFakeIconOperationController, SBStarkFocusMovementManager, SBStarkIconController, SBStarkIconWindow, SBStarkLockOutViewController, SBStarkLockOutWindow, SBStarkNotificationViewController, SBStarkNotificationWindow, SBStarkNowPlayingController, SBStarkNowPlayingWindow, SBStarkScreenFocusController, SBStarkSessionConfiguration, SBStarkStatusBarViewController, SBStarkStatusBarWindow, SBStarkSystemGestureManager, SBWindow, UIScreen, UIWindow;

@interface SBStarkScreenController : NSObject <SBAlertManagerDelegate, SBAlertManagerObserver, SBAlertObserver, UIStatusBarStyleDelegate, _UISettingsKeyObserver, AVExternalDeviceDelegate, FBSceneLayerManagerObserver, SBStarkIconControllerDelegate, SBStarkWindowDelegate>
{
    SBStarkSessionConfiguration *_configuration;
    FBSDisplay *_fbsDisplay;
    UIScreen *_screen;
    SBCarDisplaySettings *_settings;
    id <SBDisplay> _actualTopDisplay;
    id <SBDisplay> _effectiveTopDisplay;
    NSMutableOrderedSet *_alertSheets;
    NSMapTable *_alertSheetsToWindowMap;
    NSHashTable *_observers;
    BOOL _connected;
    int _screenState;
    int _lockOutMode;
    BOOL _delayUpdatingLockOutMode;
    SBStarkLockOutViewController *_lockOutViewController;
    SBStarkLockOutWindow *_lockOutWindow;
    FBDisplayLayoutElement *_lockOutLayoutElement;
    SBStarkAnimationWindow *_animationWindow;
    FBScene *_nowPlayingScene;
    SBStarkNowPlayingController *_nowPlayingController;
    SBStarkNowPlayingWindow *_nowPlayingWindow;
    BOOL _showingNowPlaying;
    SBStarkIconController *_iconController;
    SBStarkIconWindow *_iconWindow;
    SBStarkStatusBarViewController *_statusBarViewController;
    SBStarkStatusBarWindow *_statusBarWindow;
    SBStarkNotificationWindow *_notificationWindow;
    SBAssistantWindow *_siriWindow;
    int _siriState;
    SBAlertManager *_alertManager;
    SBStarkSystemGestureManager *_systemGestureManager;
    id _alertBorrowScreenToken;
    id _siriBorrowScreenToken;
    SBStarkScreenFocusController *_focusController;
    SBStarkFakeIconOperationController *_fakeIconOperationController;
    AVExternalDevice *_externalDevice;
    BOOL _externalDeviceScreenAvailable;
    FBDisplayLayoutElement *_oemScreenLayoutElement;
    unsigned int _sessionStartBatteryLevel;
    BOOL _sessionStartBatteryLevelIsSet;
    NSMutableSet *_acBackDisabledReasons;
    FBScene *_previouslyFocusedScene;
    SBStarkFocusMovementManager *_focusMovementManager;
    id <SBStarkScreenControllerDelegate> _delegate;
}

+ (void)_launchNowPlaying;
@property(readonly, nonatomic) SBStarkSystemGestureManager *systemGestureManager; // @synthesize systemGestureManager=_systemGestureManager;
@property(readonly, nonatomic, getter=isShowingNowPlaying) BOOL showNowPlaying; // @synthesize showNowPlaying=_showingNowPlaying;
@property(readonly, nonatomic) SBAlertManager *alertManager; // @synthesize alertManager=_alertManager;
@property(nonatomic) __weak id <SBStarkScreenControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) FBSDisplay *fbsDisplay; // @synthesize fbsDisplay=_fbsDisplay;
@property(readonly, nonatomic) UIScreen *screen; // @synthesize screen=_screen;
@property(readonly, nonatomic) id <SBStarkSessionConfiguring> sessionConfiguration; // @synthesize sessionConfiguration=_configuration;
- (void).cxx_destruct;
- (void)starkWindowDidTriggerUnhandledBack:(id)arg1;
- (BOOL)iconControllerShouldPersistIconsForFakeApps:(id)arg1;
- (void)handleBackPress;
- (id)animationWindowForIconController:(id)arg1;
- (void)handleFocusMovementAction:(id)arg1 fromScene:(id)arg2;
- (BOOL)_isStatusBarScene:(id)arg1;
- (void)sceneLayerManagerDidStopTrackingLayers:(id)arg1;
- (void)sceneLayerManagerWillStartTrackingLayers:(id)arg1;
- (void)siriRequestedWithAction:(int)arg1;
- (void)iOSUIRequestedForApplicationURL:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)statusBar:(id)arg1 didTriggerButtonType:(int)arg2 withAction:(int)arg3;
- (void)statusBar:(id)arg1 didAnimateFromHeight:(float)arg2 toHeight:(float)arg3 animation:(int)arg4;
- (void)statusBar:(id)arg1 willAnimateFromHeight:(float)arg2 toHeight:(float)arg3 duration:(double)arg4 animation:(int)arg5;
- (int)statusBar:(id)arg1 styleForRequestedStyle:(int)arg2 overrides:(int)arg3;
- (void)alertManager:(id)arg1 didCreateAlertWindow:(id)arg2;
- (void)alertManager:(id)arg1 willTearDownAlertWindow:(id)arg2;
- (void)alertManager:(id)arg1 didDeactivateAlert:(id)arg2 top:(BOOL)arg3;
- (void)alertManager:(id)arg1 willActivateAlert:(id)arg2 overAlerts:(id)arg3;
- (BOOL)alertManager:(id)arg1 shouldDeactivateDismissedAlert:(id)arg2;
- (id)alertManager:(id)arg1 newAlertWindowForScene:(id)arg2;
- (float)sceneLevelForAlerts;
- (struct CGRect)sceneFrameForAlerts:(id)arg1;
- (void)alertBannerSuppressionChanged:(id)arg1;
- (void)_setACBackEnabled:(BOOL)arg1 forRequester:(id)arg2;
- (BOOL)_isACBackEnabled;
- (struct CGRect)_defaultScreenFrameOffsetForStatusBar:(id)arg1;
- (void)_toggleNotificationSuspendedState;
- (BOOL)_allowNavigationOverrideStyle;
- (BOOL)_allowInCallOverrideStyle;
- (void)_toggleNowPlayingVisible:(BOOL)arg1;
- (void)_createFakeIconOperationController;
- (void)_didChangeFromState:(int)arg1;
- (void)_updateLockOutMode;
- (void)_hideWindowsForSetup:(BOOL)arg1;
- (void)_setSiriState:(int)arg1;
- (void)_viewController:(id)arg1 animateDisappearanceWithContext:(id)arg2;
- (void)_viewController:(id)arg1 willAnimateDisappearanceWithContext:(id)arg2;
- (void)_viewController:(id)arg1 animateAppearanceWithContext:(id)arg2;
- (void)_viewController:(id)arg1 willAnimateAppearanceWithContext:(id)arg2;
- (BOOL)_scrollToFirstIconPageIfPossible;
- (void)_collectCarPlayDiagnostics;
- (void)_lowPowerBatteryLevelChanged:(id)arg1;
- (void)_externalDeviceScreenBecameUnavailable:(id)arg1;
- (void)_externalDeviceScreenBecameAvailable:(id)arg1;
- (void)_updateAlertSheetFocus;
- (void)_alertSheetDismissed:(id)arg1;
- (void)_alertSheetPresented:(id)arg1;
- (void)_dismissSiriWithFactory:(id)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_takeScreenIfNecessaryForTopDisplayActivation;
- (void)_handleSuspendTopMost;
- (void)_handleMenuEventAndTakeScreen:(BOOL)arg1;
- (id)_newNowPlayingScene;
- (void)_noteDisconnectCompleted;
- (void)_noteConnectSetupCompleted;
- (void)_noteInitializationCompleted;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)cleanupForTopDisplayIfNecessaryWithAnimationFactory:(id)arg1;
- (void)dismissSiriWithAnimation:(int)arg1 factory:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)presentSiri:(BOOL)arg1 viewController:(id)arg2;
- (void)handleEndCallButtonPress;
- (void)handleLongBackPress;
- (void)handleUnhandledBack;
- (void)handleACHomeUp;
- (void)handleUncompletedAppLaunchWithStarkTrigger:(BOOL)arg1;
- (void)notifyWhenNowPlayingIsActive:(CDUnknownBlockType)arg1 withTimeout:(double)arg2;
- (id)nowPlayingSnapshot;
- (id)nowPlayingSceneHostManager;
- (void)setNowPlayingForWorkspaceApplication:(id)arg1;
- (void)updateStatusBarStateForDisplay:(id)arg1 withAnimationFactory:(id)arg2;
- (void)setEffectiveTopDisplay:(id)arg1 actualTopDisplay:(id)arg2 forStarkTrigger:(BOOL)arg3 withAnimationFactory:(id)arg4;
- (void)setEffectiveTopDisplay:(id)arg1 forStarkTrigger:(BOOL)arg2 withAnimationFactory:(id)arg3;
@property(readonly, retain, nonatomic) id <SBDisplay> effectiveTopDisplay;
@property(readonly, retain, nonatomic) id <SBDisplay> actualTopDisplay;
@property(readonly, nonatomic) SBStarkStatusBarViewController *statusBarController;
@property(readonly, nonatomic) SBStarkNotificationViewController *notificationController;
@property(readonly, nonatomic) SBStarkIconController *iconController;
@property(readonly, nonatomic) SBWindow *lockoutWindow;
@property(readonly, nonatomic) UIWindow *focusWindow;
@property(readonly, nonatomic) SBWindow *iconWindow;
@property(readonly, nonatomic) SBWindow *animationWindow;
@property(readonly, nonatomic) int state;
- (void)invalidate;
- (void)_updateVehicleInfo;
- (void)_tearDownSceneManagerIfAppropriate;
- (void)_tearDownAndInvalidate:(BOOL)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
