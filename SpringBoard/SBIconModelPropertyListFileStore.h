//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBIconModelStore.h"

@class NSString, NSURL;

@interface SBIconModelPropertyListFileStore : NSObject <SBIconModelStore>
{
    NSURL *_currentIconStateURL;
    NSURL *_desiredIconStateURL;
}

@property(retain, nonatomic) NSURL *desiredIconStateURL; // @synthesize desiredIconStateURL=_desiredIconStateURL;
@property(retain, nonatomic) NSURL *currentIconStateURL; // @synthesize currentIconStateURL=_currentIconStateURL;
- (void).cxx_destruct;
- (BOOL)_save:(id)arg1 url:(id)arg2 error:(id *)arg3;
- (BOOL)_delete:(id)arg1 error:(id *)arg2;
- (id)_load:(id)arg1 error:(id *)arg2;
- (id)loadDesiredIconState:(id *)arg1;
- (id)loadCurrentIconState:(id *)arg1;
- (BOOL)deleteDesiredIconState:(id *)arg1;
- (BOOL)deleteCurrentIconState:(id *)arg1;
- (BOOL)saveDesiredIconState:(id)arg1 error:(id *)arg2;
- (BOOL)saveCurrentIconState:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

