//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, SBCombinationHardwareButtonActions, SBHomeHardwareButton, SBLockHardwareButton, SBScreenshotGestureRecognizer;

@interface SBCombinationHardwareButton : NSObject <UIGestureRecognizerDelegate>
{
    SBCombinationHardwareButtonActions *_buttonActions;
    SBScreenshotGestureRecognizer *_screenshotGestureRecognizer;
    SBHomeHardwareButton *_homeHardwareButton;
    SBLockHardwareButton *_lockHardwareButton;
}

@property(nonatomic) __weak SBLockHardwareButton *lockHardwareButton; // @synthesize lockHardwareButton=_lockHardwareButton;
@property(nonatomic) __weak SBHomeHardwareButton *homeHardwareButton; // @synthesize homeHardwareButton=_homeHardwareButton;
@property(retain, nonatomic) SBScreenshotGestureRecognizer *screenshotGestureRecognizer; // @synthesize screenshotGestureRecognizer=_screenshotGestureRecognizer;
@property(retain, nonatomic) SBCombinationHardwareButtonActions *buttonActions; // @synthesize buttonActions=_buttonActions;
- (void).cxx_destruct;
- (void)screenshotGesture:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_configureGestureRecognizers;
- (id)initWithScreenshotGestureRecognizer:(id)arg1 homeHardwareButton:(id)arg2 lockHardwareButton:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

