//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIAnimationController.h"

@interface SBDismissOverlaysAnimationController : SBUIAnimationController
{
    unsigned int _dismissOptions;
}

+ (unsigned int)_overlayToDismissForOptions:(unsigned int)arg1;
+ (BOOL)willDismissOverlaysForDismissOptions:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int dismissOptions; // @synthesize dismissOptions=_dismissOptions;
- (id)animationSettings;
- (void)_startAnimation;
- (id)initWithTransitionContextProvider:(id)arg1 options:(unsigned int)arg2;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

