//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardParticipating.h"

@class NCNotificationAction, NCNotificationRequest, NCNotificationSectionSettings, NSDictionary, NSSet, NSString;

@protocol SBDashBoardNotificationDispatcher <SBDashBoardParticipating>
- (NCNotificationSectionSettings *)destination:(id <SBDashBoardNotificationDestination>)arg1 settingsForSectionIdentifier:(NSString *)arg2;
- (id <SBDashBoardNotificationAlertingController>)alertingControllerForDestination:(id <SBDashBoardNotificationDestination>)arg1;
- (void)destination:(id <SBDashBoardNotificationDestination>)arg1 clearNotificationRequests:(NSSet *)arg2;
- (void)destination:(id <SBDashBoardNotificationDestination>)arg1 performAction:(NCNotificationAction *)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withParameters:(NSDictionary *)arg4;
@end

