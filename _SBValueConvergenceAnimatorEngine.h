//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CADisplayLink, NSMutableSet;

@interface _SBValueConvergenceAnimatorEngine : NSObject
{
    NSMutableSet *_animators;
    CADisplayLink *_displayLink;
    NSMutableSet *_finishedAnimators;
}

+ (id)sharedEngine;
- (void).cxx_destruct;
- (void)_onDisplayLink:(id)arg1;
- (void)_tearDownDisplayLink;
- (void)_ensureDisplayLink;
- (void)_updateDisplayLink;
- (BOOL)isRunningAnimator:(id)arg1;
- (void)stopAnimator:(id)arg1;
- (void)updateAnimator:(id)arg1;
- (void)startAnimator:(id)arg1;
- (id)init;

@end

