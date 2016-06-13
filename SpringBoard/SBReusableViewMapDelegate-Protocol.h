//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBReusableViewMap, SBWindow, UIView<SBReusableView>;

@protocol SBReusableViewMapDelegate <NSObject>
- (SBWindow *)windowForRecycledViewsInViewMap:(SBReusableViewMap *)arg1;
- (unsigned int)viewMap:(SBReusableViewMap *)arg1 maxRecycledViewsOfClass:(Class)arg2;

@optional
- (void)viewMap:(SBReusableViewMap *)arg1 willRecycleView:(UIView<SBReusableView> *)arg2;
@end

