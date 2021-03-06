//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPageControl.h"

@class SBIconPageIndicatorImageSetCache, SBIconPageIndicatorImageSetResult;

@interface SBIconListPageControl : UIPageControl
{
    id <SBIconListPageControlDelegate> _delegate;
    BOOL _hasSetLegibility;
    BOOL _shouldShowSearchIndicator;
    float _cachedDefaultHeight;
    SBIconPageIndicatorImageSetResult *_pageIndicatorImageSets;
    SBIconPageIndicatorImageSetResult *_searchIndicatorImageSets;
    BOOL _legibilityEnabled;
    SBIconPageIndicatorImageSetCache *_imageSetCache;
}

@property(nonatomic) BOOL legibilityEnabled; // @synthesize legibilityEnabled=_legibilityEnabled;
@property(nonatomic) BOOL shouldShowSearchIndicator; // @synthesize shouldShowSearchIndicator=_shouldShowSearchIndicator;
@property(retain, nonatomic) SBIconPageIndicatorImageSetCache *imageSetCache; // @synthesize imageSetCache=_imageSetCache;
@property(nonatomic) __weak id <SBIconListPageControlDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_transitionIndicator:(id)arg1 toEnabled:(BOOL)arg2 index:(int)arg3;
- (void)_invalidateIndicators;
- (id)_indicatorViewEnabled:(BOOL)arg1 index:(int)arg2;
- (id)_iconListIndicatorImage:(BOOL)arg1;
- (id)_searchIndicatorImage:(BOOL)arg1;
- (void)_setIndicatorImage:(id)arg1 toEnabled:(BOOL)arg2 index:(int)arg3;
- (void)setLegibilitySettings:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (float)defaultHeight;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

