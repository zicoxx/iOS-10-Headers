//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBUIBannerContext;

@protocol SBUIBannerTargetBase <NSObject>
@property(readonly, nonatomic) int bannerTargetIdiom;
@property(readonly, nonatomic) void *bannerTargetIdentifier;
- (void)removeCachedBannerForContext:(SBUIBannerContext *)arg1;
- (void)cacheBannerForContext:(SBUIBannerContext *)arg1 withCompletion:(void (^)(void))arg2;
- (void)dismissCurrentBannerContextForSource:(id <SBUIBannerSource>)arg1;
- (SBUIBannerContext *)currentBannerContextForSource:(id <SBUIBannerSource>)arg1;
- (void)signalSource:(id <SBUIBannerSource>)arg1;
- (BOOL)isShowingModalBanner;
- (void)modallyPresentBannerWithContext:(SBUIBannerContext *)arg1;
- (void)unregisterSource:(id <SBUIBannerSource>)arg1;
- (void)registerSource:(id <SBUIBannerSource>)arg1;
@end

