//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBIdleTimer.h"
#import "SBUserEventInterfaceObserver.h"

@class NSString, SBUserEventInterface;

@interface SBManualIdleTimer : NSObject <SBUserEventInterfaceObserver, SBIdleTimer>
{
    id <SBIdleTimerDelegate> _delegate;
    SBUserEventInterface *_userEventTimer;
    double _interval;
}

@property(nonatomic) __weak id <SBIdleTimerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)isEqualToTimer:(id)arg1;
- (void)reset;
- (void)userEventTimerPresenceTriggered:(id)arg1;
- (void)userEventTimerPresenceExpired:(id)arg1;
- (void)userEventTimerUserUnidled:(id)arg1;
- (void)userEventTimerUserIdled:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
- (id)initWithInterval:(double)arg1 userEventInterface:(id)arg2;
- (id)initWithInterval:(double)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
