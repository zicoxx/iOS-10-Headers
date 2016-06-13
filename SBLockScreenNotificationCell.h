//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBNotificationCell.h"

@class SBLockScreenActionContext, SBLockScreenNotificationScrollView, UILabel, UIScrollView;

@interface SBLockScreenNotificationCell : SBNotificationCell
{
    BOOL _isTopCell;
    float _currentContentAlpha;
    id <SBAwayListCellButtonHandler> _actionButtonHandler;
    SBLockScreenNotificationScrollView *_contentScrollView;
    SBLockScreenActionContext *_lockScreenActionContext;
    UILabel *_unlockTextLabel;
    id <UIScrollViewDelegate> _delegate;
    BOOL _resetsScrollOnPluginWillDisable;
    float _contentScrollViewWidth;
}

+ (float)lastLineBottomPadding;
+ (float)unlockLineBaselineOffsetFromPreviousLine;
+ (BOOL)wantsUnlockActionText;
+ (float)rowHeightForTitle:(id)arg1 subtitle:(id)arg2 body:(id)arg3 maxLines:(unsigned int)arg4 attachmentSize:(struct CGSize)arg5 secondaryContentSize:(struct CGSize)arg6 datesVisible:(BOOL)arg7 rowWidth:(float)arg8 includeUnlockActionText:(BOOL)arg9;
+ (id)defaultColorForEventDate;
+ (id)defaultColorForRelevanceDate;
+ (id)defaultColorForSecondaryText;
+ (id)defaultColorForSubtitleText;
+ (id)defaultColorForPrimaryText;
@property(readonly, nonatomic) UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(nonatomic) BOOL resetsScrollOnPluginWillDisable; // @synthesize resetsScrollOnPluginWillDisable=_resetsScrollOnPluginWillDisable;
@property(nonatomic) __weak id <UIScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SBLockScreenActionContext *lockScreenActionContext; // @synthesize lockScreenActionContext=_lockScreenActionContext;
@property(nonatomic) float contentScrollViewWidth; // @synthesize contentScrollViewWidth=_contentScrollViewWidth;
@property(nonatomic) BOOL isTopCell; // @synthesize isTopCell=_isTopCell;
- (void).cxx_destruct;
- (id)_secondaryContentView;
- (BOOL)shouldAnimateHintForTouchInCell:(struct CGPoint)arg1;
- (float)_unlockTextOriginY;
- (void)layoutSubviews;
- (BOOL)shouldVerticallyCenterContent;
- (void)_handleActionButtonPress:(id)arg1;
- (id)_buttonWithLabel:(id)arg1;
- (void)setButtonLabel:(id)arg1 handler:(id)arg2;
- (void)setRelevanceDateLabel:(id)arg1;
- (void)_updateUnlockText:(id)arg1;
- (void)_setSeparatorBackdropOverlayBlendMode:(int)arg1;
- (int)_separatorBackdropOverlayBlendMode;
- (id)_vibrantTextColor;
- (void)setContentAlpha:(float)arg1;
- (void)scrollToOriginAnimated:(BOOL)arg1;
- (void)resetScrollView;
- (void)_notePluginDisabled:(id)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

