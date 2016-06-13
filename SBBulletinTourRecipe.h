//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBTestRecipe.h"

@class NSArray, NSString;

@interface SBBulletinTourRecipe : NSObject <SBTestRecipe>
{
    NSArray *_tour;
    unsigned int _currentStop;
    BOOL _failedToLoadTour;
}

+ (id)title;
- (void).cxx_destruct;
- (void)loadTourFromPrefsIfNecessary;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

