//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBUISceneDelegate.h"
#import "SBLoginAppSceneHoster.h"

@class FBUIScene, FBUISceneWorkspace, NSString, SBApplication, SBSUILoginUISceneClientSettingsDiffInspector, UIView;

@interface SBLoginAppSceneHoster : NSObject <FBUISceneDelegate, SBLoginAppSceneHoster>
{
    FBUISceneWorkspace *_sceneWorkspace;
    FBUIScene *_loginScene;
    int _cachedActivationOrientationForInitialClientSettings;
    SBSUILoginUISceneClientSettingsDiffInspector *_appClientSettingsDiffInspector;
    BOOL _deferHIDEvents;
    BOOL _hidEventDeferralsInstalled;
    id <SBLoginAppSceneHosterDelegate> _delegate;
}

@property(nonatomic) __weak id <SBLoginAppSceneHosterDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL deferHIDEvents; // @synthesize deferHIDEvents=_deferHIDEvents;
- (void).cxx_destruct;
- (void)scene:(id)arg1 didDeactivateWithError:(id)arg2;
- (void)scene:(id)arg1 willActivateWithTransitionContext:(id)arg2;
- (BOOL)scene:(id)arg1 handleIncomingActions:(id)arg2;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2;
- (void)scene:(id)arg1 configureInitialClientSettings:(id)arg2;
- (void)_updateHIDEventDeferralsIfNecessary;
- (id)_appClientSettingsDiffInspector;
@property(readonly, nonatomic) SBApplication *hostedApp; // @dynamic hostedApp;
@property(readonly, nonatomic) NSString *hostedSceneIdentifier;
@property(readonly, nonatomic) NSString *hostedAppBundleID;
@property(readonly, nonatomic) UIView *contentView;
- (void)updateSettingsWithTransitionBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)killLoginApp;
- (void)launchLoginAppWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

