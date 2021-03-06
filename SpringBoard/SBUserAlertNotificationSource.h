//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NCNotificationSource.h"
#import "SBAlertItemPresenter.h"

@class NCNotificationDispatcher, NSString;

@interface SBUserAlertNotificationSource : NSObject <NCNotificationSource, SBAlertItemPresenter>
{
    NCNotificationDispatcher *_dispatcher;
}

@property(retain, nonatomic) NCNotificationDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
- (void).cxx_destruct;
- (void)dismissAlertItem:(id)arg1 animated:(BOOL)arg2;
- (void)presentAlertItem:(id)arg1 animated:(BOOL)arg2;
- (BOOL)canPresentMultipleAlertItemsSimultaneously;
- (id)initWithDispatcher:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

