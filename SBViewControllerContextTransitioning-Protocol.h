//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBViewControllerPercentCompletionReporting.h"
#import "SBViewControllerReversibleTransitioning.h"
#import "SBViewControllerTransitionRestartedReporting.h"
#import "UIViewControllerContextTransitioning.h"

@protocol SBViewControllerContextTransitioning <UIViewControllerContextTransitioning, SBViewControllerReversibleTransitioning, SBViewControllerPercentCompletionReporting, SBViewControllerTransitionRestartedReporting>
- (BOOL)wasPreviousPhaseInteractive;
- (BOOL)initiallyInteractive;
- (void)restartTransition;
- (BOOL)supportsRestarting;
- (BOOL)supportsCancelling;
@end

