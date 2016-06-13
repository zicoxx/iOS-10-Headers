//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBFAuthenticationResponder.h"
#import "SBUIPluginControllerHost.h"

@class NSString, SBFUserAuthenticationController, SBUIPluginController;

@interface SBUIPluginHost : NSObject <SBFAuthenticationResponder, SBUIPluginControllerHost>
{
    SBUIPluginController *_plugin;
    BOOL _expectsFaceContact;
    BOOL _isPluginRunning;
    SBFUserAuthenticationController *_authController;
}

@property(retain, nonatomic, getter=_authController, setter=_setAuthController:) SBFUserAuthenticationController *authController; // @synthesize authController=_authController;
@property(retain) SBUIPluginController *pluginController; // @synthesize pluginController=_plugin;
- (void).cxx_destruct;
- (void)uiPlugin:(id)arg1 forceUpdateToInterfaceOrientation:(int)arg2 animated:(BOOL)arg3;
- (void)uiPluginUserEventOccurred:(id)arg1;
- (BOOL)uiPlugin:(id)arg1 openURL:(id)arg2;
- (BOOL)uiPlugin:(id)arg1 launchApplicationWithBundleID:(id)arg2 openURL:(id)arg3 allowDismissal:(BOOL)arg4;
- (BOOL)uiPlugin:(id)arg1 launchApplicationWithBundleID:(id)arg2 openURL:(id)arg3;
- (void)uiPlugin:(id)arg1 setExpectsFaceContact:(BOOL)arg2;
- (BOOL)uiPluginExpectsFaceContact:(id)arg1;
- (void)uiPlugin:(id)arg1 isNowRunning:(BOOL)arg2;
- (BOOL)uiPluginWantsActivation:(id)arg1 forEvent:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)_uiPluginAttemptDeviceUnlockWithPassword:(id)arg1;
- (BOOL)uiPluginAttemptDeviceUnlock:(id)arg1 withPassword:(id)arg2 lockViewOwner:(id)arg3;
- (void)uiPluginWantsDismissal:(id)arg1 withAnimation:(BOOL)arg2;
- (void)handleInvalidAuthenticationRequest:(id)arg1;
- (void)handleFailedAuthenticationRequest:(id)arg1 error:(id)arg2;
- (void)handleSuccessfulAuthenticationRequest:(id)arg1;
- (BOOL)pluginSuppressesNotifications;
- (BOOL)pluginExpectsFaceContact;
- (BOOL)pluginWantsScreenDimInterval:(double *)arg1;
- (BOOL)pluginWantsInterfaceOrientation:(int *)arg1;
- (BOOL)pluginHandledButtonTapEventFromSource:(int)arg1;
- (BOOL)pluginHandledButtonUpEventFromSource:(int)arg1;
- (BOOL)pluginHandledButtonDownEventFromSource:(int)arg1;
- (BOOL)pluginHandledPasscodeUnlockWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissPluginForEvent:(int)arg1;
- (void)_dismissUIPlugin:(id)arg1 animated:(BOOL)arg2;
- (void)cancelPendingPluginActivationEvent:(int)arg1;
- (void)preparePluginForActivationEvent:(int)arg1 eventSource:(int)arg2 afterInterval:(double)arg3;
- (BOOL)pluginWantsActivationEvent:(int)arg1 eventSource:(int)arg2 interval:(double *)arg3;
- (BOOL)activatePluginForEvent:(int)arg1 eventSource:(int)arg2 context:(void *)arg3;
@property(readonly) BOOL isPluginRunning;
@property(readonly) BOOL isPluginVisible;
- (void)_notePluginVisibilityDidChange;
- (void)_restoreOrientation;
- (void)_remoteLocked:(id)arg1;
- (void)_deviceBlocked:(id)arg1;
- (void)_uiLocked:(id)arg1;
- (void)_noteDeviceLockedOrBlocked;
- (void)_pluginWillUnload:(id)arg1;
- (void)_pluginDidLoad:(id)arg1;
- (void)_removeObserversForPlugin:(id)arg1;
- (BOOL)pluginSupportedAndEnabled;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
