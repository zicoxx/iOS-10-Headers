//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIGestureRecognizer.h"

#import "UIInteractionProgressObserver.h"

@class NSString, UIForceStageInteractionProgress;

@interface SBForceStageInteractionGestureRecognizer : UIGestureRecognizer <UIInteractionProgressObserver>
{
    BOOL _receivedFirstInteractionProgressUpdate;
    UIForceStageInteractionProgress *_forceStageInteractionProgress;
}

@property(readonly, nonatomic) UIForceStageInteractionProgress *forceStageInteractionProgress; // @synthesize forceStageInteractionProgress=_forceStageInteractionProgress;
- (void).cxx_destruct;
- (void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
@property(readonly, nonatomic) float interactionProgress;
- (void)dealloc;
- (id)initWithForceStageInteractionProgress:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

