//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBViewControllerAnimatedTransitioning.h"

@class NSString, SBUIAnimationController;

@interface SBUIAnimationControllerAnimator : NSObject <SBViewControllerAnimatedTransitioning>
{
    SBUIAnimationController *_animationController;
}

@property(readonly, nonatomic) __weak SBUIAnimationController *animationController; // @synthesize animationController=_animationController;
- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (id)transitionAnimationFactory:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithAnimationController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

