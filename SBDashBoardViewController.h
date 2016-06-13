//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBLockScreenViewControllerBase.h"

#import "SBDashBoardLegibilityProviderDelegate.h"
#import "SBDashBoardNotificationDestination.h"
#import "SBDashBoardSlideUpToAppControllerDelegate.h"
#import "SBDashBoardViewControllerProtocol.h"
#import "SBDashBoardViewDelegate.h"
#import "SBDashBoardViewTransitionSource.h"
#import "SBFIrisWallpaperViewDelegate.h"
#import "SBLockScreenActionProvider.h"
#import "SBLockScreenPluginManagerDelegate.h"
#import "SBLockScreenTimerViewControllerDelegate.h"
#import "SBMesaUnlockBehaviorDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class BSTimer, FBDisplayLayoutTransition, NSArray, NSHashTable, NSSet, NSString, SBAppStatusBarSettingsAssertion, SBDashBoardAppearance, SBDashBoardBehavior, SBDashBoardBlockEventHandler, SBDashBoardChargingViewController, SBDashBoardLegibilityProvider, SBDashBoardMainPageViewController, SBDashBoardMesaUnlockBehavior, SBDashBoardModalPresentationViewController, SBDashBoardNotificationDispatcher, SBDashBoardPluginViewController, SBDashBoardPowerChangeObserver, SBDashBoardPresentation, SBDashBoardSetupViewController, SBDashBoardSlideUpToAppController, SBDashBoardSlidingPresentationViewController, SBFakeStatusBarView, SBIdleTimerEventPublisher, SBLockScreenActionContext, SBLockScreenActionManager, SBLockScreenDateViewController, SBLockScreenPluginManager, SBLockScreenTimerViewController, SBMainStatusBarStateProvider, SBPolicyAggregator, SBSteppedAnimationTimingFunctionCalculator, SBWallpaperAggdLogger, UIColor, UIPanGestureRecognizer, _UILegibilitySettings;

@interface SBDashBoardViewController : SBLockScreenViewControllerBase <SBDashBoardViewDelegate, UIGestureRecognizerDelegate, SBDashBoardLegibilityProviderDelegate, SBLockScreenActionProvider, SBLockScreenPluginManagerDelegate, SBFIrisWallpaperViewDelegate, SBDashBoardViewTransitionSource, SBDashBoardSlideUpToAppControllerDelegate, SBDashBoardNotificationDestination, SBLockScreenTimerViewControllerDelegate, SBMesaUnlockBehaviorDelegate, SBDashBoardViewControllerProtocol>
{
    BOOL _screenOffMode;
    BOOL _hasContentAboveDashBoard;
    BOOL _preventAppearanceUpdatesForRotation;
    SBLockScreenPluginManager *_pluginManager;
    SBSteppedAnimationTimingFunctionCalculator *_interactiveAnimationCalculator;
    SBDashBoardPluginViewController *_pluginViewController;
    int _pluginViewControllerPresentationStyle;
    NSHashTable *_externalAppearanceProviders;
    NSHashTable *_externalBehaviorProviders;
    NSHashTable *_externalEventHandlers;
    NSHashTable *_observers;
    NSHashTable *_applicationHosters;
    SBDashBoardNotificationDispatcher *_notificationDispatcher;
    int _transitionType;
    CDStruct_6b1f2d91 _transitionContext;
    FBDisplayLayoutTransition *_displayLayoutTransition;
    int _participantState;
    BOOL _transitionDisabledIdleTimer;
    SBDashBoardModalPresentationViewController *_modalPresentationController;
    SBDashBoardSlidingPresentationViewController *_bottomPresentationController;
    SBDashBoardSlideUpToAppController *_slideUpToAppController;
    SBDashBoardChargingViewController *_chargingViewController;
    BSTimer *_chargingViewControllerTimer;
    SBDashBoardMesaUnlockBehavior *_mesaUnlockBehavior;
    SBIdleTimerEventPublisher *_idleTimerEventPublisher;
    SBDashBoardBlockEventHandler *_redirectHandler;
    BOOL _irisPlayerIsInteracting;
    BOOL _shouldTransitionIrisWallpaperToStillWhenPlaybackFinishes;
    id <SBDashBoardViewControllerDelegate> _delegate;
    SBDashBoardAppearance *_activeAppearance;
    SBDashBoardBehavior *_activeBehavior;
    id <SBDashBoardNotificationDispatcher> _dispatcher;
    SBPolicyAggregator *_policyAggregator;
    SBMainStatusBarStateProvider *_statusBarStateProvider;
    id <SBFIrisWallpaperView> _irisWallpaperView;
    id <SBWallpaperColorProvider> _wallpaperColorProvider;
    NSArray *_pageViewControllers;
    NSArray *_allowedPageViewControllers;
    SBDashBoardMainPageViewController *_mainPageViewController;
    unsigned int _lastSettledPageIndex;
    SBDashBoardBehavior *_localBehavior;
    SBDashBoardBehavior *_irisBehavior;
    SBDashBoardBehavior *_setupBehavior;
    float _appearanceFraction;
    SBDashBoardAppearance *_previousAppearance;
    SBDashBoardAppearance *_localAppearance;
    SBDashBoardPresentation *_activePresentation;
    SBLockScreenDateViewController *_dateViewController;
    SBDashBoardPowerChangeObserver *_powerChangeObserver;
    SBLockScreenTimerViewController *_timerViewController;
    SBDashBoardLegibilityProvider *_legibilityProvider;
    SBLockScreenActionManager *_lockScreenActionManager;
    SBLockScreenActionContext *_customLockScreenActionContext;
    SBFakeStatusBarView *_fakeStatusBarView;
    SBAppStatusBarSettingsAssertion *_statusBarAssertion;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertionForScrolling;
    SBWallpaperAggdLogger *_wallpaperAggdLogger;
    UIPanGestureRecognizer *_scrollPanGestureRecognizer;
    id <SBFLockOutStatusProvider> _lockOutController;
    id <SBDashBoardViewTransitionSource> _currentTransitionSource;
    SBDashBoardSetupViewController *_setupController;
}

@property(retain, nonatomic) SBDashBoardSetupViewController *setupController; // @synthesize setupController=_setupController;
@property(retain, nonatomic) id <SBDashBoardViewTransitionSource> currentTransitionSource; // @synthesize currentTransitionSource=_currentTransitionSource;
@property(retain, nonatomic, getter=_lockOutController, setter=_setLockOutController:) id <SBFLockOutStatusProvider> lockOutController; // @synthesize lockOutController=_lockOutController;
@property(retain, nonatomic) SBDashBoardModalPresentationViewController *modalPresentationController; // @synthesize modalPresentationController=_modalPresentationController;
@property(retain, nonatomic) UIPanGestureRecognizer *scrollPanGestureRecognizer; // @synthesize scrollPanGestureRecognizer=_scrollPanGestureRecognizer;
@property(retain, nonatomic) SBWallpaperAggdLogger *wallpaperAggdLogger; // @synthesize wallpaperAggdLogger=_wallpaperAggdLogger;
@property(nonatomic) BOOL shouldTransitionIrisWallpaperToStillWhenPlaybackFinishes; // @synthesize shouldTransitionIrisWallpaperToStillWhenPlaybackFinishes=_shouldTransitionIrisWallpaperToStillWhenPlaybackFinishes;
@property(nonatomic) BOOL irisPlayerIsInteracting; // @synthesize irisPlayerIsInteracting=_irisPlayerIsInteracting;
@property(retain, nonatomic) SBAppStatusBarSettingsAssertion *hideStatusBarAssertionForScrolling; // @synthesize hideStatusBarAssertionForScrolling=_hideStatusBarAssertionForScrolling;
@property(retain, nonatomic) SBAppStatusBarSettingsAssertion *statusBarAssertion; // @synthesize statusBarAssertion=_statusBarAssertion;
@property(retain, nonatomic) SBFakeStatusBarView *fakeStatusBarView; // @synthesize fakeStatusBarView=_fakeStatusBarView;
@property(retain, nonatomic) SBLockScreenActionContext *customLockScreenActionContext; // @synthesize customLockScreenActionContext=_customLockScreenActionContext;
@property(retain, nonatomic) SBLockScreenActionManager *lockScreenActionManager; // @synthesize lockScreenActionManager=_lockScreenActionManager;
@property(retain, nonatomic) SBDashBoardLegibilityProvider *legibilityProvider; // @synthesize legibilityProvider=_legibilityProvider;
@property(retain, nonatomic) SBLockScreenTimerViewController *timerViewController; // @synthesize timerViewController=_timerViewController;
@property(retain, nonatomic) SBDashBoardPowerChangeObserver *powerChangeObserver; // @synthesize powerChangeObserver=_powerChangeObserver;
@property(retain, nonatomic) SBLockScreenDateViewController *dateViewController; // @synthesize dateViewController=_dateViewController;
@property(retain, nonatomic) SBDashBoardPresentation *activePresentation; // @synthesize activePresentation=_activePresentation;
@property(copy, nonatomic) SBDashBoardAppearance *localAppearance; // @synthesize localAppearance=_localAppearance;
@property(copy, nonatomic) SBDashBoardAppearance *previousAppearance; // @synthesize previousAppearance=_previousAppearance;
@property(nonatomic) float appearanceFraction; // @synthesize appearanceFraction=_appearanceFraction;
@property(retain, nonatomic) SBDashBoardBehavior *setupBehavior; // @synthesize setupBehavior=_setupBehavior;
@property(retain, nonatomic) SBDashBoardBehavior *irisBehavior; // @synthesize irisBehavior=_irisBehavior;
@property(retain, nonatomic) SBDashBoardBehavior *localBehavior; // @synthesize localBehavior=_localBehavior;
@property(nonatomic) unsigned int lastSettledPageIndex; // @synthesize lastSettledPageIndex=_lastSettledPageIndex;
@property(retain, nonatomic, setter=_setMainPageViewController:) SBDashBoardMainPageViewController *mainPageViewController; // @synthesize mainPageViewController=_mainPageViewController;
@property(copy, nonatomic, getter=_allowedPageViewControllers, setter=_setAllowedPageViewControllers:) NSArray *allowedPageViewControllers; // @synthesize allowedPageViewControllers=_allowedPageViewControllers;
@property(copy, nonatomic, setter=_setPageViewControllers:) NSArray *pageViewControllers; // @synthesize pageViewControllers=_pageViewControllers;
@property(nonatomic) __weak id <SBWallpaperColorProvider> wallpaperColorProvider; // @synthesize wallpaperColorProvider=_wallpaperColorProvider;
@property(retain, nonatomic) id <SBFIrisWallpaperView> irisWallpaperView; // @synthesize irisWallpaperView=_irisWallpaperView;
@property(retain, nonatomic, getter=_statusBarStateProvider, setter=_setStatusBarStateProvider:) SBMainStatusBarStateProvider *statusBarStateProvider; // @synthesize statusBarStateProvider=_statusBarStateProvider;
@property(retain, nonatomic, getter=_policyAggregator, setter=_setPolicyAggregator:) SBPolicyAggregator *policyAggregator; // @synthesize policyAggregator=_policyAggregator;
@property(nonatomic) __weak id <SBDashBoardNotificationDispatcher> dispatcher; // @synthesize dispatcher=_dispatcher;
@property(readonly, nonatomic) CDStruct_6b1f2d91 transitionContext; // @synthesize transitionContext=_transitionContext;
@property(copy, nonatomic) SBDashBoardBehavior *activeBehavior; // @synthesize activeBehavior=_activeBehavior;
@property(copy, nonatomic) SBDashBoardAppearance *activeAppearance; // @synthesize activeAppearance=_activeAppearance;
@property(nonatomic) __weak id <SBDashBoardViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_reloadLiftToWakeSupport;
- (void)_setupMesaUnlockBehavior;
- (void)_dismissApplicationWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)_dismissAppBelowDashBoard:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_activateAppBelowDashBoard:(id)arg1;
- (void)_setBottomPresentationControllerVisibility:(BOOL)arg1;
- (void)_presentOrDismissSetupViewController:(BOOL)arg1;
- (void)_addOrRemoveBlockedViewIfNecessaryAnimated:(BOOL)arg1;
- (void)_addOrRemoveThermalTrapViewIfNecessaryAnimated:(BOOL)arg1;
- (void)_dismissModalViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_dismissModalViewControllersWithIdentifier:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_presentModalViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)_isPresentingModalViewControllerWithIdentifier:(id)arg1;
- (void)_setModalPresentationControllerVisibility:(BOOL)arg1;
- (void)_updateModalPresentationControllerVisibility;
- (void)_displayLayoutDidUpdate:(id)arg1;
- (void)_displayWillUndim:(id)arg1;
- (void)_displayWillTurnOnWhileOnDashBoard:(id)arg1;
- (void)_transitionChargingViewToVisible:(BOOL)arg1 showBattery:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_powerStatusChangedToConnectedState:(BOOL)arg1;
- (void)_transitionTimerViewToVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)timerControllerDidStopTimer:(id)arg1;
- (void)timerControllerDidStartTimer:(id)arg1;
- (BOOL)_isFadeInAnimationInProgress;
- (void)_startFadeInAnimationForSource:(int)arg1 fadingToBatteryView:(BOOL)arg2;
- (void)startLockScreenFadeInAnimationForSource:(int)arg1;
- (void)_actuallyUpdateUIForIrisPlaying:(BOOL)arg1;
- (void)_actuallyUpdateUIForIrisNotPlaying;
- (void)_actuallyUpdateUIForIrisPlaying;
- (void)_updateUIForPlaying:(BOOL)arg1 immediately:(BOOL)arg2;
- (void)_setupIrisWallpaperGesture;
- (id)_createFakeStatusBarView;
- (void)_setFakeStatusBarEnabled:(BOOL)arg1;
- (void)updateStatusBarForLockScreenTeardown;
- (void)_updateLegibilitySettings;
- (void)_updateTintingView;
- (void)_updateWallpaperEffectView;
- (void)_updateScrollingBehavior;
- (void)_updatePageContent;
- (void)_updatePageControl;
- (void)_updateStatusBar;
- (void)_updateDateTimeView;
- (void)_updateForegroundView;
- (float)_alphaForTransitionFromHidden:(BOOL)arg1 toHidden:(BOOL)arg2 timingFunction:(id)arg3;
- (struct CGPoint)_offsetForTransitionFromOffset:(struct CGPoint)arg1 toOffset:(struct CGPoint)arg2 timingFunction:(id)arg3;
- (float)_valueForTransitionInterval:(CDStruct_33193670)arg1 timingFunction:(id)arg2;
- (void)_updateBackground;
- (void)_updateSetupBehavior;
- (void)_updateNotificationsAndTodayViewBehavior;
- (void)_updateCameraBehavior;
- (void)_updateActiveBehaviorsForReason:(id)arg1;
- (void)_updateActiveAppearanceForReason:(id)arg1;
- (BOOL)_updateLocalAppearanceForPresentation;
- (id)_presentationForParticipant:(id)arg1;
- (id)_appearanceForParticipant:(id)arg1;
- (id)_behaviorForParticipant:(id)arg1;
- (void)_updateLocalAppearanceForRequester:(id)arg1 animationSettings:(id)arg2 actions:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)_handleEvent:(id)arg1;
- (BOOL)_handleEventType:(int)arg1;
- (unsigned int)_indexOfPageViewControllerClass:(Class)arg1;
- (unsigned int)_indexOfCameraPage;
- (unsigned int)_indexOfMainPage;
- (unsigned int)_indexOfTodayPage;
- (void)_updateVisibilityForPageViewControllers;
- (id)_eligiblePageViewControllers;
- (unsigned int)_pageCapabilities;
- (void)_removeAllowedPageViewController:(id)arg1;
- (void)_addVisiblePageViewController:(id)arg1;
- (void)_loadViewsForRestrictedPagesIfPossible;
- (id)pageViewControllerAtIndex:(unsigned int)arg1;
- (id)visiblePageViewController;
- (void)_presentPluginViewController:(id)arg1 withStyle:(int)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_dismissPluginViewController:(id)arg1 withStyle:(int)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_setPluginViewController:(id)arg1;
- (id)dashBoardView;
- (BOOL)_isSourceForHorizontalScrolling:(id)arg1;
- (void)mesaUnlockBehavior:(id)arg1 requestsUnlock:(id)arg2 withFeedback:(id)arg3;
- (void)mesaUnlockBehavior:(id)arg1 requestsFeedback:(id)arg2;
- (void)biometricEventMonitor:(id)arg1 handleBiometricEvent:(unsigned int)arg2;
- (BOOL)shouldAutoUnlockForSource:(int)arg1;
- (void)hostedAppWillRotateToInterfaceOrientation:(int)arg1;
- (id)hostedApp;
- (BOOL)isHostingAnApp;
- (BOOL)canHostAnApp;
- (void)updateNotificationSectionSettings:(id)arg1;
- (void)withdrawNotificationRequest:(id)arg1;
- (void)updateNotificationRequest:(id)arg1;
- (void)postNotificationRequest:(id)arg1;
- (id)slideControllerRequestedGrabberView:(id)arg1;
- (void)slideController:(id)arg1 requestedUnlockWithActionBlock:(CDUnknownBlockType)arg2;
- (void)slideController:(id)arg1 didUpdateWithApplication:(id)arg2;
- (BOOL)slideControllerShouldBeginSliding:(id)arg1;
- (int)slideControllerRequestedInterfaceOrientation:(id)arg1;
- (BOOL)pluginManager:(id)arg1 plugin:(id)arg2 handleAction:(id)arg3;
- (void)pluginManager:(id)arg1 displayedPluginDidChangeFromPlugin:(id)arg2 toPlugin:(id)arg3;
- (void)pluginManager:(id)arg1 displayedPluginDidUpdateAppearance:(id)arg2;
- (void)pluginManager:(id)arg1 activePluginDidChange:(id)arg2;
- (void)pluginManager:(id)arg1 willUnloadPlugin:(id)arg2;
- (void)pluginManager:(id)arg1 didLoadPlugin:(id)arg2;
- (void)screenFadeAnimationController:(id)arg1 setRelevantViewsHidden:(BOOL)arg2 forRequester:(id)arg3;
- (void)invalidateLockScreenActionContext;
- (id)lockScreenActionContext;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)relinquishHostingOfWallpaperOverlay;
- (void)startHostingWallpaperOverlay:(id)arg1;
- (void)irisWallpaperView:(id)arg1 didReplaceGestureRecognizer:(id)arg2 withGestureRecognizer:(id)arg3;
- (void)irisWallpaperViewIsInteractingDidChange:(id)arg1;
- (void)irisWallpaperViewPlaybackStateDidChange:(id)arg1;
- (void)transitionSource:(id)arg1 didEndWithContext:(CDStruct_6b1f2d91)arg2;
- (void)transitionSource:(id)arg1 didUpdateTransitionWithContext:(CDStruct_6b1f2d91)arg2;
- (void)transitionSource:(id)arg1 willBeginWithType:(int)arg2;
- (BOOL)isTransitioningInteractively;
@property(readonly, nonatomic, getter=isTransitioning) BOOL transitioning;
- (void)dashBoardLegibilityProviderDidUpdate:(id)arg1;
- (BOOL)wouldHandleButtonEvent:(id)arg1;
- (BOOL)handleEvent:(id)arg1;
- (BOOL)wantsLockScreenIdleTimer;
- (void)handleAction:(id)arg1 fromSender:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *presentationRegions;
@property(readonly, nonatomic) __weak id <UICoordinateSpace> presentationCoordinateSpace;
@property(readonly, nonatomic) int scrollingMode;
@property(readonly, nonatomic) int idleWarnMode;
@property(readonly, nonatomic) int idleTimerMode;
@property(readonly, nonatomic) int idleTimerDuration;
@property(readonly, nonatomic) unsigned int restrictedCapabilities;
@property(readonly, nonatomic) int notificationBehavior;
- (void)setLegibilitySettings:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *components;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) int backgroundStyle;
@property(readonly, copy, nonatomic) NSString *appearanceIdentifier;
@property(readonly, nonatomic) int presentationAltitude;
@property(readonly, nonatomic) int presentationTransition;
@property(readonly, nonatomic) int presentationPriority;
@property(readonly, nonatomic) int presentationType;
@property(readonly, nonatomic) int presentationStyle;
@property(nonatomic) __weak id <SBDashBoardViewPresenting> presenter;
- (void)updateAppearanceForController:(id)arg1 withAnimationSettings:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateAppearanceForController:(id)arg1;
- (void)updateBehaviorForController:(id)arg1;
@property(readonly, nonatomic) int participantState;
@property(readonly, copy, nonatomic) NSString *dashBoardIdentifier;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)noteMenuButtonUp;
- (void)noteMenuButtonDown;
- (BOOL)allowSystemGestureAtLocation:(struct CGPoint)arg1;
- (BOOL)isSystemGesturePermittedForPresentingController:(id)arg1;
- (BOOL)shouldShowLockStatusBarTime;
- (BOOL)_canHandleTransitionRequest:(id)arg1;
- (BOOL)handleTransitionRequest:(id)arg1;
- (void)activateCameraAnimated:(BOOL)arg1;
- (void)setShowingMediaControls:(BOOL)arg1;
- (BOOL)isShowingMediaControls;
- (void)emergencyDialerExitedWithError:(id)arg1;
- (void)exitEmergencyDialerAnimated:(BOOL)arg1;
- (void)launchEmergencyDialer;
- (BOOL)isMakingEmergencyCall;
- (BOOL)shouldUnlockUIOnKeyDownEvent;
- (BOOL)isShowingOverheatUI;
- (void)noteDeviceBlockedStatusUpdated;
- (void)launchInCallAlert;
- (void)disableLockScreenPluginWithContext:(id)arg1;
- (void)enableLockScreenPluginWithContext:(id)arg1;
- (id)activeLockScreenPlugin;
- (BOOL)isLockScreenPluginViewVisible;
- (BOOL)isMainPageVisible;
- (void)setInScreenOffMode:(BOOL)arg1 forAutoUnlock:(BOOL)arg2;
- (BOOL)isInScreenOffMode;
- (void)setBacklightLevel:(float)arg1;
- (BOOL)canBeDeactivatedForUIUnlockFromSource:(int)arg1;
- (void)finishUIUnlockFromSource:(int)arg1;
- (void)prepareForUIUnlock;
- (BOOL)canUIUnlockFromSource:(int)arg1;
- (void)setAuthenticated:(BOOL)arg1;
- (void)setPasscodeLockVisible:(BOOL)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)isPasscodeLockVisible;
- (void)_deactivateLayoutElement;
- (int)statusBarStyle;
- (BOOL)wantsTimeInStatusBar;
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
- (BOOL)handleHeadsetButtonPressed:(BOOL)arg1;
- (BOOL)handleVolumeDownButtonPressed;
- (BOOL)handleVolumeUpButtonPressed;
- (BOOL)handleLockButtonPressed;
- (BOOL)handleMenuButtonTap;
- (BOOL)suppressesControlCenter;
- (BOOL)suppressesNotificationCenter;
- (BOOL)suppressesBanners;
- (BOOL)managesOwnStatusBarAtActivation;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;
- (BOOL)_shouldDismissSwitcherOnActivation;
- (BOOL)hasTranslucentBackground;
- (void)deactivate;
- (void)didStackWithAlert:(id)arg1;
- (void)willStackWithAlert:(id)arg1;
- (BOOL)allowsStackingOfAlert:(id)arg1;
- (void)displayDidDisappear;
- (void)setView:(id)arg1;
- (void)displayWillAppear;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned int)supportedInterfaceOrientations;
- (int)preferredInterfaceOrientationForPresentation;
- (void)presentViewController:(id)arg1 withTransition:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentModalViewController:(id)arg1 withTransition:(int)arg2;
- (void)presentModalViewController:(id)arg1 fromRect:(struct CGRect)arg2 inView:(id)arg3 animated:(BOOL)arg4;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)shouldAutorotate;
- (void)_addBackgroundView;
- (void)_addWallpaperEffectView;
- (void)loadView;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (BOOL)isIdleTimerDisabledForReason:(id)arg1;
- (void)removeIdleTimerDisabledAssertionReason:(id)arg1;
- (void)addIdleTimerDisabledAssertionReason:(id)arg1;
- (void)unregisterExternalEventHandler:(id)arg1;
- (void)registerExternalEventHandler:(id)arg1;
- (void)unregisterExternalBehaviorProvider:(id)arg1;
- (void)externalBehaviorProviderBehaviorChanged:(id)arg1;
- (void)registerExternalBehaviorProvider:(id)arg1;
- (void)unregisterExternalAppearanceProvider:(id)arg1;
- (void)externalAppearanceProviderAppearanceChanged:(id)arg1;
- (void)registerExternalAppearanceProvider:(id)arg1;
- (void)activateTodayViewWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) id <SBAlertingNotificationDestination> notificationDestination;
- (id)initWithPageViewControllers:(id)arg1 mainPageViewController:(id)arg2 legibilityProvider:(id)arg3;
- (id)initWithPageViewControllers:(id)arg1 mainPageViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
