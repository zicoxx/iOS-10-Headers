//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBAlertManagerObserver.h"
#import "UIGestureRecognizerDelegate.h"

@class BKSButtonDefinition, NSMutableDictionary, NSString, SBHomeHardwareButtonActions, SBHomeHardwareButtonGestureRecognizerConfiguration, UIGestureRecognizer;

@interface SBHomeHardwareButton : NSObject <UIGestureRecognizerDelegate, SBAlertManagerObserver>
{
    BOOL _longPressDidOccur;
    id <SBNotificationDestinationHomeButtonPressHandler> _bannerDestination;
    id <SBNotificationDestinationHomeButtonPressHandler> _notificationCenterDestination;
    SBHomeHardwareButtonActions *_buttonActions;
    SBHomeHardwareButtonGestureRecognizerConfiguration *_gestureRecognizerConfiguration;
    UIGestureRecognizer *_screenshotGestureRecognizer;
    int _maximumPressCount;
    int _maximumTapCount;
    NSMutableDictionary *_emulatedPerSenderDownCount;
    BKSButtonDefinition *_buttonDefinition;
    double _longPressDurationOverride;
}

@property(retain, nonatomic) BKSButtonDefinition *buttonDefinition; // @synthesize buttonDefinition=_buttonDefinition;
@property(retain, nonatomic) NSMutableDictionary *emulatedPerSenderDownCount; // @synthesize emulatedPerSenderDownCount=_emulatedPerSenderDownCount;
@property(nonatomic) BOOL longPressDidOccur; // @synthesize longPressDidOccur=_longPressDidOccur;
@property(nonatomic) double longPressDurationOverride; // @synthesize longPressDurationOverride=_longPressDurationOverride;
@property(nonatomic) int maximumTapCount; // @synthesize maximumTapCount=_maximumTapCount;
@property(nonatomic) int maximumPressCount; // @synthesize maximumPressCount=_maximumPressCount;
@property(nonatomic) __weak UIGestureRecognizer *screenshotGestureRecognizer; // @synthesize screenshotGestureRecognizer=_screenshotGestureRecognizer;
@property(retain, nonatomic) SBHomeHardwareButtonGestureRecognizerConfiguration *gestureRecognizerConfiguration; // @synthesize gestureRecognizerConfiguration=_gestureRecognizerConfiguration;
@property(retain, nonatomic) SBHomeHardwareButtonActions *buttonActions; // @synthesize buttonActions=_buttonActions;
@property(nonatomic) __weak id <SBNotificationDestinationHomeButtonPressHandler> notificationCenterDestination; // @synthesize notificationCenterDestination=_notificationCenterDestination;
@property(nonatomic) __weak id <SBNotificationDestinationHomeButtonPressHandler> bannerDestination; // @synthesize bannerDestination=_bannerDestination;
- (void).cxx_destruct;
- (BOOL)_isMenuDoublePressAllowed:(id *)arg1;
- (BOOL)_isMenuDoublePressDisabled;
- (void)_cancelGestureRecognizer:(id)arg1;
- (void)singlePressHint:(id)arg1;
- (void)alertManager:(id)arg1 didChangeTopAlertFromAlert:(id)arg2 toAlert:(id)arg3;
- (void)doubleTapUp:(id)arg1;
- (void)triplePressUp:(id)arg1;
- (void)doublePressUp:(id)arg1;
- (void)doublePressDown:(id)arg1;
- (BOOL)_processDoubleDownAndDoubleUpSimultaneously;
- (void)longPress:(id)arg1;
- (void)singlePressUp:(id)arg1;
- (void)acceleratedSinglePressUp:(id)arg1;
- (void)_singlePressUp:(id)arg1;
- (void)buttonDown:(id)arg1;
- (BOOL)emulateHomeButtonEventsIfNeeded:(struct __IOHIDEvent *)arg1;
- (void)_terminateHomeButtonEventAtCount:(int)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)_hintRecognizerShouldBegin;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)cancelLongPress;
- (void)performAfterMenuButtonUpIsHandledUsingBlock:(CDUnknownBlockType)arg1;
- (void)performWhenMenuButtonIsUpUsingBlock:(CDUnknownBlockType)arg1;
- (void)_reconfigureGestureRecognizersForNewMaximumPressCount:(int)arg1 oldMaximumPressCount:(int)arg2;
- (void)_reconfigureGestureRecognizersForNewMaximumTapCount:(int)arg1 oldMaximumTapCount:(int)arg2;
- (void)_createGestureRecognizersWithConfiguration:(id)arg1;
- (void)setLongPressDuration:(double)arg1;
- (void)_reconfigureHomeButton;
- (void)_startObservingReconfigurationTriggers;
- (id)initWithScreenshotGestureRecognizer:(id)arg1 buttonActions:(id)arg2 gestureRecognizerConfiguration:(id)arg3;
- (id)initWithScreenshotGestureRecognizer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

