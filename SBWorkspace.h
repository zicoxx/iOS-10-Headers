//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBSDisplay, FBWorkspaceEventQueue, NSHashTable;

@interface SBWorkspace : NSObject
{
    FBSDisplay *_display;
    FBWorkspaceEventQueue *_eventQueue;
    NSHashTable *_slaves;
}

+ (id)mainWorkspace;
@property(readonly, nonatomic) FBWorkspaceEventQueue *eventQueue; // @synthesize eventQueue=_eventQueue;
@property(readonly, nonatomic) FBSDisplay *display; // @synthesize display=_display;
- (void).cxx_destruct;
- (id)_slaveTransactionsForTransitionRequest:(id)arg1;
- (void)removeSlave:(id)arg1;
- (void)addSlave:(id)arg1;
- (BOOL)_executeTransitionRequest:(id)arg1 options:(unsigned int)arg2 validator:(CDUnknownBlockType)arg3;
- (id)transactionForTransitionRequest:(id)arg1;
- (BOOL)executeTransitionRequest:(id)arg1 withValidator:(CDUnknownBlockType)arg2;
- (BOOL)executeTransitionRequest:(id)arg1;
- (BOOL)requestTransitionWithOptions:(unsigned int)arg1 builder:(CDUnknownBlockType)arg2 validator:(CDUnknownBlockType)arg3;
- (BOOL)requestTransitionWithBuilder:(CDUnknownBlockType)arg1;
- (id)createRequestForApplicationActivation:(id)arg1 options:(unsigned int)arg2;
- (id)createRequestWithOptions:(unsigned int)arg1;
- (id)initWithDisplay:(id)arg1 eventQueue:(id)arg2;
- (id)init;

@end

