//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVController, NSHashTable, NSMapTable, NSMutableArray, NSMutableDictionary, NSTimer, SBUISound, _UISystemSoundPlayer;

@interface SBSoundController : NSObject
{
    NSMutableDictionary *_soundsBySystemSoundIDs;
    AVController *_avController;
    SBUISound *_avControllerSound;
    NSTimer *_avControllerMaxDurationTimer;
    id _avControllerObserver;
    NSMapTable *_toneAlertsBySounds;
    NSMapTable *_soundsByToneAlerts;
    NSHashTable *_observers;
    unsigned int _pendingCallbacks;
    NSMutableArray *_pendedCallbacks;
    _UISystemSoundPlayer *_feedbackEventBehavior;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_enqueueCallback:(CDUnknownBlockType)arg1;
- (void)_endPendingCallbacksBlock;
- (void)_beginPendingCallbacksBlock;
- (void)_soundDidFinishPlaying:(id)arg1;
- (void)_soundDidStartPlaying:(id)arg1;
- (void)_ringerStateChanged:(id)arg1;
- (BOOL)_playFeedback:(id)arg1;
- (BOOL)_playToneAlert:(id)arg1;
- (BOOL)_playAVItem:(id)arg1 forSound:(id)arg2;
- (BOOL)_playSong:(id)arg1;
- (BOOL)_playRingtone:(id)arg1;
- (BOOL)_playSystemSound:(id)arg1;
- (void)_cleanupToneAlertForSound:(id)arg1 andKill:(BOOL)arg2;
- (void)_killAVController;
- (void)_maxDurationReachedForAVController;
- (void)_cleanupSystemSound:(unsigned long)arg1 andKill:(BOOL)arg2;
- (BOOL)handleVolumeButtonDownEvent;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (BOOL)stopAllSounds;
- (BOOL)stopSound:(id)arg1;
- (BOOL)playSound:(id)arg1 environments:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)playSoundWithDefaultEnvironment:(id)arg1;
- (BOOL)isPlaying:(id)arg1;
- (BOOL)isPlayingAnySound;
- (void)dealloc;
- (id)init;

@end

