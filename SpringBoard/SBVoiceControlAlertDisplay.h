//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertView.h"

#import "SUICFlamesViewDelegate.h"
#import "SiriUISuggestionsViewDelegate.h"
#import "VSRecognitionSessionDelegate.h"
#import "VSSpeechSynthesizerDelegate.h"

@class AVController, NSDictionary, NSString, SUICFlamesView, SiriUISuggestionsView, UILabel, UIView, VSRecognitionSession, _UIBackdropView;

@interface SBVoiceControlAlertDisplay : SBAlertView <VSRecognitionSessionDelegate, VSSpeechSynthesizerDelegate, SUICFlamesViewDelegate, SiriUISuggestionsViewDelegate>
{
    VSRecognitionSession *_session;
    BOOL _wasRecognizing;
    BOOL _didConfigureRouting;
    _UIBackdropView *_backdrop;
    UIView *_contentView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    SUICFlamesView *_flamesView;
    SiriUISuggestionsView *_suggestionsView;
    AVController *_avController;
    int _keywordCount;
    int _startingKeywordIndex;
    NSDictionary *_locStrings;
    BOOL _didDismiss;
    BOOL _awaitingButtonRelease;
    BOOL _isBecomingVisible;
    CDUnknownBlockType _postSoundBlock;
}

@property(copy, nonatomic) CDUnknownBlockType postSoundBlock; // @synthesize postSoundBlock=_postSoundBlock;
- (void).cxx_destruct;
- (float)audioLevelForFlamesView:(id)arg1;
- (id)nextSuggestionsForSuggestionsView:(id)arg1 maxSuggestions:(unsigned int)arg2;
- (void)_keywordsChanged;
- (void)recognitionSession:(id)arg1 didFinishSpeakingFeedbackStringWithError:(id)arg2;
- (void)_speakText:(id)arg1;
- (void)_speakFeedbackText;
- (void)_performConfirmationAction;
- (void)_continueWithRecognitionAction;
- (id)recognitionSession:(id)arg1 openURL:(id)arg2;
- (id)_openVideoURL:(id)arg1;
- (id)_openTelURL:(id)arg1;
- (id)_openURLCore:(id)arg1;
- (void)recognitionSession:(id)arg1 didCompleteActionWithError:(id)arg2;
- (void)_mediaPlayerDied;
- (void)_performNoMatchFound;
- (void)recognitionSessionDidBeginAction:(id)arg1;
- (void)_continueRecognitionAction;
- (BOOL)recognitionSessionWillBeginAction:(id)arg1;
- (void)_resetSession;
- (void)_startSession;
- (void)_playSound:(unsigned long)arg1 synchronously:(BOOL)arg2;
- (BOOL)_attemptPlaySound:(unsigned long)arg1 synchronously:(BOOL)arg2;
- (void)_performSoundCompletionAction;
- (void)_configureRoutingIfNecessary;
- (void)_pickedRouteChanged:(id)arg1;
- (id)_desiredRouteDictionary;
- (void)handleHeadsetButtonUpFromActivation:(BOOL)arg1;
- (void)handleButtonUpCancel;
- (void)_dismissSlightlyLater;
- (void)dismiss;
- (void)_invalidateRouting;
- (void)alertWillBeDismissed;
- (void)alertDisplayWillBecomeVisible;
- (void)_setFeedbackVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setStatusText:(id)arg1;
- (void)setTitleText:(id)arg1;
- (id)_localizedStringForKey:(id)arg1;
- (BOOL)alphanumericKeyboard;
- (void)dealloc;
- (BOOL)_wasTriggeredByMenu;
- (float)_subtitleBaseline;
- (float)_titleBaseline;
- (id)initWithFrame:(struct CGRect)arg1 session:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

