//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_SBFVibrantTableViewHeaderFooterView.h"

#import "SBModalLayoutCaching.h"

@class NSString, SBNotificationsClearButton, UIImageView, UILabel;

@interface SBNotificationCenterHeaderView : _SBFVibrantTableViewHeaderFooterView <SBModalLayoutCaching>
{
    UILabel *_titleLabel;
    UIImageView *_iconImageView;
    SBNotificationsClearButton *_clearButton;
    BOOL _showingClear;
    int _layoutMode;
    CDUnknownBlockType _clearButtonVisibleAction;
    CDUnknownBlockType _clearButtonFinalAction;
}

+ (float)_titleBaseline;
+ (id)titleFontForLayoutMode:(int)arg1;
@property(copy, nonatomic) CDUnknownBlockType clearButtonFinalAction; // @synthesize clearButtonFinalAction=_clearButtonFinalAction;
@property(copy, nonatomic) CDUnknownBlockType clearButtonVisibleAction; // @synthesize clearButtonVisibleAction=_clearButtonVisibleAction;
@property(readonly, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) int layoutMode; // @synthesize layoutMode=_layoutMode;
- (void).cxx_destruct;
- (void)buttonAction:(id)arg1;
- (void)layoutSubviews;
- (void)resetAnimated:(BOOL)arg1;
- (struct CGRect)_clearButtonFrame;
- (struct CGRect)contentBounds;
- (void)setHasClearButton:(BOOL)arg1;
- (void)_removeClearButton;
- (void)_addClearButton;
- (void)setBackgroundView:(id)arg1;
- (int)initialGraphicsQuality;
- (id)initWithCoder:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
