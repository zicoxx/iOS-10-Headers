//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardPageViewController.h"

#import "SBDashBoardPageViewControllerProtocol.h"
#import "SBDashBoardTodayViewControllerDelegate.h"

@class NSArray, NSSet, NSString, SBDashBoardAppearance, SBDashBoardBehavior, SBDashBoardTodayViewController, UIColor, _UILegibilitySettings;

@interface SBDashBoardTodayPageViewController : SBDashBoardPageViewController <SBDashBoardTodayViewControllerDelegate, SBDashBoardPageViewControllerProtocol>
{
    SBDashBoardTodayViewController *_todayViewController;
}

+ (BOOL)isAvailableForConfiguration;
+ (unsigned int)requiredCapabilities;
@property(retain, nonatomic) SBDashBoardTodayViewController *todayViewController; // @synthesize todayViewController=_todayViewController;
- (void).cxx_destruct;
- (BOOL)handleEvent:(id)arg1;
- (void)dashBoardTodayViewController:(id)arg1 contentViewsDidChange:(id)arg2;
- (void)numberOfWidgetsChanged:(id)arg1;
- (id)displayLayoutElementIdentifier;
- (void)aggregateBehavior:(id)arg1;
- (void)aggregateAppearance:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy, nonatomic) SBDashBoardAppearance *activeAppearance;
@property(readonly, copy, nonatomic) SBDashBoardBehavior *activeBehavior;
@property(readonly, copy, nonatomic) NSString *appearanceIdentifier;
@property(readonly, nonatomic) BOOL authenticated;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) int backgroundStyle;
@property(readonly, copy, nonatomic) NSSet *components;
@property(readonly, copy, nonatomic) NSString *dashBoardIdentifier;
@property(nonatomic) __weak id <SBDashBoardViewControllerProtocol> dashBoardViewController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) int idleTimerDuration;
@property(readonly, nonatomic) int idleTimerMode;
@property(readonly, nonatomic) int idleWarnMode;
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(readonly, nonatomic) int notificationBehavior;
@property(readonly, nonatomic) int participantState;
@property(readonly, nonatomic) int presentationAltitude;
@property(readonly, nonatomic) __weak id <UICoordinateSpace> presentationCoordinateSpace;
@property(readonly, nonatomic) int presentationPriority;
@property(readonly, copy, nonatomic) NSArray *presentationRegions;
@property(readonly, nonatomic) int presentationStyle;
@property(readonly, nonatomic) int presentationTransition;
@property(readonly, nonatomic) int presentationType;
@property(nonatomic) __weak id <SBDashBoardViewPresenting> presenter;
@property(readonly, nonatomic) unsigned int restrictedCapabilities;
@property(readonly, nonatomic) int scrollingMode;
@property(readonly) Class superclass;
@property(nonatomic, getter=isTransitioning) BOOL transitioning;

@end

