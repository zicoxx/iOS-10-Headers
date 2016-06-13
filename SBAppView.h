//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FBSceneMonitorDelegate.h"
#import "SBAppViewHostRequester.h"
#import "SBMainAppSwitcherPageContentView.h"

@class FBSDisplay, FBSceneMonitor, NSString, SBAppViewStatusBarDescriptor, SBApplication, SBSceneViewAppIconView, UIApplicationSceneClientSettingsDiffInspector, UIView<FBSceneHostView>, UIView<SBAppViewBackgroundView>;

@interface SBAppView : UIView <FBSceneMonitorDelegate, SBAppViewHostRequester, SBMainAppSwitcherPageContentView>
{
    SBApplication *_application;
    struct CGSize _referenceSize;
    int _orientation;
    FBSDisplay *_display;
    int _displayMode;
    int _effectiveDisplayMode;
    unsigned int _options;
    FBSceneMonitor *_sceneMonitor;
    UIApplicationSceneClientSettingsDiffInspector *_clientSettingsInspector;
    BOOL _invalidated;
    int _contextHostingPriority;
    NSString *_contextHostingRequester;
    UIView *_clientPlaceholderView;
    UIView *_staticContentView;
    UIView *_sceneSnapshotView;
    UIView<FBSceneHostView> *_contextHostView;
    UIView *_crossfadeView;
    UIView<SBAppViewBackgroundView> *_backgroundView;
    SBSceneViewAppIconView *_cachedResizeIconView;
    SBAppViewStatusBarDescriptor *_statusBarDescriptor;
}

+ (id)defaultDisplayModeAnimationFactory;
@property(retain, nonatomic) SBAppViewStatusBarDescriptor *statusBarDescriptor; // @synthesize statusBarDescriptor=_statusBarDescriptor;
@property(retain, nonatomic) SBSceneViewAppIconView *cachedResizeIconView; // @synthesize cachedResizeIconView=_cachedResizeIconView;
@property(retain, nonatomic) UIView *sceneSnapshotView; // @synthesize sceneSnapshotView=_sceneSnapshotView;
@property(retain, nonatomic) UIView<SBAppViewBackgroundView> *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) unsigned int displayModeOptions; // @synthesize displayModeOptions=_options;
@property(readonly, nonatomic) int effectiveDisplayMode; // @synthesize effectiveDisplayMode=_effectiveDisplayMode;
@property(readonly, nonatomic) int displayMode; // @synthesize displayMode=_displayMode;
@property(readonly, nonatomic) int contextHostingPriority; // @synthesize contextHostingPriority=_contextHostingPriority;
@property(readonly, copy, nonatomic) NSString *contextHostingRequester; // @synthesize contextHostingRequester=_contextHostingRequester;
@property(readonly, nonatomic) FBSDisplay *display; // @synthesize display=_display;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) struct CGSize referenceSize; // @synthesize referenceSize=_referenceSize;
@property(readonly, nonatomic) SBApplication *application; // @synthesize application=_application;
- (void).cxx_destruct;
- (int)appViewRequesterPriority:(id)arg1;
- (id)appViewRequesterIdentifier:(id)arg1;
- (void)_activationStateDidChange:(id)arg1;
- (void)_recheckLiveContentDependencies;
- (void)_hotSwapLiveSnapshotView;
- (void)_hotSwapStaticContentView;
- (void)_updateStatusBarVisibilityForContextHostView;
- (void)_updateStatusBarVisibility;
- (void)_configureContextHostView;
- (void)updateReferenceSize:(struct CGSize)arg1 andOrientation:(int)arg2;
- (void)updateSceneSnapshotViewOnQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_clearSnapshotViews;
- (void)_makeSceneContentSnapshotViewOnBackgroundQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_sceneContentSnapshotView;
- (void)makeLiveSnapshotViewOnBackgroundQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)liveSnapshotView;
- (BOOL)_hasLiveContent;
- (void)_configureSceneSnapshotView;
- (BOOL)_shouldLoadInterfaceFileBasedStaticContent;
- (id)_launchInterfaceView;
- (id)_snapshotOrDefaultImageView;
- (struct CGSize)_naturalSize;
- (void)_configureStaticContentView;
- (void)_updateBackgroundViewTinting;
- (id)_newDefaultBackgroundView;
- (void)_crossfadeFromDisplayMode:(int)arg1 showingView:(id)arg2 toDisplayMode:(int)arg3 showingView:(id)arg4 options:(unsigned int)arg5 withAnimationFactory:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (id)_viewForDisplayMode:(int)arg1;
- (int)_bestDisplayModeLessThanMode:(int)arg1;
- (void)_configureViewForEffectiveDisplayMode:(int)arg1;
- (void)_setEffectiveDisplayMode:(int)arg1 options:(unsigned int)arg2 withAnimationFactory:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (float)cornerRadius;
- (void)setCornerRadius:(float)arg1;
- (void)sceneMonitor:(id)arg1 sceneClientSettingsDidChangeWithDiff:(id)arg2 transitionContext:(id)arg3;
- (void)sceneMonitor:(id)arg1 sceneWasDestroyed:(id)arg2;
- (void)sceneMonitor:(id)arg1 sceneWasCreated:(id)arg2;
- (void)_disableContextHosting;
- (void)_enableContextHosting;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setForcesStatusBarHidden:(BOOL)arg1;
- (BOOL)_forcesStatusBarHidden;
- (int)setDisplayMode:(int)arg1 options:(unsigned int)arg2 withAnimationFactory:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setDisplayMode:(int)arg1 withAnimationFactory:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setPlaceholderView:(id)arg1 withAnimationFactory:(id)arg2;
@property(retain, nonatomic) UIView *placeholderView;
- (void)invalidate;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithApp:(id)arg1 referenceSize:(struct CGSize)arg2 orientation:(int)arg3 display:(id)arg4 hostRequester:(id)arg5;
- (id)initWithApp:(id)arg1 referenceSize:(struct CGSize)arg2 orientation:(int)arg3 display:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
