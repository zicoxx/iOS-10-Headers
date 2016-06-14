//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBAppSwitcherPageContentView.h"
#import "SBAppViewBackgroundView.h"

@class NSString, SBDisplayItem;

@interface SBSideSwitcherWhiteView : UIView <SBAppSwitcherPageContentView, SBAppViewBackgroundView>
{
    SBDisplayItem *_displayItem;
}

- (void).cxx_destruct;
- (float)cornerRadius;
- (void)setCornerRadius:(float)arg1;
- (void)invalidate;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 displayItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL hasDiscreteWallpaperEffect;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(nonatomic) int wallpaperStyle;

@end
