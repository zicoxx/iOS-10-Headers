//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString, NSURL, NSUUID;

@interface SBBestAppSuggestion : NSObject
{
}

- (BOOL)isLocationPredictionFromSource:(unsigned int)arg1;
- (BOOL)isLocationPredictionOfType:(unsigned int)arg1;
- (BOOL)isArrivedAtHomePrediction;
- (BOOL)isArrivedAtWorkPrediction;
- (BOOL)isFirstWakePrediction;
- (BOOL)isCarPlayPrediction;
- (BOOL)isBluetoothAudioPrediction;
- (BOOL)isBluetoothPrediction;
- (BOOL)isHeadphonesPrediction;
- (BOOL)isPrediction;
- (BOOL)isEligibleForLockScreen;
- (BOOL)isLocationBasedSuggestion;
- (BOOL)isSiriSuggestion;
- (BOOL)launchURLRequiresInboxCopy;
- (BOOL)isLocallyGeneratedSuggestion;
- (BOOL)isCallContinuitySuggestion;
- (BOOL)isOpenURLSuggestion;
- (BOOL)isNotificationSuggestion;
@property(readonly, copy) NSString *suggestedLocationName;
@property(readonly, copy) NSURL *launchURL;
@property(readonly, copy) NSString *originatingBundleIdentifier;
@property(readonly, copy) NSString *originatingDeviceType;
@property(readonly, copy) NSString *originatingDeviceName;
@property(readonly, copy) NSString *originatingDeviceIdentifier;
@property(readonly, copy) NSDate *lastUpdateTime;
@property(readonly, copy) NSString *activityType;
@property(readonly, copy) NSString *bundleIdentifier;
@property(readonly, copy) NSUUID *uniqueIdentifier;

@end

